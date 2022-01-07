#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main(){

    ifstream doc;
    string txt;
    doc.open("ejemplo.txt",ios::in); // mod read

    while (!doc.eof())
    {
        getline(doc,txt);
        for (size_t i = 0; i < txt.size(); i++)
        {
            if (txt[i] == ' ')
            {
                continue;
            }
            
            cout << txt[i] << endl;
        }
        // cout << txt << endl;
        
    }
    doc.close();

    return 0;
}