#include <iostream>
using namespace std;
int mcd(int, int);
int mcm(int, int);

int main(){
    int a;
    cin >> a;
    int result(1);
    while(a--){
      
      for (int i=2; i<=a; i++){
        result = mcm(result, i);
      }
    }
    cout << result << endl;

    return 0;
}

int mcd(int m, int n){
    int p(1), aux;
    if(m < n){
      aux = m;
    }
    else{
      aux = n;
    }
    for (int i = 1; i <= aux; i++)
    {
        if((m % i == 0) && (n % i == 0)){
            p = i;
        }
    }
    return p;
}
int mcm(int p, int q){
  int max,s;
  if(p > q){
    max=p;
  }
  else{
    max=q;
  }
  //s=max;
  while((max%p != 0) || (max%q != 0)){
    max+=1;
  }
  return max;
}