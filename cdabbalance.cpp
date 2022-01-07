#include <bits/stdc++.h>
using namespace std;

void solve(string &cad){

    int n=cad.size();
    if(n<2){
        cout << cad << endl;
        return;
    }

    int countAB, countBA, posAB, posBA;
    posAB = cad.find("ab",0);
    posBA = cad.find("ba",0);
    countAB = 0;
    countBA = 0;

    // cout << posAB << " "  << posBA << endl;
    // string::size_type pos = 0;
    // string target = "ab";
    // while ((pos = cad.find("target", pos )) != string::npos) {
    //     countAB++;
    //     pos+=target.size();
    // }

    while (posAB != string::npos)
    {
        countAB++;
        posAB = cad.find("ab",posAB+2);

    }

    while (posBA != string::npos)
    {
        countBA++;
        posBA = cad.find("ba",posBA+2);

    }
    
    // cout << countAB << " "  << countBA << endl;
    posAB = cad.find("ab",0);
    posBA = cad.find("ba",0);
    
    if(countAB == countBA){
        cout << cad << endl;
        return;
    }

    while (countAB != countBA)
    {
        if(countAB > countBA){
            cad[posAB] = 'b';
            countAB--;
            posAB = cad.find("ab",posAB+2);
        }
        else{
            cad[posBA] = 'a';
            countBA--;
            posBA = cad.find("ab",posBA+2);
        }
    }
    

    cout << cad << endl;
    return; 

}



int main(){

    int t;
    cin >> t;
    while (t--)
    {
        string cad;
        cin >> cad;
        solve(cad);
    }
    



    return 0;
}