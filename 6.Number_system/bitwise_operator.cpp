#include <bits/stdc++.h>
using namespace std;
int main()
{
    /*
    Bitwise operator is
    AND(&) SAME=1
    OR(|)  ONE IS TRUE=1
    XOR(^) ONLY ONE IS TRUE=1
    NOT(~) SWITCH BIT 1 TO 0 AND 0 TO  1
    */
    // EG 5=101
    cout << (5 & 1) << endl;
    cout << (5 | 1) << endl;
    cout << (~5) << endl;
    cout << (5 ^ 1) << endl;

    int a = 2;
    int b = 6;
    cout << (15 << 1) << endl;
    // 15*2*1
    cout << (15 >> 1) << endl;
    // 15/2*1

    cout << "pre incement" << endl;
    //  pre incerement & post increment of  i++ ++i
    int i = 5;
    int x = i++;
    cout << x << endl;
    cout << i << endl;

    cout << "post incement" << endl;
    int j = 5;
    int x1 = ++j;
    cout << j << endl;
    cout << x1 << endl;
}