#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int t;
  std::cin >> t;
  for (int i = 0 ; i < t; i += 1) {
    int X, Y;
    std::cin >> X >> Y;
    /*
      ======================================
        Y students were interested to take
        a course where the availability of seats
        was X students. Find minimum number
        of extra seats that admins need to
        add so that everyone who is interested
        in taking the course should be able
        to do so.
      ======================================
    */
    int answer = Y > X ? Y - X : 0;
    std::cout << answer << std::endl;
  }
  return 0;
}
