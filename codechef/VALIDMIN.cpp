#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int ab, bc, ca;
    std::cin >> ab >> bc >> ca;

    /*
      ======================================
        There are 3 hidden numbers A, B, C.
        You somehow found out the values of
        min(A, B), min(B, C) and min(C, A).
        Determine whether there exist any
        tuple (A, B, C) that satisfies the
        given values of min(A, B), min(B, C)
        and min(C, A).

        Possible orders of tuples may be:
      ======================================
    */

    std::string answer = (ab == bc && ca >= ab && ca >= bc) ? "YES"
                       : (bc == ca && ab >= bc && ab >= ca) ? "YES"
                       : (ca == ab && bc >= ca && bc >= ab) ? "YES"
                       : "NO";


    std::cout << answer << std::endl;
  }
  return 0;
}
