#include <bits/stdc++.h>

using namespace std;

void maxSumSubarray(vector<int>& arr) {
  int currentSum = 0, maxSum = INT_MIN;
  int start = 0, end = 0, s = 0;
  for (int i = 0; i < arr.size(); i++) {
    currentSum += arr[i];
    if (currentSum > maxSum) {
      maxSum = currentSum;
      start = s;
      end = i;
    }
    if (currentSum < 0) {
      currentSum = 0;
      s = i + 1;
    }
  }
  cout << "Maximum sum is " << maxSum << endl;
  cout << "Subarray is ";
  vector <int> v;
  for (int i = start; i <= end; i++) {
    //cout << arr[i] << " ";
    v.push_back(i);
  }
  cout << v.size() << endl;
}

int main() {
  vector<int> arr ={0,1,-2,-3,-4};
  maxSumSubarray(arr);
  return 0;
}
