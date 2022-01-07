#include <iostream>
using namespace std;

int main(){
    int n, total(0), cont(1), i(0), line(0), acum(0);
    cin >> n;
    
    if (n == 1)
    {
        cout << 1 << endl;
        return 0;
    }
    
    while (true)
    {
      total = i + cont;
      i = total;
      cont++;
      acum = acum + total;
      if (acum >= n)
      {
          
          break;
      }
      line++;   
    }
    
    cout << line << endl;
    return 0;
}