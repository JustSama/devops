#include <iostream>
using namespace std;

int main() {
    int n, w;
    cin >> n >> w;
    int a[n];
    
   
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (a[j] < a[j + 1]) { 
                int b = a[j];
                a[j] = a[j + 1];
                a[j + 1] = b;
            }
        }
    }
    
    
    int sum = 0;
    for (int i = 0; i < w; i++) {
        sum += a[i];
    }
    
    
    cout << sum << endl;
    
    return 0;
}
