#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0; t < T; t += 1) {
    int N, K;
    std::cin >> N >> K;

    /*
      ======================================
        For every minion, we find the new
        value of that characteristic and then
        check whether it is divisible by 7.
        If it is, then we simply increase the count
        of wolverine like minions.
      ======================================
    */
    int count = 0;
    for (int n = 0; n < N; n += 1) {
      int initial;
      std::cin >> initial;
      int mutated = initial + K;
      if (mutated % 7 == 0) count++;
    }

    std::cout << count << std::endl;
  }
  return 0;
}
