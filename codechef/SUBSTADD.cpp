#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int N, X, Y;
    std::cin >> N >> X >> Y;
    std::vector<int> A, B;
    for (int n = 0; n < N; n++) { int Ai; std::cin >> Ai; A.push_back(Ai); }
    for (int n = 0; n < N; n++) { int Bi; std::cin >> Bi; B.push_back(Bi); }
    /*
      ======================================
        Chef is asked to write a program that
        takes an array A of length N and two
        integers X and Y as input and modifies
        it as follows:

        1. Choose a random subset of elements
        of A (possibly empty).
        2. Increase all the elements of the
        chosen subset by X.
        3. Increase the remaining elements
        in A by Y.

        You're given N, X, Y, A and the array B
        that is returned by the Chef's program.
        Determine whether Chef's program gave
        the correct output.
      ======================================
    */
    std::vector<int> difference; std::transform(std::begin(A), std::end(A), std::begin(B), std::back_inserter(difference), [](auto const &a, auto const &b) { return b - a; });
    int Cx = std::count(std::begin(difference), std::end(difference), X);
    int Cy = std::count(std::begin(difference), std::end(difference), Y);
    bool condition = X != Y ? Cx + Cy == N : Cx == N;
    std::cout << (condition ? "Yes" : "No") << std::endl;
  }
  return 0;
}
