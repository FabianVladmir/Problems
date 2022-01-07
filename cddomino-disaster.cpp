#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s, ans;
        cin >> n >> s;

        for(int i=0; i<s.size(); i++){

            if(s[i] == 'D'){
                
                s[i] = 'U';  } 

            else if(s[i] == 'U')
                s[i] = 'D';

            
            // else{
            //     ans[i] = s[i];
            // }

        }
        cout << s << endl;
    }
    



    return 0;
}