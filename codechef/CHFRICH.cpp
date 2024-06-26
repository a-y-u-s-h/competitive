#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0; t < T; t += 1) {
    float A, B, X;
    std::cin >> A >> B >> X;

    /*
      ======================================
        Chef's asset's current worth: A billion dollars.
        Cheft's asset's worth after i years = A + iX,
        because every year Chef's assets
        increase by X billion dollars.

        To be the richest in Chefland, Chef needs to get at least
        B billion dollars. We need to find how how many years
        will it take Chef to reach his goal of becoming
        the richest person in Chefland.

        i = ceil((B - A) / X)
      ======================================
    */
   int answer = std::ceil((B - A) / X);
   std::cout << answer << std::endl;
  }
  return 0;
}
