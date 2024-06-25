#include <bits/stdc++.h>
using namespace std;
 int Pivot(vector<int>& arr) {
        
    int s = 0;
    int e = arr.size()-1;
    while (s<e)
    {
        int mid=s+(e-s)/2;
        if (arr[mid]>arr[0]) //this line show pivot is on 1st line or 2nd line
        {                        //if this condition is true the is show pivot on 1st line
             s=mid+1;           //best explanaton 15:00
        }         
        else
        {
            e=mid ;
        }

    }
    return arr[s];  
    }
int main()
{

    vector<int> a{7,8,1,2,3,4,5};
    cout<<Pivot(a);
}



/*
this is 1st approch nut  in which complexcity is O(n);

#include <bits/stdc++.h>
using namespace std;
int piv(vector<int>& arr)
{
    for(int i=0;i<arr.size();i++)
    {
        if (arr[i]>arr[i+1])
        {
            return arr[i];
        }
        
    }
}
int main()
{
    vector<int> a{7,1,5,3,6,4};
    cout<<piv(a);
}
*/