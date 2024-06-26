#include <iostream>

int main(int argc, char const *argv[]) {
  /*
    ======================================
      For every test case, you get two
      numbers a & b, you need to find out
      the remainder when a is divided by b,
      i.e. a % b.
    ======================================
  */
  int t;
  std::cin >> t;
  for (int i = 0; i < t; i += 1) {
    int a, b;
    std::cin >> a >> b;
    std::cout << (a % b) << std::endl;
  }
  return 0;
}
