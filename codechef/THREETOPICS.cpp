#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int A, B, C, X;
  std::cin >> A >> B >> C >> X;
  /*
    ======================================
      Chef is prepared for A, B, C topics
      out of 10 for some competition. He
      is completely blank about other topics.
      Chef can only win if he gets either A,
      B, C topics during the competition.
      He is given X topic, find whether he
      has any chances of winning the competition
      or not.
    ======================================
  */
  bool condition = X == A || X == B || X == C;
  std::cout << (condition ? "YES" : "NO") << std::endl;
  return 0;
}
