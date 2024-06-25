#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> a = {1, 2, 3, 4};
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << endl;
    }
    cout << "is empty " << a.empty() << endl;
    cout << a.front() << endl;
    cout << a.back() << endl;
    cout << a.at(0) << endl;

    a.push_back(8);
    a.push_back(7);

    cout << "----------------" << endl;
    for (int i : a)
    {
        cout << i <<endl;
    }

    cout << "------Pair Vector-------" << endl;
    vector<pair<int,int>> v = {{2,4},{4,8},{8,16},{16,32}};
     for (pair<int,int> i : v)
    {
        cout << i.first<<" "<<i.second<<endl;
    }
}