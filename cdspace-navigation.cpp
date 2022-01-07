#include <iostream>
#include <string.h>
using namespace std;

int main(){

    int t;
    cin >> t;

    while (t--)
    {
        int x, y;
        cin >> x >> y;
        int count_R(0), count_L(0), count_U(0), count_D(0);
        string s;
        cin >> s; 
        
        if(x==0 && y==0){
            cout<< "YES" << endl;
            continue;
        }


        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'R')
            {
                count_R++;
            }else if (s[i] == 'L')
            {
                count_L++;
            }else if (s[i] == 'U')
            {
                count_U++;
            }
            else if (s[i] == 'D')
            {
                count_D++;
            }
            
        }

        // cout << count_D << " " << count_U << " " << count_R << " " << count_L << endl;
        if (x >= 0 && y >= 0)
        {
            if (x <= count_R && y <= count_U)
            {
                cout << "YES" << endl;
                
            } 
             else{
                cout << "NO" << endl;
            }                     
            
        }
        else if (x >= 0 && y <= 0)
        {
            if (x <= count_R && y*(-1) <= count_D)
            {
                cout << "YES" << endl;
                
            }
             else{
                cout << "NO" << endl;
            }
            
            
        }else if ( x <= 0 && y >= 0)
        {
            if (x*(-1) <= count_L && y <= count_U)
            {
                cout << "YES" << endl;
                //return;
            }
            else{
                cout << "NO" << endl;
            }
            
        }
        else if (x <= 0 && y <= 0)
        {
            if ( x*(-1) <= count_L && y*(-1) <= count_D)
            {
                cout << "YES" << endl;
                //return;
            }
             else{
                cout << "NO" << endl;
            }            
            
        }        
        
    }

    return 0;
}