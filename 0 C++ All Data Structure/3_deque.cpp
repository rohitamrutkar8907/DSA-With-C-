// Double Ended queue
// https://www.geeksforgeeks.org/deque-cpp-stl/
//  CPP Program to implement Deque in STL
// most of funntion of dequq is same as vector

#include <deque>
#include <iostream>

using namespace std;

void showdq(deque<int> g)
{
    deque<int>::iterator it;
    for (it = g.begin(); it != g.end(); ++it)
        cout << *it << " ";
    cout << '\n';
}
void showdq1(deque<string> g)
{
    deque<string>::iterator it;
    for (it = g.begin(); it != g.end(); ++it)
        cout << *it << " ";
    cout << '\n';
}

int main()
{
    deque<int> Dq;
    Dq.push_back(10);
    Dq.push_front(20);
    Dq.push_back(30);
    Dq.push_front(15);
    cout << "The deque Dq is : ";
    showdq(Dq);

    cout << "Dq.size() : " << Dq.size() << endl;
    cout << "Dq.max_size() : " << Dq.max_size() << endl;

    cout << "Dq.at(2) : " << Dq.at(2) << endl;
    cout << "Dq.front() : " << Dq.front() << endl;
    cout << "Dq.back() : " << Dq.back() << endl;

    cout << "Dq.pop_front() : ";
    Dq.pop_front();
    showdq(Dq);

    cout << "Dq.pop_back() : " << endl;
    Dq.pop_back();
    showdq(Dq);

    deque<string> r(5,"rohit");
    showdq1(r);

    return 0;
}
