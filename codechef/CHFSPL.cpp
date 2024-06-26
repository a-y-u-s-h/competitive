#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int A, B, C;
    std::cin >> A >> B >> C;
    /*
      ======================================
        Chef has 3 spells, their powers are
        A, B and C respectively. Initially,
        Chef has 0 hit points and if he uses
        a spell with power P, then his number
        of hit points increases by P. Before
        going to sleep, Chef wants to use
        exactly two spells out of these 3. Find
        the maximum number of hit points Chef
        can have after using the spells.
      ======================================
    */
    int spells[3] = { A, B, C};
    std::sort(std::begin(spells), std::end(spells));
    int answer = spells[2] + spells[1];
    std::cout << answer << std::endl;
  }
  return 0;
}
