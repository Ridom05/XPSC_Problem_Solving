#include <iostream>
#include <string>
using namespace std;
string createSpecialString(int n)
{
    if (n == 1)
    {
        return "MM";
    }
    string s = "AB";
    int special_count = 2;
    char next_char = 'C';
    while (special_count < n && s.length() < 200)
    {
        s += next_char;
        special_count += 2;
        next_char++;
    }
    if (special_count < n)
    {
        return "NO";
    }
    else
    {
        return "YES\n" + s;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << createSpecialString(n) << endl;
    }
    return 0;
}