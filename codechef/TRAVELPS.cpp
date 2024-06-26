#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0; t < T; t += 1) {
    int N, A, B;
    std::string S;
    std::cin >> N >> A >> B;
    std::cin >> S;

    /*
      ======================================
        Chef's journey is represented by the
        string S which has a length of N.
        String S is of binary format: a combination
        of 1s and 0s where -

        0s in the string represent crossing from
        on district to another. It is given that it
        takes A minutes to fill inter-district e-pass
        applications.

        1s in the string represent crossing from
        one state to another. It is given that it takes
        B minutes to fill inter-state e-pass application.

        We need to find out total time that Chef
        spent on filling various forms. So, we just
        need to count number of 0s and 1s, multiply
        their counts with their respective times and sum
        them up.
      ======================================
    */

    int ones = std::count(std::begin(S), std::end(S), '1');
    int zeroes = std::count(std::begin(S), std::end(S), '0');
    int time = (zeroes * A) + (ones * B);
    std::cout << time << std::endl;
  }
  return 0;
}
