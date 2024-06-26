#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int t;
  std::cin >> t;
  for (int i = 0 ; i < t; i += 1) {
    int X, Y, Z;
    std::cin >> X >> Y >> Z;
    /*
      ======================================
        Initially there were X million people
        in town, out of which Y million people
        left the town and Z million people
        immigrated to this town. Determine
        the final population of this town.
      ======================================
    */
    int answer = X - Y + Z;
    std::cout << answer << std::endl;
  }
  return 0;
}
