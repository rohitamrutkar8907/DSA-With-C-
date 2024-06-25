#include <iostream>
#include <vector>
//kadane's algorithm
//used to find maximun sum in all subarray
using namespace std;

int main()
{
    vector<int> arr = {0,1,-2,-3,-4};
    int n = arr.size();

    int sum=0;
    int maxi=INT8_MIN;

    for (int i = 0; i < n; i++)
    {
        sum=sum+arr[i];
        maxi=max(maxi,sum);
        if (sum<0)
        {
            sum=0;
        }
        
    }
    cout<<maxi;
    return 0;
}
