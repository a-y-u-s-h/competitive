#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    std::string A, B;
    std::cin >> A;
    std::cin >> B;
    /*
      ======================================
        Chef has two binary strings A and
        B, each of length N. Chef can
        rearrange both the strings in any
        way. Find the maximum bitwise XOR
        he can achieve if he rearranges
        the strings optimally.
      ======================================
    */
    int C1a = std::count(std::begin(A), std::end(A), '1');
    int C0a = std::count(std::begin(A), std::end(A), '0');
    int C1b = std::count(std::begin(B), std::end(B), '1');
    int C0b = std::count(std::begin(B), std::end(B), '0');
    int N = A.size();
    std::string P = std::string(std::min(std::max(C0a, C0b), std::max(C1a, C1b)), '0') + std::string(N - std::max(C0a, C0b), '1') + std::string(std::max(C0a, C0b) - std::min(std::max(C0a, C0b), std::max(C1a, C1b)), '0');
    std::string Q = std::string(std::min(std::max(C1a, C1b), std::max(C0a, C0b)), '1') + std::string(N - std::max(C1a, C1b), '0') + std::string(std::max(C1a, C1b) - std::min(std::max(C1a, C1b), std::max(C0a, C0b)), '1');
    std::string answer; std::transform(std::begin(P), std::end(P), std::begin(Q), std::back_inserter(answer), [](auto const &a, auto const &b) { return a == b ? '0' : '1'; });
    std::cout << answer << std::endl;
  }
  return 0;
}
