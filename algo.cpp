/*#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    int n, m;
    string number[] = {"one","two","three","four","five","six","seven","eight","nine"};
    cin >> n >> m;
    for (int i = n; i <= m; i++){
        if (i <= 9){
            cout << number[i-1] << endl;}
        else if(i > 9 && i % 2 == 0){
            cout << "even" << endl;            
        }
        else if(i > 9 && i % 2 == 1){
            cout << "old" << endl;
        }
    }
    return 0;
}
 */
#include <iostream>
#include <cstdio>
using namespace std;
//int max_of_four(int, int, int, int);
/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
/*
int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int ans = max_of_four(a, b, c, d);
    cout << ans << endl;    
    return 0;
}

int max_of_four(int a, int b, int c, int d)
	{
        int max = 0;
        
    if (a > b && a > c && a > d)
        max = a;    
    else if(b > c && b > d)
        max = b;   
    else if (c > d)
        max = c;
    else
        max = d;    
    
    }
*/
int main(){
	int *p, n;
    cin >> n;
    p = new int[n];
    for(int i = 0; i < n; i++){
        cin >> p[i];
    }

    for(int i = n; i > 0; i--){
        cout << p[i] << " ";
    }	
	return 0;
}

