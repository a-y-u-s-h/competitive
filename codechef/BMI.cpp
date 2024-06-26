#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0; t < T; t += 1) {
    float M, H;
    std::cin >> M >> H;
    /*
      ======================================
        You are given height H, in meters
        and mass M in kilograms of Chef.
        Body mass index of a person is (M / (H^2)).
        We need to report the category into
        which Chef falls, based on his BMI.
      ======================================
    */
    float BMI = M / std::pow(H, 2);
    bool underweight = BMI <= 18;
    bool normal = BMI > 18 && BMI <= 24;
    bool overweight = BMI > 24 && BMI <= 29;
    bool obesity = BMI > 29;

    if (underweight) std::cout << 1 << std::endl;
    if (normal) std::cout << 2 << std::endl;
    if (overweight) std::cout << 3 << std::endl;
    if (obesity) std::cout << 4 << std::endl;
  }
  return 0;
}
