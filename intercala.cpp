#include <vector>
#include <time.h>

using namespace std;
/* p -> beginnig of array A
   r -> ending of array A
   q -> center of array A

*/

void intercala(vector<int> &A, int p, int q, int r){
    // vector temp B with size r-p
    vector<int> B(r+1);

    // assignment from p to p in B 
    for (size_t i = p; i < q; i++)
    {
        B[i] = A[i];
    }

    // assignment from q+1 to r in B 
    for (size_t j = q+1; j < r; j++)
    {
        B[r+q+1-j] = A[j];
    }

    //updating indexes
    int i,j;
    i = p;
    j = r;
    

    // select the largest item (B[i] or B[j])
    for (size_t k = p; k <= r; k++)
    {
        if (B[i] <= B[j])
        {
            A[k] = B[i];
            i++;
        }
        else{
            A[k] = B[j];
            j--;
        }
    }
   
}
