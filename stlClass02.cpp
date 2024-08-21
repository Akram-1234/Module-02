#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    optimize();

    vector<int> v = {2,3,4,5,6,3,2,4,5,8,7,6,5,7,8,6,7,9,6};
    sort(v.begin(), v.end());
    int Sz = unique(v.begin(), v.end()) - v.begin();

    cout << Sz << endl;
    for (int i = 0; i < Sz; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

}