#include <iostream>
#include <string>

using namespace std;

int main() {
  //stdio(ex : printf, scanf)와의 동기화를 끊는다
  //속도는 빨라지지만 아래와 같은 코드에서 순서를 보장하지 않음
  ios::sync_with_stdio(false);
  string name;
  printf("printf - input your name : ");
  cin >> name;

  //tie를 해 놓으면, cin 이후 cout을 할 때나
  //반대의 경우 순서를 보장하지만,
  //untie된 상태에서는 순서를 보장하지 않지만 속도가 빨라짐
  cin.tie(NULL);
  cout.tie(NULL);

  cout << "cout - input your name : ";
  cin >> name;
}
