#include <iostream>
using namespace std;

class nodo{
    private:
        int data;
        nodo *left;
        nodo *right;

    public:
        nodo(int data_);
        nodo(nodo *leafleft, int data_ , nodo *leafright);

        int getnodo();
        nodo *subbranchleft();
        nodo *subbranchright();

        void newdata(int data_);
        void branchleft(nodo *element);
        void branchright(nodo *element);

};

nodo::nodo(int data_){
    data = data_;
    left = right = nullptr;
}

nodo::nodo( nodo *leafleft, int data_, nodo *leafright){
    data = data_;
    left = leafleft;
    right = leafright;
}

int nodo::getnodo(){
    return data;
}

nodo *nodo::subbranchleft(){
    return left;
}

nodo *nodo::subbranchright(){
    return right;
}

void nodo::newdata(int data_){
    data = data_;
}

void nodo::branchleft(nodo *element){
    left = element;
}

void nodo::branchright(nodo *element){
    right = element;
}

/*** CLASS BINARY TREE ***/

class binarytree{

    private:
        nodo *root;
    public:
        binarytree();
        binarytree(nodo *data);
        void setroot(nodo *data);
        nodo* getroot();
        nodo rootree();
        bool empty();
        nodo* childleft();
        nodo* childright();
        nodo* newtree(nodo* branchleft, int data, nodo* branchright);
};

binarytree::binarytree(){
    root = nullptr;
}

binarytree::binarytree(nodo *data){
    root = data;
}

void binarytree::setroot(nodo *data){
    root = data;
}

nodo* binarytree::getroot(){
    return root;
}

nodo binarytree::rootree(){
    if (root)
    {
        return *root;
    }else{
        throw "empty tree\n";
    }    
}

bool binarytree::empty(){
    return root == nullptr;
}

nodo* binarytree::childleft(){
    if (root)
    {
        return root->subbranchleft();
    }else{
        throw "empty tree\n";
    }
    
}

nodo* binarytree::childright(){
    if (root)
    {
        return root->subbranchright();
    }else{
        throw "empty tree\n";
    }
    
}

nodo* binarytree::newtree(nodo* branchleft, int data_, nodo* branchright){
    return new nodo(branchleft, data_, branchright);
}



int main (){




    return 0;
}