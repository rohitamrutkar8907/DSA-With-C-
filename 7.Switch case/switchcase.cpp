#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int R100, R50, R20, R10, R1;
    switch (1)
    {
    case 1:
        R100=n/100;
        n = n % 100;
        cout << R100<<endl;
    case 2:
        R50=n/50;
        n = n % 50;
        cout << R50<<endl;
    case 3:
        R20=n/20;
        n = n % 20;
        cout << R20<<endl;
    case 4:
        R20=n/10;
        n = n % 10;
        cout << R10<<endl;
    case 5:
        R1=n/1;
        n = n % 1;
        cout << R1<<endl;

    }
}