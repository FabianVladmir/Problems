#include <iostream>
#include <algorithm>

using namespace std;

int main ()
{
     const int maxn = 1e5 + 1000;
     int n;
     cin >> n;
     int a[maxn];
     for (int i = 0; i <n; i ++)
         cin >> a [i];
     int flag = 0;
     int l = 0, r = 0;
     for (int i = 0; i <n-1; i ++)
     {
         if (a [i]> a [i + 1])
         {
             l = i;
             break;
         }
     }
     for (int i = n-1; i >= 1; i--)
     {
         if (a [i] <a [i-1])
         {
             r = i;
             break;
         }
     }
     
     reverse (a + l, a + r + 1);
     for (int i = 0; i <n-1; i ++)
     {
         if (a [i]> a [i + 1])
         {
             flag = 1;
             break;
         }
     }
     if (flag)
         cout << "no" << endl;
     else
     {
         cout << "yes" << endl;
         cout <<  l + 1 << " " <<  r + 1;
     }
     return 0;
} 