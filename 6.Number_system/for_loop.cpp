#include <bits/stdc++.h>
using namespace std;
int main()
{
    /*
      for (int a = 1, b = 11, c = 21; a <= 10, b <= 18, c <= 30; a++, b++, c++)
      {
          cout << a << ' ' << b << ' ' << c << endl;
      }
      */

    /*
   //fabonachi serice
   int n=10;
   int a,b;
   a=0;
   b=1;
   cout<<a<<' '<<b<<' ';
   for (int i = 0; i <= n; i++)
   {
      int nextNum=a+b;
      a=b;
      b=nextNum;
      cout<<nextNum<<' ';

   }
   */

    /*
        // prime number
        int n;
        cin >> n;
        bool isprime = 1;
        for (int i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                isprime = 0;
                break;
            }
        }
        if (isprime == 0)
        {
            cout << n << " is not prime";
        }

        else
        {
            cout << n << " is prime";
        }
    */

    int n=5;
  
    for (int i = 0; i <= n; i++)
    {
        for (int j = i; j <= n; j++)
        {
         cout<<i<<' ';   
        }
        cout<<endl;
    }
}
