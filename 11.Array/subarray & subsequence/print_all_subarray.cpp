#include <iostream>
#include <vector>

using namespace std;

int main() {
  vector<int> arr{4,5,6,9,7};
  int n = arr.size();

  for (int i = 0; i < n; i++) {
    for (int j = i; j < n; j++) {
      for (int k = i; k <= j; k++) {
        cout << arr[k] << " ";
      }
      cout << endl;
    }
  }

  return 0;
}

