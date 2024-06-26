#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int N, M;
    std::cin >> N >> M;
    /*
      ======================================
        Chef recently realized that he needs
        a haircut, and went to his favorite
        hair salon. At the salon he found N
        customers waiting for their haircuts.
        From his past experience, Chef knows
        that the salon takes M minutes per
        customer. Only one person can get their
        haircut at a time. For how many minutes
        will Chef have to wait before he can get
        his haircut?
      ======================================
    */
    int answer = M * N;
    std::cout << answer << std::endl;
  }
  return 0;
}
