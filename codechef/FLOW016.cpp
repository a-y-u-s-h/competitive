#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0; t < T; t += 1) {
    int A, B;
    std::cin >> A >> B;

    /*
      ======================================
        Using the inbuilt method to find
        out GCD, and then using the GCD to find
        out LCM because -

        (A * B) = LCM(A, B) * GCD(A, B)
      ======================================
    */

    long long GCD = std::gcd(A, B);
    long long LCM = (A / GCD) * B;
    std::cout << GCD << " " << LCM << std::endl;
  }
  return 0;
}
