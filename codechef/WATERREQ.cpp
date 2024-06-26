#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int t;
  std::cin >> t;
  for (int i = 0 ; i < t; i += 1) {
    int N;
    std::cin >> N;
    /*
      ======================================
        A machine requires 2L of water for one
        hour to do its job. How much water
        would it require to do its job for N hours.
      ======================================
    */
    int answer = N * 2;
    std::cout << answer << std::endl;
  }
  return 0;
}
