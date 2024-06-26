#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int t;
  std::cin >> t;
  for (int i = 0 ; i < t; i += 1) {
    int W, X, Y, Z;
    std::cin >> W >> X >> Y >> Z;
    /*
      ======================================
        A bucket of water initially has W
        litres of water in it. The maximum
        capacity of bucket is X litres.

        Alice turned on the tap and water
        starts flowing into the bucket at
        a rate of Y litres per hour. She
        left the tap running for exactly Z
        hours. Determine whether the bucket
        has been overflown, filled exactly
        or is still left unfilled.
      ======================================
    */
    std::string answer = (X >   W + (Z * Y)) ? "UNFILLED"
                       : (X <   W + (Z * Y)) ? "OVERFLOW"
                       : (X ==  W + (Z * Y)) ? "FILLED"
                       : "";
    std::cout << answer << std::endl;

  }
  return 0;
}
