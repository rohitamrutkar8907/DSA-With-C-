#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
   int n=4;
   for (int i = 1; i <= n; i++)
   {
       for (int j = 1; j <= i; j++)
       {
           cout<<"*";
       }
       int space=2*n-i*2;
       for (int j = 1; j <= space; j++)
       {
           cout<<" ";
       }
       for (int j = 1; j <= i; j++)
       {
           cout<<"*";
       }
       
      cout<<endl;
   }
   for (int i = n; i >= 1; i--)
   {
       for (int j = 1; j <= i; j++)
       {
           cout<<"*";
       }
       int space=2*n-i*2;
       for (int j = 1; j <= space; j++)
       {
           cout<<" ";
       }
       for (int j = 1; j <= i; j++)
       {
           cout<<"*";
       }
       
      cout<<endl;
   }
   
    return 0;
}


/*


*      *
**    **
***  ***
********
********
***  ***
**    **
*      *