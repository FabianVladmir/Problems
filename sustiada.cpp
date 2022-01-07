#include <bits/stdc++.h>
using namespace std;

int number_more_time(vector<int> arr){
    if(arr.size()==0) return 0;

    int cont=1;
    int maxx=0;
    int answer, curr;    

    for (size_t i = 0; i < arr.size(); i++)
    {
        curr = arr[i];
        for (size_t j = i; j < arr.size(); j++)
        {
            if (curr == A[j])
            {
                cont++;
            }                        
        }
        if(cont > maxx)
        {
            maxx = cont;
            answer = arr[i];
        }        
    }
    return answer;    
}

int number_more_time_n(vector<int> arr){

    map<int,int> mp;
    for (size_t i = 0; i < arr.size; i++)
    {
        mp[arr[i]]++;
    }
    
    int maxx = 0;
    int answer;
    for (auto it = mp.begin(); it != mp.end(); it++)
    {
        if(it->second > maxx)
        {
            maxx = it->second;
            answer = it->first;
        }
        maxx = max(itr->second,maxx);
    }
    return answer;
}

vector<int> leastsquares(vector<int> arr){

    vector<int> ans;
    int n=arr.size();
    int limit = sqrt(n);
    for (size_t i = 0; i < n; i++)
    {
        if(limit>arr[i]){
            ans.push_back(arr[i]);
        }
    }
    return ans;
}

int longestseq(vector<int>& arr) {
        
    int n= arr.size();
    vector<vector<int>> dp(arr.size(),vector<int>(n,1));
    
    unordered_map<int,int> mp;
    for(int i=0;i<arr.size();i++)
        mp[arr[i]]=i;
    int ans=0;
    for(int i=1;i<arr.size();i++)
    {
        for(int j=i-1;j>=0;j--)
        {
            ans=max(ans,dp[j][i]+1);
            int need=arr[j]+arr[i];
            if(mp.find(need)!=mp.end())
                dp[i][mp[need]]=dp[j][i]+1;
        }
    }
    return ans>2 ? ans : 0;
        
}


// int A[10]={5,5,6,6,6,7,7,7,7,7};
//     int mayor=0;
//     int indice;
//     for(int i=0;i<10;i++)
//     {
//         int contador=1;
//         int  aux=A[i];
//         for(int j=i;j<10;j++)
//         {
//             if(aux==A[j])
//             {
//                 contador++;
//             }
//         }
//         if(contador>mayor){
//             mayor=contador;
//             indice=A[i];
//         }
//     }