#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0; t < T; t += 1) {
    int x, y, xr, yr, D;
    std::cin >> x >> y >> xr >> yr >> D;
    /*
      ======================================
        Chef is stuck on an island. He can
        collect x units of food supply and y
        units of water supply from the island.
        He needs xr units of food supply and
        yr units of water supply per day to survive.

        Assuming it takes D days to build the boat
        and reach the shore, we need to tell chef
        whether Chef has sufficient amount of supplies
        to reach the shore.
      ======================================
    */
    bool sufficient = (D * xr <= x) && (D * yr <= y);
    std::cout << (sufficient ? "YES" : "NO") << std::endl;
  }
  return 0;
}
