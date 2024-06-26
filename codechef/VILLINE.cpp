#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int N; int m, c;
  std::cin >> N;
  std::cin >> m >> c;
  /*
    ======================================
      WW3 is near and Gru wants to recruit
      minions for his team. Gru went to the
      planet of minions to recruit minions,
      he saw that there are two villages
      separated by a river. He cannot recruit
      minions from both villages because
      then his team will have internal conflicts.

      Gru is now in a dilemma about which village
      to recruit as he wants to have the strongest
      possible team. You're given coordinates
      of houses on the planet. Each house
      has exactly one minion and his power is
      given. The planet of minion is considered
      as a 2D plane and the river is denoted by
      a straight line (y = mx + c). Note:
      None of the houses are situated on river.
    ======================================
  */
  /*
    ======================================
      Signs of the coordinates will determine
      where their houses lie, so we'll simply
      add up strengths of 'a' and 'b' sides
      of the river in two variables and output
      the maximum among the two.
    ======================================
  */
  int Sa = 0, Sb = 0;
  for (int i = 0; i < N; i += 1) { int Xi, Yi, Pi; std::cin >> Xi >> Yi >> Pi; if (m * Xi - Yi + c  > 0) { Sa += Pi; } else { Sb += Pi; }}
  std::cout << std::max(Sa, Sb) << std::endl;
  return 0;
}
