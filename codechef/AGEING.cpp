#include <iostream>

int main(int argc, char const *argv[]) {
  int t;
  std::cin >> t;
  for (int i = 0 ; i < t; i += 1) {
    int X;
    std::cin >> X;
    /*
      ======================================
        A's current age is 20. B's current
        age is 10. Determine B's age when
        A will be X years old.
      ======================================
    */
    int answer = X > 10 ? X - (20 - 10) : 0;
    std::cout << answer << std::endl;
  }
  return 0;
}
