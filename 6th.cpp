#include <iostream>
using namespace std;

int main() {
    int n;
    int x; //tor
    cin >> n >> x;
    int monsters[n];

    
    for (int i = 0; i < n; i++) {
        cin >> monsters[i];
    }

    
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (monsters[j] > monsters[j + 1]) {
                int temp = monsters[j];
                monsters[j] = monsters[j + 1];
                monsters[j + 1] = temp;
            }
        }
    }

   
    int killedMonsters = 0;

    for (int i = 0; i < n; i++) {
        if (x > monsters[i]) {
            x += monsters[i]; 
            killedMonsters++; 
        } else {
            break; 
        }
    }

    
    cout << killedMonsters << endl;

    return 0;
}
