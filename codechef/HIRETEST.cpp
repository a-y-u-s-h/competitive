#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int N, M, X, Y;
    std::cin >> N >> M;
    std::cin >> X >> Y;

    /*
      ======================================
        A company conducted a test to hire
        candidates. N candidates appeared
        for the test and each of them faced
        M problems. Each problem was either
        unsolved by a candidate (denoted by 'U'),
        solved partially (denoted by 'P') or
        solved completely (denoted by 'F').

        To pass the test, each candidate needs
        to either solve X or more problems
        completely, or solve (X - 1) problems
        and Y or more problems partially.

        Given the above specifications as input,
        print a line containing N integers.
        The i-th integer should be 1 if
        the i-th candidate has passed the test
        else it should be 0.
      ======================================
    */

    for (int i = 0; i < N; i++) {
      std::string Ri; std::cin >> Ri;
      int Rc = std::count(std::begin(Ri), std::end(Ri), 'F');
      int Rp = std::count(std::begin(Ri), std::end(Ri), 'P');
      int Ru = std::count(std::begin(Ri), std::end(Ri), 'U');
      int Si = Rc >= X || (Rc == X - 1 && Rp >= Y);
      std::cout << Si;
    }

    std::cout << std::endl;

  }
  return 0;
}
