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
        You have to type an email to your
        friend. The email can be represented
        as a string S (which does not contain
        spaces). To complete your task, you
        can perform any one of the following
        actions in one move:
        1. Append a character at the end of the string.
        2. Append a duplicate of the current string.
        Find the minimum number of moves required
        to type the email.
      ======================================
    */

    long long operations = 0;

    while (S.size() > 0) {
      std::string L = S.substr(0, S.size() / 2);
      std::string R = S.substr(S.size() / 2, S.size());
      if (L == R) { S = L; } else { S = S.substr(0, S.size() - 1); }
      operations++;
    }

    std::cout << operations << std::endl;

  }
  return 0;
}
