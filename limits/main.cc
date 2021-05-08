#include <iostream>
#include <limits>

using namespace std;

#define printMinAndMax(type) \
  cout << #type << endl; \
  printMinAndMaxImpl<type>();

template <typename T>
void printPowerOf10(T value) {
  int count = 0;
  while ( true ) {
    //signed type이면서 음수일 경우
    if ( std::is_signed<T>::value && value < 0 ) {
      if ( value > -10 ) {
        break;
      }
    }
    else if ( value < 10 ) {
      break;
    }

    count++;
    value /= 10;
  }

  cout << value << " * 10^" << count << endl;
}

template <typename T>
void printMinAndMaxImpl() {
  cout << numeric_limits<T>::min() << " => ";
  printPowerOf10(numeric_limits<T>::min());

  cout << numeric_limits<T>::max() << " => ";
  printPowerOf10(numeric_limits<T>::max());

  if ( std::is_signed<T>::value ) {
    cout << "-2^" << numeric_limits<T>::digits;
  }
  else {
    cout << 0;
  }
  cout << " ~ 2^" << numeric_limits<T>::digits << "-1" << endl;

  cout << endl;
}

int main() {
  //지수 표현으로 출력하지 않도록 함
  cout << fixed;

  printMinAndMax(int);
  printMinAndMax(unsigned int);

  printMinAndMax(long);
  printMinAndMax(unsigned long);

  printMinAndMax(long long);
  printMinAndMax(unsigned long long);
}
