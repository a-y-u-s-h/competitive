#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int N;
  std::cin >> N;

  /*
    ======================================
      We have N soldiers who hold Ai weapons.
      If number of soldiers containing even
      number of weapons is strictly more than number
      of soliders containing odd number of weapons
      then army is considered lucky. So we just
      create a counter for the army, increment it
      if we encounter lucky soliders and decrement
      it if we get unlucky soliders. Sign of the
      lucky counter will determine luck.
    ======================================
  */
  int lucky = 0;
  for (int i = 0; i < N; i += 1) {
    int Ai;
    std::cin >> Ai;
    Ai % 2 == 0 ? lucky++ : lucky--;
  }

  std::cout << (lucky > 0 ? "READY FOR BATTLE" : "NOT READY") << std::endl;
  return 0;
}
