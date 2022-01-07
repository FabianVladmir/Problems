#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int answer(0);

        if(n <= 2){
            --n;
            cout << n << endl;
        }
        if(n >2 ){
            n-=2;
            cout << n << endl;
        }

        // for(int i=n-1; i>0 ; i-- ){
        //     if( n & i != 0)
        //         --n;
        //         answer++;
        // }

        // if (answer == 1)
        // {
        //     cout << answer << endl;
        // }
        // if (answer > 1) {
        //     cout << answer-1 << endl;
        // }
        // // cout << answer << endl;
    }
    


    return 0;
}


// void solve(){
//     int n;
//     cin>>n;
//     for(int i=31;i>=0;i--){
//         if(n&(1<<i)){
//             cout<<((1<<i)-1)<<"\n";
//             return;
//         }
//     }
// }  
// while(t--)
// 	{
// 		int n;
// 		cin>>n;
// 		int last=0;
// 		for(int i=0; i<30; ++i)
// 		{
// 			if(((n>>i)&1) == 1)
// 			{
// 				last=i;
// 			}
// 		}
// 		cout<<(1<<last)-1<<"\n";
// 	}