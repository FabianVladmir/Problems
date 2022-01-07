#include <iostream>
#include <string>
#include <fstream>
using namespace std;

void opentxt();

int main(){

    opentxt();



    return 0;
}

void opentxt(){
    string text;
    ifstream archive;

    archive.open("C:/Programas/process.txt", ios::in);

    if (archive.fail())
    {
        cout << "the file could not be opened\n";
        exit(1);
    }
    while (!archive.eof())
    {
        getline(archive,text);

        cout  << text.size() << endl;/*
        for (size_t i = 0; i < text.size(); i++)
        {
            if (text[i] != 32 || text[i] != '\0')
            {
                cout << text [i] << endl;
            }else if (text[i] >= 48 || text[i] <= 57)
            {
                cout << " " << text[i] << endl;
            }
            
            else
            {
                cout << text[i];
            }
            
            
        }
        cout << text.size() << endl;*/
    }  
    

    archive.close();
}