#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int t;
  std::cin >> t;
  for (int i = 0 ; i < t; i += 1) {
    int X, Y;
    std::cin >> X >> Y;
    /*
      ======================================
        Chef wants to reach home as soon as
        possible. He has two options:
        1. Travel with BIKE which takes X minutes.
        2. Travel with CAR which takes Y minutes.
        Which of the two options is faster or
        do they both take the same time?
      ======================================
    */
    std::string answer = (X <  Y) ? "BIKE"
                       : (X >  Y) ? "CAR"
                       : (X == Y) ? "SAME" : "";
    std::cout << answer << std::endl;

  }
  return 0;
}
