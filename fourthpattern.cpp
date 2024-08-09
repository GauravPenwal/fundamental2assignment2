#include <iostream>
using namespace std;
int main() {
    int n = 4; 

   
    for (int i = 1; i <= n; ++i) {
        
        if (i % 2 != 0) {
            // Print numbers
            for (int j = 1; j <= 2 * i - 1; j++) {
            cout << j << " ";
            }
        } else {
            // Print letters
            for (char ch = 'A'; ch < 'A' + 2 * i - 1; ch++) {
                cout << ch << " ";
            }
        }
        cout << endl;  
    }

    return 0;
}
