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
        You're given an array A { A1, A2, ...An }.
        Is it possible to partition A into two
        non-empty subsequences S1 and S2 such
        that Sum(S1) x Sum(S2) is odd?

        a * b is odd, then a is odd and b is odd.
        which means, sum of both the subsequences
        must be odd. Which means odd numbers
        in both subsequences should be greater than
        even numbers in those subsequences. First
        of all, we should find number of odds
        and evens in A itself.
      ======================================
    */
    auto Co = std::count_if(std::begin(A), std::end(A), [](auto const &a) { return a % 2 == 1; });
    bool answer = Co % 2 == 0 && Co > 0;
    std::cout << (answer ? "YES" : "NO") << std::endl;
  }
  return 0;
}
