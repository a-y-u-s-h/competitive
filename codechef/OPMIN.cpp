#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int N;
    std::cin >> N;
    std::vector<int> A;
    for (int n = 0; n < N; n++) { int Ai; std::cin >> Ai; A.push_back(Ai); }
    /*
      ======================================
        You're given an array A of size N.
        Let M be the minimum value present
        in the array initially. In one operation,
        you can choose an element Ai (1 <= i <= N)
        and an integer X (1 <= X <= 100), and
        set Ai = X. Determine the minimum
        number of operations required to make
        M the maximum value in the array.

        Approach: Just convert all elements
        greater than M to be equal to M, so
        that M becomes the maximum value in A.
      ======================================
    */
    int M = *std::min_element(std::begin(A), std::end(A));
    int G = std::count_if(std::begin(A), std::end(A), [M] (auto const &Ai) { return Ai > M; });
    int answer = G;
    std::cout << answer << std::endl;
  }
  return 0;
}
