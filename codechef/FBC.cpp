#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int t;
  std::cin >> t;
  for (int i = 0 ; i < t; i += 1) {
    int K, X;
    std::cin >> K >> X;
    /*
      ======================================
        Chef has a bucket having capacity of
        K litres. It is already fillled with X
        litres of water. Find the maximum
        amount of extra water in litres that
        Chef can fill in the bucket without
        overflowing.
      ======================================
    */
    int answer = K > X ? K - X : 0;
    std::cout << answer << std::endl;
  }
  return 0;
}
