#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main(){

    ifstream doc;
    string txt;
    string answer = "";
    doc.open("ejemplo2.txt",ios::in); // mod read    

    while (!doc.eof())
    {
        getline(doc,txt);
        
        for (size_t i = 0; i < txt.size(); i++)
        {
            answer+=txt[i];

            if (txt[i+1] == ' ' || txt[i+1] == '\n' || txt[i+1] == '\t')
            {
                if (isdigit(answer[i]))
                {
                    cout << "digit" << endl;
                }
                if (isalpha(answer[i]))
                {
                    cout << "string" << endl;
                }else{
                    cout << "special character" << endl;
                }
                answer = "";
                
            }            
        }
        
    }
    doc.close();


    return 0;
}