#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0; t < T; t += 1) {
    int H, x, y, C;
    std::cin >> H >> x >> y >> C;
    /*
      ======================================
        Currently, in Chefland some activities
        consume y liters of water. Chef says
        he can help cut down the total usage of
        water to floor(y / 2) by compaigning for usage
        of greywater for some activities.

        Assuming x liters of water (every week per
        household) is consumed at chores where
        using freshwater is mandatory and total
        of C liters of water is available (for a week)
        for the entire Chefland having H households.

        We need to find whether all households can
        have sufficient water to meet requirements.

        Following are some variables
        (consumption is in (per household per week) units).

        * Ch = Total Consumption after using (water + greywater).
          Ch = x + floor(y / 2) (for a single household)
        * Cc = Total Consumption of Chefland
          Cc = H * Ch
      ======================================
    */
    int Ch = x + std::floor(y / 2);
    int Cc = H * Ch;
    bool possible = Cc <= C;
    std::cout << (possible ? "YES" : "NO") << std::endl;
  }
  return 0;
}
