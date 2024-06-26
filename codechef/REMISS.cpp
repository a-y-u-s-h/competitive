#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int t;
  std::cin >> t;
  for (int i = 0; i < t; i += 1) {
    int A, B;
    std::cin >> A >> B;

    /*
      ======================================
        Two guards are guarding a building,
        and Chef is going back and forth. Guards
        count how many times Chef goes in.
        1st Guard says A times.
        2nd Guard says B times.

        They say different numbers because even
        though their jobs are 24 hours long, they sleep
        for some time and don't count some hours but they
        never sleep when the other one is sleeping.

        Maximum number of times Chef could go in - A + B
        Minimum number of times Chef could go in - Max(A, B)
      ======================================
    */

    int min = std::max(A, B);
    int max = A + B;
    std::cout << min << " " << max << std::endl;
  }
  return 0;
}
