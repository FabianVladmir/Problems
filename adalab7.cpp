#include <iostream>
#include <vector>
using namespace std;

int maxSquare(vector<vector<int>> matrix, int x, int y){

    if (x > matrix.size() || y>matrix[0].size())
    {
        return 0;
    }
    
    int m = matrix.size() - x+1;
    int n = matrix[0].size() - y+1;
    int totalSquare = 0;
    int dp[m][n];
    dp[0][0] = 1;
    for (int i = 1; i < m; i++)
    {
        dp[i][0] = i+1;
    }
    for (int j = 1; j < n; j++)
    {
        dp[0][j] = j+1;        
    }    

    for (int i = 1; i < m; i++)
    {
        for (int j = 1; j < n; j++)
        {
            dp[i][j] = (dp[i][0] * dp[0][j])  + dp[i-1][j-1]; 
        }        
    }

    for (size_t i = 0; i < m; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            cout << dp[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    
    return dp[m-1][n-1];
}


int main(){

    int rows, cols;
    cin >> rows >> cols;
    vector<vector<int>> matrix(rows,vector<int>(cols));

    int answer = maxSquare(matrix,10,10);

    cout << answer;

    return 0;
}

int maxSumSubmatrix(vector<vector<int>>& matrix) {
    int n = matrix.size();
    int m = matrix[0].size();
    int maxSum = INT_MIN;
   
    for(int i=0;i<n;i++){
        for(int j=1;j<m;j++)
            matrix[i][j]+=matrix[i][j-1];
    }
   
    for(int start=0;start<m;start++){
        for(int end=start;end<m;end++){
            set<int> temp = {0};
            int pref_sum = 0;
            
            for(int i=0;i<n;i++){
                int sum = matrix[i][end];
                if(start>0)
                    sum-=matrix[i][start-1];
                pref_sum+=sum;
                auto itr = temp.lower_bound(pref_sum);
                if(itr!=temp.end())
                    maxSum = max(maxSum,pref_sum-(*itr));
                s.insert(pref_sum);
            }
        }
    }
    return maxSum;
}