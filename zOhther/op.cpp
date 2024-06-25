#include <iostream>
#include <unordered_map>
using namespace std;

int weird_array(int input[], int n) {
  int ans = n + 1;
  unordered_map<int, int> m;
  for (int i = 0; i < n; i++) {
    if (m.count(input[i])) {
      int cur_len = i - m[input[i]] + 1;
      ans = min(ans, cur_len);
    }
    m[input[i]] = i;
  }
  return (ans == n + 1) ? 0 : ans;
}

int main() {
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  cout << weird_array(arr, n) << endl;
  return 0;
}
