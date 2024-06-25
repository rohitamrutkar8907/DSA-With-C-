#include <bits/stdc++.h>
using namespace std;

int weird_array(int input[],int n)
{
    int ans = n + 1;
        unordered_map<int, int> m;
        for (int i = 0; i < n; i++) {
            if (m[input[i]]) 
            {
                if (ans > i - m[input[i]] + 1)
                    ans = i - m[input[i]] + 1;
            }
            m[input[i]]=i;
        }
        if(ans== n + 1)
            return 0;
        return ans;
}

int main() {
   int n;
   cin >> n;
   int arr[n];
   for (int i = 0; i < n; i++) {
    cin >> arr[i];
}

cout << weird_array(arr,n) << endl;
return 0;
}