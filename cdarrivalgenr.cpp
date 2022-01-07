#include <iostream>
using namespace std;

int main(){
    int numSoldiers; 
    cin >> numSoldiers;
    int currentSoldier = 0,minSoldier = 101,maxSoldier = 0,minPos = 100,maxPos = 0;
    for(int k = 0; k < numSoldiers; ++k){
        cin >> currentSoldier;
        if(currentSoldier >  maxSoldier){maxPos = k; maxSoldier = currentSoldier;}
        if(currentSoldier <= minSoldier){minPos = k; minSoldier = currentSoldier;}
    }
    int output = maxPos + (numSoldiers - 1 - minPos);
    if(minPos < maxPos){--output;}
    cout << output << endl;
    return 0;
}