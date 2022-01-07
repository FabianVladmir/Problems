#include <iostream>
#include <memory>
#include <vector>
using namespace std;

class ICommand{
    virtual void execute() = 0;
};

class Automovil
{
public:
    // friend class CommandEnceder;
    Automovil();
    ~Automovil();
    void Encender();
    void Apagar();
    void AlarmaOn();
    void AlarmaOff();
};
Automovil::Automovil(){}

void Automovil::AlarmaOff(){
    cout << "Alarma apaga\n";
}

void Automovil::AlarmaOn(){
    cout << "Alarma encendida\n";
}

void Automovil::Apagar(){
    cout << "Se ha apagado el auto\n";
}

void Automovil::Encender(){
    cout << "Se ha encendido el auto\n";
}
Automovil::~Automovil(){}

/*********************/
class CommandEncender : public ICommand{
    Automovil *carro;
    public:
        CommandEncender(Automovil &car):carro(&car){}
        void execute(){ carro->Encender(); }           
};

class CommandApagar : public ICommand{
    Automovil *carro;
    public:
        CommandApagar(Automovil &car):carro(&car){}
        void execute(){ carro->Apagar(); }           
};

class CommandAlarmaOff : public ICommand{
    Automovil *carro;
    public:
        CommandAlarmaOff(Automovil &car):carro(&car){}
        void execute(){ carro->AlarmaOff(); }
};

class CommandAlarmaOn : public ICommand{
    Automovil *carro;
    public:
        CommandAlarmaOn(Automovil &car):carro(&car){}
        void execute(){ carro->AlarmaOn(); }
};


class ControlRemoto{
    unique_ptr<ICommand> comandos;

    public:
        
};
