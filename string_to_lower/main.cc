#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
  string str{"AbC"};

  //소문자로 변경
  transform(str.begin(), str.end(), str.begin(), ::tolower);

  //대문자로 변경
  //transform(str.begin(), str.end(), str.begin(), ::toupper);

  cout << str << endl;
}
