#include <iostream>

int main(int argc, char const *argv[]) {
  int t;
  std::cin >> t;
  for (int i = 0 ; i < t; i += 1) {
    int64_t D, L, R;
    std::cin >> D >> L >> R;

    /*
      ======================================
        Chef has taken his first dose of
        vaccine D days ago. He may take the
        second dose no less than L days and
        no more than R days since his first
        dose.

        We need to determine whether Chef is
        currently too early, too late or in
        the correct range for taking his
        second dose.

        Draw out the distances with pen and paper
        and you'll get the conditions as:
      ======================================
    */

    bool early  =  D < L;
    bool late   =  D > R;
    bool safe   =  D >= L && D <= R;

    /*
      ======================================
        Output format was asked like so -
      ======================================
    */
    if (early) std::cout << "Too Early" << std::endl;
    if (late) std::cout << "Too Late" << std::endl;
    if (safe) std::cout << "Take second dose now" << std::endl;
  }
  return 0;
}
