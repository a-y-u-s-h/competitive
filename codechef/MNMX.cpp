#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0; t < T; t += 1) {
    int64_t N;
    std::cin >> N;
    std::vector<int64_t> A;

    for (int i = 0; i < N; i += 1) {
      int64_t Ai;
      std::cin >> Ai;
      A.push_back(Ai);
    }

    /*
  ======================================
    Now that we've taken the input,
    we need to process the input two
    at a time. The problem statement
    says this:

    Select a pair of adjacent integers
    and remove the larger one of these two.
    This decreases the array size by 1.
    Cost of this operation will be equal
    to the smaller of them. According
    to constraints given to us, Ai can
    actually be greater than N.

    Array gets modified after every
    operation, so the next pair becomes
    smaller of the first two pairs and so on.
    So, the result is ultimately going to be

    = minimum * (N - 1)

    1. Sort the array.
    2. Find the minimum element.
    3. Add it (N - 1) times because we want
    a single element left after all the operations.

  ======================================
*/

    std::sort(std::begin(A), std::end(A));
    std::cout << A[0] * (N - 1) << std::endl;
  }
  return 0;
}
