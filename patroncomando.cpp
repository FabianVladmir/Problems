#include <iostream>
#include <memory>
#include <stack>
using namespace std;

class ICommand{
    virtual void execute() = 0;
    //virtual ~ICommand(){}
};

class Televisor{
    bool estado;
    int canal;

    public:
        Televisor(bool estado_, int canal_): estado(estado_), canal(canal_) {}
        void EncederTele() { estado = true; }
        void ApagarTele() { estado = false; }
        void CambiarCanal(int numero_canal){
            canal = numero_canal;
        }
        bool Encedido() { return estado; }
        int CanalActual() { return canal; }
};

class TvEncendidad : public ICommand{
    Televisor *tv;

    public:
        TvEncendidad(Televisor &mtv): tv(&mtv){}
        void execute() { tv->EncederTele(); } 
};

class TvApagada : public ICommand{
    Televisor *tv;
    
    public:
        TvApagada(Televisor &mtv): tv(&mtv){}
        void execute() { tv->ApagarTele(); }
};

class TvCambiarCanal : public ICommand{
    Televisor *tv;
    int newcanal;
    
    public:
        TvCambiarCanal(Televisor &mtv, int canal_) : tv(&mtv), newcanal(canal_){}
        void execute(){
            tv->CambiarCanal(newcanal);
        }
};

typedef stack<shared_ptr<ICommand>> CRemoto;

class ControlRemoto{
    CRemoto unstack;
    CRemoto restack;

    public:
        ControlRemoto(){}

        void executeCrt(shared_ptr<ICommand> comando){
            restack = CRemoto();
            comando->execute();
            unstack.push(comando);
        }
};
