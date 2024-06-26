#include <bits/stdc++.h>

bool primality(int n) {
  /*
    ======================================
      We just need to check if the number
      given to us is prime or not.
    ======================================
  */
  if (n <= 1) return false;
  for (int i = 2; i < n; i += 1) {
    if (n % i == 0) return false;
  }
  return true;
}

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0; t < T; t += 1) {
    int N;
    std::cin >> N;
    bool valid = primality(N);
    std::cout << (valid ? "yes" : "no") << std::endl;
  }
  return 0;
}
