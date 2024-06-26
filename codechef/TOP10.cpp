#include <iostream>

int main(int argc, char const *argv[]) {
  int t;
  std::cin >> t;
  for (int i = 0 ; i < t; i += 1) {
    int X;
    std::cin >> X;
    /*
      ======================================
        In a competition, Chef has ranked X.
        Only top 10 will be selected for the
        finals. Find out whether Chef is selected.
      ======================================
    */
    bool condition = X <= 10;
    std::cout << (condition ? "YES" : "NO") << std::endl;

  }
  return 0;
}
