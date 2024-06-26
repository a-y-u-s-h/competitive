#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int N; std::string S;
    std::cin >> N;
    std::cin >> S;
    /*
      ======================================
        You're given a string S of length N.
        Your task is to delete a subsequence
        of maximum length form the string
        such that, after concatenating the
        remaining parts of the
        string, it becomes a palindrome
        of string greater than 1. If this
        is posssible, print the maximum length
        of the subsequence that can be
        deleted. Otherwise print - 1.
      ======================================
    */
    auto D = std::set(std::begin(S), std::end(S)); std::vector<int> F (D.size()); std::transform(std::begin(D), std::end(D), std::begin(F), [S](auto const &d) { return std::count(std::begin(S), std::end(S), d); });
    int answer = std::any_of(std::begin(F), std::end(F), [](auto const &f) { return f > 1; }) ? N - 2 : -1;
    std::cout << answer << std::endl;
  }
  return 0;
}
