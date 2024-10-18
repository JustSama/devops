#include <iostream>
using namespace std;

int main() {
    int n;
    int s; 
    cin >> n >> s; 
    
    int prices[n]; 
    int b;
    int count = 0;
    int totalCost = 0;
    
    for (int i = 0; i < n; i++) {
        cin >> prices[i];
    }
    
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1; j++) { 
            if (prices[j] > prices[j + 1]) {
                b = prices[j];            
                prices[j] = prices[j + 1]; 
                prices[j + 1] = b;
            }
        }
    }
    
    for (int i = 0; i < n; i++) {
        if (totalCost + prices[i] <= s) {
            totalCost += prices[i]; 
            count++; 
        } else {
            break; 
        }
    }
    
    cout << count << endl;
    
    return 0;
}
