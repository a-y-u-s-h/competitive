#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    std::string S;
    std::cin >> S;
    /*
      ======================================
        Given a string S consisting of only
        '(' and ')'. Find whether S is a valid
        parenthesis string. A valid paranthesis
        string is defined as:
        1. Empty string is valid.
        2. If P is valid, then '(P)' is also valid.
        3. If P and Q are valid, PQ is also valid.
      ======================================
    */
    std::stack<char> pairs; bool answer = true;

    for (auto character = std::begin(S); character != std::end(S); character += 1) {
      bool L = *character == '(';
      bool R = *character == ')';
      if (L) pairs.push('(');
      if (R) { if (pairs.size() > 0 && pairs.top() == '(') { pairs.pop(); } else { answer = false; break; } };
    }

    answer = answer && pairs.size() == 0;

    std::cout << answer << std::endl;

  }
  return 0;
}
