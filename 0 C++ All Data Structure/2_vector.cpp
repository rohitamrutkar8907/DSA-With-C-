#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> g1{5, 2, 3, 7, 6, 7, 9, 2, 4, 5};
    cout << "Size : " << g1.size() << endl;
    cout << "Capacity : " << g1.capacity() << endl;
    cout << "Max_Size : " << g1.max_size() << endl;
    cout << "is empty : " << g1.empty() << endl;
    cout << g1.front() << endl;
    cout << g1.back() << endl;
    cout << g1.at(3) << endl;

    // changes the size of the Vector
    // but does not destroys the elements
    g1.resize(5);

    // Shrinks to the size
    // till which elements are
    // destroys the elements after 5
    g1.shrink_to_fit();

    reverse(g1.begin(), g1.end());

    // ascending order
    sort(g1.begin(), g1.end());

    // descending order
    sort(g1.begin(), g1.end(), greater<>());

    // inserts 15 to the last position
    g1.push_back(15);

    // removes last element
    g1.pop_back();

    // inserts 5 at the beginning
    g1.insert(g1.begin(), 5);

    // removes the first element
    g1.erase(g1.begin());
    // inserts at the beginning
    g1.emplace(g1.begin(), 5);

    // Inserts 20 at the end
    g1.emplace_back(20);

    // Swaps v1 and v2
    // g1.swap(v2);

    // erases the vector
    // g1.clear();

    cout << "Output of begin and end: ";
    for (auto i = g1.begin(); i != g1.end(); ++i)
        cout << *i << " ";

    cout << "\nOutput of rbegin and rend: ";
    for (auto ir = g1.rbegin(); ir != g1.rend(); ++ir)
        cout << *ir << " ";
    cout << endl;

    // v.assign(5, 10);
    vector<int> g2(10, 0);
    for (auto i : g2)
    {
        cout << i << " ";
    }

    cout << "------Pair Vector-------" << endl;
    vector<pair<int, int>> v = {{2, 4}, {4, 8}, {8, 16}, {16, 32}};
    for (pair<int, int> i : v)
    {
        cout << i.first << " " << i.second << endl;
    }

    return 0;
}
