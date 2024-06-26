#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int N, M;
    std::cin >> N >> M;
    /*
      ======================================
        Mr. Chef is the manager of the Code
        cinemas and after a long break,
        the theatres are now open to the
        public again. To compensate for the
        loss in revenue due to Covid-19,
        Mr. Chef wants to maximize the profits
        for every show from now on and at the
        same time follow the guidelines set
        the by government. The guidelines are:

        If two people are seated in the same row,
        there must be at least one empty seat between them.
        If two people are seated in different rows,
        there must be at least one completely empty
        row between them. That is, if there are people
        seated in rows i and j where i < j, there must
        be some row k such that i < k < j and nobody
        is seated in row k.

        Given the information about the number
        of rows and the number of seats in each
        row, find the maximum number of tickets
        Mr. Chef can sell.
      ======================================
    */
    int answer = std::max((N + 1) / 2, N / 2) * std::max((M + 1) / 2, M / 2);
    std::cout << answer << std::endl;
  }
  return 0;
}
