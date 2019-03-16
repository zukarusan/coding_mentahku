#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    while(cin >> n)
    {
        if (n == 0)
            break;
        for (int i = 0, a = 1; i < (n/2)+(n%2); i++, a++)
        {
            for (int j = 1, b = 1; j <= n; j++)
            {
                if (j == n)
                    cout << b;
                else
                {
                    cout << b;
                    for (int c = int(log10(b)); c < 3; c++)
                        cout << ' ';
                }
                
                if (b < a && j < (n/2)+(n%2)) b++;
                else if (j > n-a) b--;
            }
            cout << endl;
        }
        
        for (int i = 0, a = n/2; i < n/2; i++, a--)
        {
            for (int j = 1, b = 1; j <= n; j++)
            {
                if (j == n)
                    cout << b;
                else
                {
                    cout << b;
                    for (int c = int(log10(b)); c < 3; c++)
                        cout << ' ';
                }
                
                if (b < a && j < n/2) b++;
                else if (j > n-a) b--;
            }
            cout << endl;
        }
        cout << endl;
    }
}