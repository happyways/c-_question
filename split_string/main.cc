#include <iostream>
#include <sstream>

using namespace std;

int main() {
  //string을 split할 때, istringstream을 사용하면 쉽게 split가능
  std::string info{"java backend junior pizza 150"};
  istringstream iss(info);

  string key[4];
  int point;
  for ( int i = 0 ; i < 4 ; i++ ) {
    iss >> key[i];
  }
  iss >> point;

  for ( int i = 0 ; i < 4 ; i++ ) {
    cout << key[i] << ", ";
  }
  cout << point << endl;
}
