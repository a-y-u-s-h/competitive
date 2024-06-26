#include <iostream>

int main(int argc, char const *argv[]) {
  int t;
  std::cin >> t;
  for (int i = 0 ; i < t; i += 1) {
    int X;
    std::cin >> X;
    /*
      ======================================
        Chef has to attend an exam that starts
        in X minutes, but of course, watching
        shows takes priority.

        Every episode of the show that Chef is
        watching, is 24 minutes long. If he
        starts watching a new episode now,
        will he finish watching it strictly
        before the exam starts? X > 24.
      ======================================
    */
    bool condition = X > 24;
    std::cout << (condition ? "Yes" : "No") << std::endl;
  }
  return 0;
}
