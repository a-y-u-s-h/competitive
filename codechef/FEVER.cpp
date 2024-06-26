#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int t;
  std::cin >> t;
  for (int i = 0 ; i < t; i += 1) {
    int X;
    std::cin >> X;
    /*
      ======================================
        A person is said to have fever is his
        body temperature is strictly greater
        than 98'F. Chef's temperature is X'F.
        Determine whether he has a fever or not.
      ======================================
    */
    bool condition = X > 98;
    std::cout << (condition ? "YES" : "NO") << std::endl;
  }
  return 0;
}
