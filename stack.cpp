#include <iostream>
#include <string>
#include <fstream>
#include <stack>
using namespace std;

bool exp_aritm(string);

int main(){

  ifstream doc;
  string txt;
  doc.open (" output.txt ",ios::in ) ; // mod read
  
    while (! doc . eof () )
    {
        getline ( doc,txt ) ;
        if (exp_aritm(txt));


    }
    doc.close () ;


  return 0;
}

bool exp_aritm(string s){

    int total;
    
    stack<char> st;
    int num1, num2;
    for(int i=0; i<s.size(); i++){
        if(isdigit(s[i]))
            st.push(s[i]);
            
        else{
            char tmp = st.top();
            st.pop();
           
            if (isdigit(tmp))
            {
                num1 = st.top();
                st.pop();
                num2 = st.top();
                st.pop();
            }
            
            else{
                if(tmp == '+') 
                    total += num1 + num2;
                if(tmp == '-') 
                    total+= num1 - num2;

                if(tmp == '*') 
                    total+= num1 * num2;
                if(tmp == '/') 
                    total+= num1 / num2;
                st.pop();
            }
            

        }
    }
    
    if (st.size() == 0)
    {
        cout << total << endl;
        return true;
    }else{
        return false;
    }
    
    
}