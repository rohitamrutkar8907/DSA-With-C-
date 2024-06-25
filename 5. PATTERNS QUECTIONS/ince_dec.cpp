#include<iostream>
using namespace std;
int main()
{
    int i=8;;
    int j=5;
   int k= i++ - j++ - ++j + ++i - --j + --i;
    //     8     5     7     10    6     9
    cout<<k;
}