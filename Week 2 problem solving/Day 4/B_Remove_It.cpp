#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int n, x;
    cin >> n >> x;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        v.push_back(a);
    }
    v.erase(remove(v.begin(), v.end(), x), v.end());
    for (auto val : v)
    {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
