#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Array declaration by initializing elements
    int arr[] = {10, 20, 30, 40};

    // Array declaration by specifying size and initializing elements
    int arr1[6] = {10, 20, 30, 40};

    // size of Array
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << size << endl;

    // array in stl
    array<int, 5> ar1{{3, 4, 5, 1, 2}};

    // method
    cout << ar1.size() << endl;
    cout << ar1.front() << endl;
    cout << ar1.back() << endl;
    cout << ar1.at(3) << endl;
    cout << ar1.empty() << endl;

    sort(ar1.begin(), ar1.end());

    for (auto i : ar1)
        cout << i << ' ';
    cout << endl;

    array<int, 5> ar2;
    ar2.fill(10);

    for (auto i : ar2)
        cout << i << ' ';

    return 0;
}
