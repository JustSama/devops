#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n; 

    vector<pair<int, int>> arr(n); 

    
    for (int i = 0; i < n; i++) {
        int value;
        cin >> value;
        arr[i] = make_pair(value, i + 1); 
    }

    
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (arr[j].first > arr[j + 1].first) {
                
                pair<int, int> temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // Вывод исходных индексов в отсортированном порядке
    for (const auto& p : arr) {
        cout << p.second << " ";
    }
    cout << endl;

    return 0;
}
