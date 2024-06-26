#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int N, X;
    std::cin >> N >> X;
    /*
      ======================================
        There are 2N students in class, with
        distinct roll numbers randing from
        1 to 2N. Chef's roll number is X.

        The professor decided to create N groups
        of 2 students each. The groups were
        created as follows: the first group
        consists of roll numbers 1 and 2N, the
        second group of roll numbers 2 and 2N−1,
        and so on, with the final group consisting
        of roll numbers N and N+1.

        Find the roll number of Chef's partner.
      ======================================
    */
   int answer = (2 * N) + 1 - X;
   std::cout << answer << std::endl;

  }
  return 0;
}
