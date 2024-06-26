#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int N;
    std::cin >> N;
    std::string S;
    std::cin >> S;
    /*
      ======================================
        You are given a string S consisting of
        N characters. Each character is either
        a digit from 0 to 9 or an operator out
        of +, -, and *. Consider the string to
        be in reverse polish notation consisting
        of digits (from 1 to 9) as the operands
        and +, -, or * as the operators and
        evaluate the expression.
      ======================================
    */

    std::stack<int> stack;

    for (auto character = std::begin(S); character != std::end(S); character += 1) {
      if (*character >= '0' && *character <= '9') { stack.push(*character - '0'); continue; }
      if (*character == '+') { int R = stack.top(); stack.pop(); int L = stack.top(); stack.pop(); stack.push(L + R); continue; }
      if (*character == '-') { int R = stack.top(); stack.pop(); int L = stack.top(); stack.pop(); stack.push(L - R); continue; }
      if (*character == '*') { int R = stack.top(); stack.pop(); int L = stack.top(); stack.pop(); stack.push(L * R); continue; }
    }

    std::cout << stack.top() << std::endl;
  }
  return 0;
}
