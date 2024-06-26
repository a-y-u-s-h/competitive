#include <bits/stdc++.h>

std::string parse (std::string S) {
  std::stack<char> stack;
  std::string result;

  for (auto character = std::begin(S); character != std::end(S); character++) {
    if (*character == '(') { stack.push(*character); continue; }
    if (*character >= 'a' && *character <= 'z') { result += *character; continue; }
    if (*character == ')') { while (stack.top() != '(') { result += stack.top(); stack.pop(); } stack.pop(); continue; }
    stack.push(*character);
  }

  return result;
}


int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    std::string S;
    std::cin >> S;
    /*
      ======================================
        Reverse Polish Notation (RPN) is a
        mathematical notation where every
        operator follows all of its operands.
        For instance, to add three and four,
        one would write "3 4 +" rather than
        "3 + 4". If there are multiple
        operations, the operator is given
        immediately after its second operand;
        so the expression written "3 - 4 + 5"
        would be written "3 4 - 5 +" first
        subtract 4 from 3, then add 5 to that.

        Transform algebraic expression with
        brackets into RPN form. You can assume
        that for the test cases below, only
        single letters will be used, brackets
        [] will not be used and each expression
        has only one RPN form (no expressions like
        a * b * c).
      ======================================
    */
    std::cout << parse(S) << std::endl;
  }
  return 0;
}
