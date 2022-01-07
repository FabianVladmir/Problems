#include <iostream>
using namespace std;

int main(){
    int n, buf;
    cin >>  n;

    int cnt[10] {0};    
    for(int i=0; i<n; i++)
    {        
        cin >>  buf;
        cnt[buf]++;
    }

    int ans[5] {0};    
    bool flag = true;
    for(int i=0; i<n/3; i++)
    {
        if(cnt[4] > 0 && cnt[2] > 0 && cnt[1] > 0)
        {
            ans[0]++;
            cnt[4]--;
            cnt[2]--;
            cnt[1]--;
            continue;
        }
        if(cnt[6] > 0 && cnt[2] > 0 && cnt[1] > 0)
        {
            ans[1]++;
            cnt[6]--;
            cnt[2]--;
            cnt[1]--;
            continue;
        }
        if(cnt[6] > 0 && cnt[3] > 0 && cnt[1] > 0)
        {
            ans[2]++;
            cnt[6]--;
            cnt[3]--;
            cnt[1]--;
            continue;
        }
        flag = false;
        break;
    }

    if(flag == false)
        cout << "-1\n";
    else
    {
        for(int i=0; i<ans[0]; i++)
            cout << "1 2 4\n";
        for(int i=0; i<ans[1]; i++)
            cout << "1 2 6\n";
        for(int i=0; i<ans[2]; i++)
            cout << "1 3 6\n";
    }   
    return 0;
}