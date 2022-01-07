#include <bits/stdc++.h>
using namespace std;


int main(){



    return 0;
}



int totalisland(vector<vector<int>> &matrix){
        int answer(0);

        int n = matrix.size();
        int m = matriz[0].size();


        for (size_t i = 0; i < n; i++)
        {
            for (size_t j = 0; j < m; j++)
            {
                answer = checkisland(matrix,i,j);
            }
            
        }

    return answer;

}

int vector<int,int> dir = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}, {1, 1}, {1, -1}, {-1, 1}, {-1, -1}};

int checkisland(vector<vector<int>> matrix, int i, int j){

    int cont = 0;

    if (matrix[i][j] == 1){
        cont++;
        for(int &j:dir){
            if(j == matrix[i][j])
                checkisland(matrix,i,j);
            else{
                matrix[i][j] = 0;
            }
        }
    }
    return cont;
}
