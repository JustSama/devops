#include <iostream>
#include <cstring> 
using namespace std;

int main() {
    int n;
    cin >> n; 

    string surnames[n]; 
    string names[n];    

   
    for (int i = 0; i < n; i++) {
        cin >> surnames[i] >> names[i];
    }

    
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            
            if (surnames[j] > surnames[j + 1]) {
                
                string temp_surname = surnames[j];
                surnames[j] = surnames[j + 1];
                surnames[j + 1] = temp_surname;

                
                string temp_name = names[j];
                names[j] = names[j + 1];
                names[j + 1] = temp_name;
            }
            
            else if (surnames[j] == surnames[j + 1] && names[j] > names[j + 1]) {
                
                string temp_name = names[j];
                names[j] = names[j + 1];
                names[j + 1] = temp_name;
            }
        }
    }

    
    for (int i = 0; i < n; i++) {
        cout << surnames[i] << " " << names[i] << endl;
    }

    return 0;
}
