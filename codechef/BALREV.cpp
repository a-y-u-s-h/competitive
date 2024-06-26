#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int N; std::string A;
    std::cin >> N;
    std::cin >> A;
    /*
      ======================================
        Chef is given a binary string A of
        length N. He can perform the following
        operation on A any number of times.

        Choose L and R (1 <= L <= R <= N)
        such that, in the substring A[L, R]
        the number of 1s is equal to the number
        of 0s and reverse the substring A[L, R].

        Find the lexicographically smallest
        string that Chef can obtain after performing
        the above operation any (possibly zero)
        number of times on A. String X is
        lexicographically smaller than string Y
        if either of the following satisfies.

        1) X is a prefix of Y and X != Y.
        2) There exists an index i such that Xi < Yi
        and Xj = Yj for all j such that 1 <= j < i.

        Approach: Lexicographically string will
        be the sorted string A.
      ======================================
    */
    std::sort(std::begin(A), std::end(A));
    std::cout << A << std::endl;
  }
  return 0;
}
