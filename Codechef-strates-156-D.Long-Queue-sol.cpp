#include <iostream>
#include <vector>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int n;
        cin >> n;
        
        vector<int> A(n); 
        for (int i = 0; i < n; ++i) {
            cin >> A[i];
        }
        
        int sushil_wealth = A[n-1];
        int pos = n;
        for (int i =n - 2; i >= 0; --i) {
            if (A[i] <= sushil_wealth / 2) {
                pos--;
            } else {
                break;
            }
        }

        cout << pos << endl;
    }

    return 0;
}
