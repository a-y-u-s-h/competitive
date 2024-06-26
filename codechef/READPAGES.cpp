#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int t;
  std::cin >> t;
  for (int i = 0 ; i < t; i += 1) {
    int N, X, Y;
    std::cin >> N >> X >> Y;
    /*
      ======================================
        Textbook has N pages in total. Chef
        wants to read X pages a day for Y days.
        Find out whether it is possible for
        Chef to complete the whole book.
      ======================================
    */
    bool condition = X * Y >= N;
    std::cout << (condition ? "YES" : "NO") << std::endl;
  }
  return 0;
}
