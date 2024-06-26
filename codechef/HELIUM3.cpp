#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int t;
  std::cin >> t;
  for (int i = 0 ; i < t; i += 1) {
    float A, B, X, Y;
    std::cin >> A >> B >> X >> Y;
    /*
      ======================================
        Govt. asks that project should generate at least
        A units of power each year for the next
        B years. Moon as X grams of He(3) and
        1 gram of He(3) can provide Y units
        of power. Find out whether it is
        possible to meet the criteria of Government.
      ======================================
    */
    bool condition = (X * Y) >= (A * B);
    std::cout << (condition ? "Yes" : "No") << std::endl;
  }
  return 0;
}
