#include <iostream>
#include <cmath>    
#include <iomanip>  

using namespace std;

int main() {
    int n;
    cin >> n; 

    double hypotenuses[n]; 

    
    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        hypotenuses[i] = sqrt(a * a + b * b); 
    }

    
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (hypotenuses[j] > hypotenuses[j + 1]) {
                
                double temp = hypotenuses[j];
                hypotenuses[j] = hypotenuses[j + 1];
                hypotenuses[j + 1] = temp;
            }
        }
    }

    
    for (int i = 0; i < n; i++) {
        cout << fixed << setprecision(6) << hypotenuses[i] << " ";
    }
    cout << endl;

    return 0;
}
