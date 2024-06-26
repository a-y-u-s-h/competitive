#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    float w1, w2, x1, x2, M;
    std::cin >> w1 >> w2 >> x1 >> x2 >> M;
    /*
      ======================================
        No play and eating all day makes your
        belly fat. This happened to Chef during
        the lockdown. His weight before the
        lockdown was w1 kg (measured on the most
        accurate hospital machine) and after M
        months of lockdown, when he measured his
        weight at home (on a regular scale, which
        can be inaccurate), he got the result that
        his weight was w2 kg (w2 > w1).

        Scientific research in all growing kids
        shows that their weights increase by a value
        between x1 and x2 kg (inclusive) per month,
        but not necessarily the same value each
        month. Chef assumes that he is a growing
        kid. Tell him whether his home scale
        could be giving correct results.
      ======================================
    */
    float increment = (w2 - w1) / M;
    bool condition = increment >= x1 && increment <= x2;
    std::cout << (condition ? 1 : 0) << std::endl;
  }
  return 0;
}
