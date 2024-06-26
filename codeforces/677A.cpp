#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int N, H;
  std::cin >> N >> H;
  /*
    ======================================
      Vanya and his friends are walking
      along the fence of height h and they
      do not want the guard to notice them.
      In order to achieve this the height
      of each of the friends should not exceed h.
      If the height of some person is greater
      than h he can bend down and then he
      surely won't be noticed by the guard.
      The height of the i-th person is equal to ai.

      Consider the width of the person
      walking as usual to be equal to 1,
      while the width of the bent person is
      equal to 2. Friends want to talk to
      each other while walking, so they
      would like to walk in a single row.

      What is the minimum width of the road,
      such that friends can walk in a row
      and remain unattended by the guard?
    ======================================
  */
  int answer = 0;
  for (int n = 0; n < N; n++) { int Ai; std::cin >> Ai; if (Ai > H) { answer += 2; } else { answer += 1; }; }
  std::cout << answer << std::endl;
  return 0;
}
