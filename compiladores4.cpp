#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main(){

    ifstream doc;
    string txt;
    string answer = "";
    doc.open("ejemplo.txt",ios::in); // mod read
    int range;
    cin >> range;

    while (!doc.eof())
    {
        getline(doc,txt);
        
        for (size_t i = 0; i < txt.size(); i++)
        {
            if(isupper(txt[i])){
                answer+=char(int(txt[i]+range-65)%26 +65);
            }
            else{
                answer+=char(int(txt[i]+range-97)%26 +97);
            }
        }
        cout << answer << endl;
        
        
    }
    doc.close();


    return 0;
}