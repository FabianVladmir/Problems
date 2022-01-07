#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    int count;
    set<int> arry;
    cin >> count;
    while(count > 0){
        int number, element;
        cin >> number >> element;
        switch(number){
            case 1:
                arry.insert(element);
                count--;
                break;
            case 2:
                arry.erase(element);
                count--;
                break;
            case 3:
                cout << (arry.find(element) == arry.end() ? "No" : "Yes")<< endl;
                count--;
                break;           
        }
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
