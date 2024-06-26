#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int N; std::string S, R;
    std::cin >> N;
    std::cin >> S;
    std::cin >> R;
    /*
      ======================================
        Just count ones and zeroes in the
        binary strings, and with the
        operations given in the question,
        they can be made equal if their
        counts of ones and zeroes are equal.
        Since both are binary strings, you
        can get by comparing just one of
        them as well.
      ======================================
    */
    bool condition = std::count(std::begin(S), std::end(S), '0') == std::count(std::begin(R), std::end(R), '0');
    std::cout << (condition ? "YES" : "NO") << std::endl;
  }
  return 0;
}
