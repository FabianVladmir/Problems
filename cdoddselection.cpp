#include <iostream>
using namespace std;

int main(){

    int t;
    cin >> t;
    while (t--)
    {
        int n, x, cant_impar(0), cant_par(0);
        cin >> n >> x;
        int arr[n+1];
        int *array = new int [n];
        for (size_t i = 0; i < n; i++)
        {
            cin >> array[i];
            if (array[i] % 2 != 0)
            {
                cant_impar++;
            }
            else
            {
                cant_par++;
            }
            
        }

        if (n == x) {
			if (cant_impar % 2 != 0) {
				cout << "Yes" << "\n";
			} else {
				cout << "No" << "\n";
			}
		} else {
			if (cant_impar == 0) {
				cout << "No" << "\n";
			} else {
				int rem = x - 1;
				cant_impar = cant_impar - 1;
				//rem = rem - (cant_impar / 2) * 2;
				if (rem >= (cant_impar / 2) * 2 ) {
					rem = rem - (cant_impar / 2) * 2;
					if (rem <= cant_par) {
						cout << "Yes" << "\n";
					} else {
						cout << "No" << "\n";
					}
				} else {
					if (rem % 2 == 0) {
						cout << "Yes" << "\n";
					} else {
						if (cant_par == 0) {
							cout << "No" << "\n";
						} else {
							cout << "Yes" << "\n";
						}
					}
				}
			}
		}
        
        

        delete array;
    }

    return 0;
}