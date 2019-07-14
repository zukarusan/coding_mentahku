#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int _1n = n/3;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == n/2 && j == i) {
                cout << 4;
            }
            else if ( (i >= _1n && i < n-_1n) && (j >= _1n && j < n-_1n) ) {
                cout << 1;
            }
            else if (i == j) {
                cout << 2;
            }
            else if (i == n-j-1) {
                cout << 3;
            }
            else {
                cout << 0;
            }
        }
        cout << endl;
    }
}