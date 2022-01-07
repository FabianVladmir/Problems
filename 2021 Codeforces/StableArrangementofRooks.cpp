// #include <bits/stdc++.h>
// using namespace std;

// void solve(){

//     int n, k;
//     cin >> n >> k;

//     if(n== 1 && k == 1){
//         cout << "R" << endl;
        
//     }

//     else if(n % 2 == 0)
//         cout << -1 << endl;

//     else if(n == k){
//         cout << -1 << endl;
        
//     }

//     else{        
        
//         int points = 1;
//         for (size_t i = 1; i <= n; i++)
//         {
//             bool col = true;
//             bool row = true;
//             if(i%2 == 0)
//                 col = false;   
            

//             for (size_t j = 1; j <= n; j++)
//             {          
                                
//                 if(col & (j == points)){
//                     if(k <= 0) {continue;}

//                     else{
//                         cout << "R";
//                         k--; } 
                
//                 }
                
//                 else{
//                     cout << ".";
//                 }
//             }

//             // while (points--)
//             // {
//             //     cout << ".";
//             // }
//             cout << endl;
//             if(col)                
//                 points = n;
//             else{
//                 points = i;
//             }
            
//         }
        
//     }

// }


// int main(){

//     int t;
//     cin >> t;
//     while (t--)
//     {
//         solve();
//     }
    

//     return 0;
// }

#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        if (k > (n + 1) / 2)
        {
            cout << "-1\n";
            continue;
        }
        vector<string> s(n, string(n, '.'));
        for (int i = 0; i < k; i++)
            s[2 * i][2 * i] = 'R';
        for (int i = 0; i < n; i++)
            cout << s[i] << "\n";
    }
}

