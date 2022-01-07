#include <iostream>
using namespace std;

int main(){
    int n, *p, total(0), aux;
    cin >> n;
    p = new int[n];
    for (size_t i = 0; i < n; i++)
    {
        cin >> p[i];
    }
    for (size_t i = 0; i < n; i++)
    {
        if(p[i] > 0) {                //if input p[i]alue is +p[i]e
            total = total + p[i];         //increment police recruits to that p[i]alue
        }
        else if(p[i] < 0){            //if input p[i]alue is -1 and
            if(total > 0) {          //if we hap[i]e some +ve value of total 
                total--;             //then cnt is decremented
            }
            else {                 //if input value is -1
                aux++;           //and no +ve value for cnt,
            }                      //untreated crimes is incremented
        }
    }
   
    cout << aux << endl;

    delete []p;
    return 0;
}