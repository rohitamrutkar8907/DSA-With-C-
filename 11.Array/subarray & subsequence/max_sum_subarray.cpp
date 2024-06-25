#include <iostream>
#include <vector>
//kadane's algorithm
using namespace std;

int main()
{
    vector<int> arr = {-1, 4, 7, 2};
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
