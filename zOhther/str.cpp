#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, x;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cin >> x;

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
                return 0;
            } else if (sum < x) {
                j++;
            } else {
                k--;
            }
        }
    }

    cout << "No such triplet found" << endl;
    return 0;
}