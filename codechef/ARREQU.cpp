#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int N;
    std::cin >> N;
    std::vector<int> A; std::map<int, int> Fa;
    for (int n = 0; n < N; n++) { int Ai; std::cin >> Ai; A.push_back(Ai); Fa[Ai]++; }
    /*
      ======================================
        Chef has an array of N integers. Chef
        can rearrange this array in any manner.
        Chef doesn't like the array if any
        two adjacent elements are equal. Determine
        whether there exists a rearrangement of
        the array that Chef likes.
      ======================================
    */
    bool condition = std::none_of(std::begin(Fa), std::end(Fa), [N](auto const &Fi) { return Fi.second > (N + 1) / 2; });
    std::cout << (condition ? "YES" : "NO") << std::endl;
  }
  return 0;
}
