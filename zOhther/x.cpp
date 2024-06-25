#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> findTriplets(vector<int> a, int n, int x)
{
    // Write your code here.
    sort(a.begin(), a.end());
	vector<int> f;
    for (int i = 0; i < n - 2; i++) {
        int j = i + 1, k = n - 1;
        while (j < k) {
            int sum = a[i] + a[j] + a[k];
            if (sum == x) {
				f.push_back(a[i]);
				f.push_back(a[j]);
				f.push_back(a[k]);
				sort(f.begin(), f.end());
                for (auto x : f)
        			cout << x << " ";
                
            } else if (sum < x) {
                j++;
            } else {
                k--;
            }
        }
    }

    cout << "No such triplet found" << endl;
    
}
    int main()
    {
        vector<int> a = {10, 5, 5, 5, 2};
        int n = 5;
        int k = 12;
        findTriplets(a, n, k);
        
    }