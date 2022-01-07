#include <bits/stdc++.h>
// #include <iostream>
// #include <algorithm>
using namespace std;

bool ispalindrome(string s){
    int i,j;
    i = 0;
    j = s.size()-1;
    for ( ; i < s.size();)
    {
        if (s[i++] != s[j--])
        {
            return false;
        }
        
    }
    return true;

}

int main(){

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        string cad;
        cin >> n >> cad;
        int num_zeros = count(cad.begin(), cad.end(), '0');
        int spend_alice, spend_bob;
        spend_bob = 0;
        spend_alice = 0;

        
        while (num_zeros--)
        {
            if (ispalindrome(cad))
            { 
                if(num_zeros % 2 == 0) { 
                    if(spend_alice % 2 == 0) 
                        continue;
                    else{
                        spend_alice++;
                    }
                }
                else{
                    if(spend_alice % 2 != 0) 
                        continue;
                    else{
                        spend_alice++;
                    }
                }
                
            }
            
            else{
                spend_bob++;
            }
        }
        
        if(spend_alice > spend_bob){
            cout << "BOB" << endl;
        }
        else if(spend_alice < spend_bob){
            cout << "ALICE" << endl;
        }
        else if(spend_alice == spend_bob){
            cout << "DRAW" << endl;
        }
     
    }
    

    return 0;
}