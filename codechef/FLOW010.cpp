#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0; t < T; t += 1) {
    char c;
    std::cin >> c;

    /*
      ======================================
        No logic here that's worth noting.
      ======================================
    */
    std::string answer = c == 'B' || c == 'b' ? "BattleShip"
                       : c == 'C' || c == 'c' ? "Cruiser"
                       : c == 'D' || c == 'd' ? "Destroyer"
                       : c == 'F' || c == 'f' ? "Frigate" : "";

    std::cout << answer << std::endl;
  }
  return 0;
}
