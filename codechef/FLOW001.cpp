#include <iostream>

int main(int argc, char const *argv[]) {
  /*
    ======================================
      Get the number of test cases, then
      for each test case, get inputs
      and process those inputs and display
      the result as needed.
    ======================================
  */

  int t;
  std::cin >> t;

  for (int i = 0; i < t; i += 1) {
    int a, b;
    std::cin >> a >> b;
    std::cout << a + b << std::endl;
  }
  return 0;
}
