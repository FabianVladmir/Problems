#include <iostream>
using namespace std;

class NodoBook{
    private: 
        friend class Authors;
        int ISBN;
        string title;
        int year;
        string editorial;    
        string summary;
        NodoBook *head;
        NodoBook *next;
    
    public:
        NodoBook();
        NodoBook(int ISBN_, string title_, int year_, string editorial_, string sumary_);
        void setISBN(int ISBN_);
        void setTitle(string title_);
        void setYear(int year_);
        void setEditorial(string editorial_);
        void setSumary(string summary_);

        int getISBN();
        string getTitle();
        int getYear();
        string getEditorial();
        string getSumary();
        
        void addBook();
        void deleteBook(int id);
        void findBookISBN(int id);
        void findBookTitle(string title_);  
        ~NodoBook();        

};

NodoBook::NodoBook(){

    this->ISBN = 0;
    this->title = "";
    this->year = 0;
    this->editorial = "";
    this->summary = "";
    this->next = nullptr;
    this->head = nullptr;

}

NodoBook::NodoBook(int ISBN_, string title_, int year_, string editorial_, string sumary_ ){

    this->ISBN = ISBN_;
    this->title = title_;
    this->year = year_;
    this->editorial = editorial_;
    this->summary = summary;
    this->next = nullptr;
    this->head = nullptr;

}

void NodoBook::setSumary(string summary_){
    this->summary = summary_;
}

void NodoBook::setISBN(int ISBN_){
    this->ISBN = ISBN_;
}

void NodoBook::setEditorial(string summary_){
    this->summary = summary_;
}

void NodoBook::setTitle(string title_){
    this->title = title_;
}

void NodoBook::setYear(int year_){
    this->year = year_;
}

int NodoBook::getISBN(){
    return ISBN;
}

int NodoBook::getYear(){
    return year;
}

string NodoBook::getTitle(){
    return title;
}

string NodoBook::getSumary(){
    return summary;
}

string NodoBook::getEditorial(){
    return editorial;
}

void NodoBook::addBook(){
    
}


void NodoBook::deleteBook(int id){

    
}

void NodoBook::findBookISBN(int id){


}

void NodoBook::findBookTitle(string title_){

}


/**** CLASS AUTHORS****/

class Authors{

    private:
        string FirstandLastName;
        NodoBook *head;
        Authors *next;
    public:
        Authors();
        Authors(string fnl, NodoBook *head_, Authors *next_);
        void setAuthor(string authors_);
        string getAuthor();
        void findAuthor(string authors_);

};

Authors::Authors(){

    this->FirstandLastName = "";
    this->head = nullptr;
    this->next = nullptr;
}

Authors::Authors(string fnl, NodoBook *head_, Authors *next_){
    
    this->FirstandLastName = fnl;
    this->head = nullptr;
    this->next = nullptr;
}

void Authors::setAuthor(string authors_){
    this->FirstandLastName = authors_;
}

string Authors::getAuthor(){
    return FirstandLastName;
}

void Authors::findAuthor(string authors_){

}


int main(){




    return 0;
}