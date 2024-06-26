#include <iostream>

int main(int argc, char const *argv[]) {
  int N;
  std::cin >> N;
  /*
    ======================================
      Teams of 6-8 people are allowed.
      Chef's team has N people. We need to
      find out whether they're eligible.
    ======================================
  */
  bool eligible = N >= 6 && N <= 8;
  std::cout << (eligible ? "Yes" : "No") << std::endl;
  return 0;
}
