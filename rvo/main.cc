#include <iostream>

using namespace std;

class Test {
 public:
  Test(int value) : value_(value) {
    cout << value_ << " constructor" << endl;
  }

  ~Test() {
    cout <<  value_ << " destructor" << endl;
  }

  Test(const Test& other) {
    cout <<  value_ << " copy constructor" << endl;
  }

  Test& operator=(const Test& other) {
    cout <<  value_ << " copy assignment" << endl;
    return *this;
  }

 public:
  void setValue(int value) {
    this->value_ = value;
  }

 private:
  int value_;
};

Test createTest() {
  Test test(7);
  //test.setValue(3);
  return test;
}

int main() {
  Test test1 = createTest();
}
