#include <iostream>
#include <functional>

using namespace std;

int main() {
  //lambda로 재귀를 구현할 때, auto를 사용하면 아래와 같은 에러가 발생
  //error: use of ‘printFromNTo1’ before deduction of ‘auto’
  //
  //lambda안에서 auto를 사용할 때, deduction되기 전에 사용해서 에러가 발생한 것으로 보임
  
  //auto printFromNTo1 = [&printFromNTo1](int n) {
  std::function<void (int)> printFromNTo1 = [&printFromNTo1](int n) -> void {
    if ( n == 0 ) {
      return;
    }
    std::cout << n << std::endl;
    printFromNTo1(n-1);
  };

  printFromNTo1(10);
}
