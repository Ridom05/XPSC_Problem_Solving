#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> FV(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> FV[i];
        }
        vector<int> IV(n);
        for (int i = 0; i < n; ++i)
        {
            int b;
            string s;
            cin >> b >> s;
            int initial_digit = FV[i];
            for (char move : s)
            {
                if (move == 'U')
                {
                    initial_digit = (initial_digit + 9) % 10;
                }
                else if (move == 'D')
                {
                    initial_digit = (initial_digit + 1) % 10;
                }
            }
            IV[i] = initial_digit;
        }
        for (int i = 0; i < n; ++i)
        {
            cout << IV[i] << " ";
        }
        cout << endl;
    }
    return 0;
}