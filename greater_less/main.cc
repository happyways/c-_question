#include <functional>
#include <iostream>
#include <vector>
#include <algorithm>

#include "../util/print_util.h"

using namespace std;

int main() {
  vector<int> nums{3,5,1,2,4};

  cout << "less<int> : < " << endl;
  sort(nums.begin(), nums.end(), less<int>());
  printStl(nums);
  cout << endl;

  cout << "greater<int> : > " << endl;
  sort(nums.begin(), nums.end(), greater<int>());
  printStl(nums);
  cout << endl;
}
