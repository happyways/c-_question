#include <string>
#include <iostream>

#define PRINT_AND_CALL(func) \
  std::cout << #func << std::endl; \
  func

#define PRINT_FUNC(func) \
  std::cout << #func << std::endl;

template <typename T>
void printStl(const T& t, const std::string& separator = ", ") {
  for ( const auto& value : t ) {
    std::cout << value << separator;
  }
  std::cout << std::endl;
}
