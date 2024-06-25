#include <bits/stdc++.h>
using namespace std;
int main()
{
    array<int, 4> a = {1, 2, 3, 4};
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << endl;
    }
    cout << "is empty " << a.empty() << endl;
    cout << a.front() << endl;
    cout << a.back() << endl;
    cout << a.at(0) << endl;
   
}