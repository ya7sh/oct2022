#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;

int main()
{
    int q;
    cin >> q;
    while (q--)
    {
        int a;
        cin >> a;
        vector<int> v(a);
        for (auto &i : v)
        {
            cin >> i;
        }
        auto it = max_element(v.begin(), v.end());
        cout << (*it) << endl;
    }
    return 0;
}
