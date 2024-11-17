#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int q;
    cin >> q;
    while (q--)
    {
        int a, b, n, S;
        cin >> a >> b >> n >> S;
        int N = min(S / n, a);
        int valuefromA = N * n;
        int remain = S - valuefromA;
        if (remain <= b)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}