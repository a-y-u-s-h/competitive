#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    long long N, M, X;
    std::cin >> N >> M >> X;
    /*
      ======================================
        There are N students in a class.
        Recently, an exam on Advanced Algorithms
        was conducted with maximum score M
        and minimum score 0. The average score
        of the class was found out to be
        exactly X.

        Given that a student having score
        strictly greater than the average
        receives an A grade, find the maximum
        number of students that can receive
        an A grade.
      ======================================
    */

    /*
      ======================================
        Approach: In case when X == M, no
        student can have a score greater
        than maximum score M. And when X < M,
        we need to assign X + 1 as score of
        every student, so we'll get:
        y * (X + 1) / N = X or
        y = (N * X) / (X + 1)
      ======================================
    */
    if (X == M) { std::cout << 0 << std::endl; continue; }
    if (X <  M) { std::cout << (N * X) / (X + 1) << std::endl; }
  }
  return 0;
}
