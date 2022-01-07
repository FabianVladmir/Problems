#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while (t--)
    {
        int x ,y;
        cin >> x >> y;
        string s;
        cin >> s;

        char prev_letter = s[0];
        int answer(0);
        int cont_j = count(s[0], s.size(), 'J');
        int cont_c = count(s[0], s.size(), 'C');

        // for (size_t i = 0; i < s.size(); i++)
        // {
        //     s[i] == 'C' ? cont_c++ : cont_j++; 
        // }
        
        cout << cont_j << " " << cont_c;



        for (size_t i = 1; i < s.size() - 1; i++)
        {
            char curr_letter = s[i];
            if(curr_letter == 'C' && prev_letter == 'J'){
                answer+=y;
            }

            if(curr_letter == 'J' && prev_letter == 'C'){
                answer+=x;
            }

            if(prev_letter == '?'){
                s[i-1] = curr_letter;
            }

            if(curr_letter == '?'){
                s[i] = prev_letter;
            }

            if(prev_letter == '?' && curr_letter == '?'){
                s[i] = 'C';
            }   

        }
        


    }
    


    return 0;
}