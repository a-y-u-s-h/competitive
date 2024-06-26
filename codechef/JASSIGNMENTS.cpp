#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int t;
  std::cin >> t;
  for (int i = 0 ; i < t; i += 1) {
    int X;
    std::cin >> X;

    /*
      ======================================
        Janmansh has to submit 3 assignments
        for Chingari before 10pm and he starts
        to do the assignments at X pm. Each
        assignment takes him 1 hour to complete.
        Can you tell whether he'll be able to
        complete all assignments on time or not?
      ======================================
    */

    int required = 3 * 1;
    int available = X < 10 ? 10 - X : 0;
    bool condition = available >= required;
    std::cout << (condition ? "Yes" : "No") << std::endl;
  }
  return 0;
}
