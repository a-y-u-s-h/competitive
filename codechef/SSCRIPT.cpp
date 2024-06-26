#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int N, K; std::string S;
    std::cin >> N >> K;
    std::cin >> S;
    /*
      ======================================
        A string is said to be using strong
        language if it contains at least K
        consecutive characters '*'. You're
        given a string S with length N. Determine
        whether it uses strong language or not.
      ======================================
    */
    long long streak = 0, current = 0;
    for (auto letter = std::begin(S); letter != std::end(S); letter += 1) { if (*letter == '*') { current++; streak = std::max(streak, current); } else { current = 0; }  }
    bool condition = streak >= K;
    std::cout << (condition ? "YES" : "NO") << std::endl;
  }
  return 0;
}
