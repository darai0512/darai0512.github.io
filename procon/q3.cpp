#include <iostream>
#include <algorithm>
using namespace std;
static const int N_MAX = 2000000;

int main()
{
    int R[N_MAX], n;
    cin >> n;
    for ( int i = 0; i < n; i++ ) cin >> R[i];
    
    int max_profit = -1000000;
    int min_r = R[0];
    
    for ( int i = 0; i < n; i++ ) {
        max_profit = max(max_profit, R[i] - min_r);
        min_r = min(min_r, R[i]);
    }
    cout << max_profit << endl;
    
    return 0;
}
