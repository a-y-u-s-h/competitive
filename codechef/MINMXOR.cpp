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
        You have N integers A1, A2, A3..An.
        You have to make the Bitwise XOR of
        all the elements as minimum as possible.
        You're allowed to remove at most one
        element. Note that this means that you
        can also choose to not remove any
        element. What is the final minimum
        XOR that you can achieve after removing
        at most one element?

        By making use of properties of XOR.
        We can just find out the total XOR and
        to know which element to remove, we
        can take XOR of elements with the
        total XOR - whichever is lower, we
        will want to remove it.
      ======================================
    */

    int XORA = std::accumulate(std::begin(A), std::end(A), 0,  [](auto const &a, auto const &b) { return a ^ b; });
    std::vector<int> XORs (A.size()); std::transform(std::begin(A), std::end(A), std::begin(XORs), [XORA] (auto const &Ai) { return Ai ^ XORA; });
    int answer = std::min(XORA, *std::min_element(std::begin(XORs), std::end(XORs)));
    std::cout << answer << std::endl;
  }
  return 0;
}
