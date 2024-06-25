#include <bits/stdc++.h>
using namespace std;
void show(set<char> a)
{
    for (auto& str : a) {
		cout << str << ' ';
	}
    cout << '\n';
}
void show1(set<char,greater<char>> a)
{
    for (auto& str : a) {
		cout << str << ' ';
	}
    cout << '\n';
}
void show3(unordered_set<char> a)
{
    for (auto& str : a) {
		cout << str << ' ';
	}
    cout << '\n';
}
int main()
{
    // ordered set with asending order
	set<char> a={'A','F','R','E','I','B','A','A'};
	a.insert('G');
    show(a);

    // ordered set with descending order
    set<char, greater<char> > a1={'A','F','R','E','I','B','A','A'};
    a1.insert('G');
	show1(a1);

    // unordered set
     unordered_set<char> intSet={'A','F','R','E','I','B','A','A','G'};
     show3(intSet);

     //find method
     char key='B';
     if (intSet.find(key) == intSet.end())
        cout << key << " not found" << endl << endl ;
    else
        cout << "Found " << key << endl << endl ;
	return 0;
}
