/*
*****
****
***
**
*
*/

#include<iostream>
using namespace std;
int main()
{
    int num;
    cin>>num;
    for (int i = num; i >= 1; i--)
    {
      
        for (int j = 1; i >= j; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return  0;

}