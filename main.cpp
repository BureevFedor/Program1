#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(int a, int b)
{
    return a > b;
}

int main()
{
    int n;
    cin >> n;
    vector <int> g(n);

    for (int i = 0; i < n; i++)
        cin >> g[i];

    sort(g.begin(), g.end(), cmp);

    for (int i = 0; i < n; i++)
        cout << g[i] << ' ';

    return 0;
}
