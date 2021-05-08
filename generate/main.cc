#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  vector<int> nums(10);

  int i = 0;
  generate(nums.begin(), nums.end(), [&i]() {
        return i++;
      });

  for ( int num : nums ) {
    cout << num << endl;
  }
}
