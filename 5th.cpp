#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;  
    string names[n]; 
    int grades[n];   

   
    for (int i = 0; i < n; i++) {
        cin >> names[i] >> grades[i];
    }

    
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (grades[j] < grades[j + 1]) {  
               
                int tempGrade = grades[j];
                grades[j] = grades[j + 1];
                grades[j + 1] = tempGrade;

                string tempName = names[j];
                names[j] = names[j + 1];
                names[j + 1] = tempName;
            }
        }
    }

    
    for (int i = 0; i < n; i++) {
        cout << names[i] << " " << grades[i] << endl;
    }

    return 0;
}
