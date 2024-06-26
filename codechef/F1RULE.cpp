#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int t;
  std::cin >> t;
  for (int i = 0 ; i < t; i += 1) {
    float X, Y;
    std::cin >> X >> Y;
    /*
      ======================================
        There's a 107% rule in F1 tournament,
        that basically says that Chef will
        be allowed to race in the main event
        if his finish time is within
        107% of the fastest finish time.
        Given that fastest finish time as X
        seconds, and Chef's finish time as Y seconds,
        determine whether Chef will be allowed
        to race in the main event or not?
      ======================================
    */
    bool condition = (Y <= X * 1.07);
    std::cout << (condition ? "YES" : "NO") << std::endl;
  }
  return 0;
}
