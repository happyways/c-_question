#include <algorithm>
#include <vector>
#include <iostream>

using namespace std;

int main() {
  cout << "--------------------------------" << endl;
  cout << "lower_bound는 입력한 값을 찾을 수 없으면" << endl;
  cout << "그 다음으로 큰 값을 찾아줌!" << endl;
  cout << "--------------------------------" << endl << endl;

  vector<int> nums{100, 200, 300, 400};
  cout << "저장된 숫자들 : ";
  for ( int num : nums ) {
    cout << num << ", ";
  }
  cout << endl;

  int find_value;
  while ( true ) {
    cout << "lower_bound로 찾을 값 : ";
    cin >> find_value;

    auto iter = lower_bound(nums.begin(), nums.end(), find_value);
    if ( iter != nums.end() ) {
      cout << "index : " << distance(nums.begin(), iter) << endl;
      cout << "value : " << *iter << endl;
    }
    else {
      cout << "not found" << endl;
    }
  }
}
