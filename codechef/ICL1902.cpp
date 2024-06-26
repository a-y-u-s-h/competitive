#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  /*
  ======================================
    In the 2-D world of Flatland,
    the Circles were having their sports day
    and wanted to end it with a nice formation.
    So, they called upon Mr. Sphere from
    Spaceland for help. Mr Sphere decides
    to arrange the Circles in square formations.

    He starts with N Circles and forms the largest
    possible square using these Circles.
    He then takes the remaining Circles and
    repeats the procedure. A square of side S
    requires S^2 Circles to create.

    Find the number of squares he will be
    able to form at the end of the process.
  ======================================
*/
  int T;
  std::cin >> T;
  for (int t = 0; t < T; t += 1) {
    int N;
    std::cin >> N;
    /*
      ======================================
        Solution:

        To form the first circle, we need to find
        the largest perfect square that's less than or
        equal to N, the that number is P1, then N / P1
        will give us number of squares that can be formed with
        that number. After that we move on to next smaller
        perfect square P2, and then we add up all their squares.

        squares :- a variable to store the final output.
        P :- contains perfect squares which will be used divide
        N to find out how many squares are possible with that
        number.
      ======================================
    */
    int squares = 0;
    std::vector<int> P;
    for (int p = 1; p * p <= N; p++) P.push_back(p * p);
    std::reverse(std::begin(P), std::end(P));

    /*
      ======================================
        We update N with remaining N after
        counting how many squares are possible
        with the current perfect square.
      ======================================
    */
    for (int i = 0; i < P.size(); i += 1) {
      squares += N / P[i];
      N = N % P[i];
    }

    /*
      ======================================
        We need to output number of squares.
      ======================================
    */
    std::cout << squares << std::endl;
  }
  return 0;
}
