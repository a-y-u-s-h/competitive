#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int N;
    std::cin >> N;
    std::vector<int> A;
    std::vector<int> B;
    for (int n = 0; n < N; n++) { int Ai; std::cin >> Ai; A.push_back(Ai); }
    for (int n = 0; n < N; n++) { int Bi; std::cin >> Bi; B.push_back(Bi); }
    /*
      ======================================
        A post on facebook is said to be more
        popular if the number of likes on the
        post is strictly greater than the
        number of likes on some other post.
        In case, the number of likes is same,
        the post having more comments is more
        popular.

        Given arrays A and B, each having size N,
        such that the number of likes and comments
        on i-th post are Ai, and Bi respectively,
        find out which post is the most popular.

        It is guaranteed that the number of
        comments on all the posts are distinct.
      ======================================
    */
    std::vector<std::tuple<int, int, int>> AB; std::transform(std::begin(A), std::end(A), std::begin(B), std::back_inserter(AB), [&A] (auto const &a, auto const &b) { return std::tuple(a, b, &a - &A[0]); });
    auto candidate = *std::max_element(std::begin(AB), std::end(AB), [] (auto const &a, auto const &b) { return std::get<0>(b) > std::get<0>(a); });
    AB.erase(std::remove_if(std::begin(AB), std::end(AB), [candidate] (auto const &ABi) { return std::get<0>(ABi) != std::get<0>(candidate); }), std::end(AB));
    auto popular = *std::max_element(std::begin(AB), std::end(AB), [] (auto const &a, auto const &b) { return std::get<1>(b) > std::get<1>(a); });
    int answer = std::get<2>(popular) + 1;
    std::cout << answer << std::endl;
  }
  return 0;
}
