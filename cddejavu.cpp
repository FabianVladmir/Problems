#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
bool isPal(string s){
    for(int i=0;i<(int)s.size()/2;i++){
        if(s[i]!=s[(int)s.size()-1-i]) return false;
    }
    return true;
}
 
void solve(){
    string s;
    cin>>s;
    int n=s.size();
    bool all_a=true;
    for(int i=0;i<n;i++){
        if(s[i]!='a') all_a=false;
    }
    if(all_a){
        cout<<"NO"<<"\n";
        return;
    }
    if(!isPal('a'+s)){
        cout<<"YES"<<"\n";
        cout<<('a'+s)<<"\n";
    }
    else{
        cout<<"YES"<<"\n";
        cout<<(s+'a')<<"\n";
    }
}  
int main(){
    ios::sync_with_stdio(0);
            cin.tie(0);
            cout.tie(0);
            cout<<fixed;
            cout<<setprecision(10);
    //        freopen("timber_input.txt", "r", stdin);
    //        freopen("timber_output.txt", "w", stdout);
            int t=1;
            cin>>t;
            for(int i=1;i<=t;i++){
            //    cout<<"Case #"<<i<<": ";  
                solve();
    }
    return 0;
}



// #include <iostream>
// #include <bits/stdc++.h>

// using namespace std;

// bool ispalindrome(string s){

//     int i = 0;
//     int j = s.size() - 1;

//     for (; i <= s.size() / 2; i++, j--)
//     {
//         if (s[i] != s[j])
//         {
//             return false;
//         }
        
//     }
//     return true;
// }


// int main(){

//     int t;
//     cin >> t;
//     while (t--)
//     {
//         bool  flag = false;
//         string s;
//         cin >> s;
//         string aux(s);
//         int sz = s.size();
//         if(sz < 2){
//             flag = false;
//         }

//         if(ispalindrome(s)){
//             s.push_back('a');
//             flag = true;
            
//         }
//         int i=0;
//         if(s[0] == 'a' || s[sz - 1] == 'a'){
//             i++;
//             s.insert(i,"a");
//             if (ispalindrome(s))
//             {
//                 i++;
//                 s = aux;
//                 s.insert(i,"a");
//             }
//             flag = true;
//         }
       

//         if(!flag && !ispalindrome(s)){
//             cout << "NO" << endl;
//         }else{
//             cout << "YES" << endl << s << endl;

//         }

//     }
    

//     return 0;
// }