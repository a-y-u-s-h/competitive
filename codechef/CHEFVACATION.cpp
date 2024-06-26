#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int X, Y, Z;
    std::cin >> X >> Y >> Z;
    /*
      ======================================
        Chef has option to go for one of
        two vacations - family trip will take
        him X days, and trip with friends will
        take him Y days. Currently dates are
        not decided but the vacation will last
        only for Z days. Chef can be in at most
        one trip at any time and once a trip
        is started, Chef must complete it
        before the vacation ends. Will Chef
        be able to go on both these trips if
        he chooses the date optimally?
      ======================================
    */
   bool condition = X + Y <= Z;
   std::cout << (condition ? "YES" : "NO") << std::endl;
  }
  return 0;
}
