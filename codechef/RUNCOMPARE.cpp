#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    long long N;
    std::cin >> N;
    std::vector<long long> A;
    std::vector<long long> B;
    for (long long n = 0; n < N; n++) { long long Ai; std::cin >> Ai; A.push_back(Ai); }
    for (long long n = 0; n < N; n++) { long long Bi; std::cin >> Bi; B.push_back(Bi); }
    /*
      ======================================
        Alice and Bob recently got into
        running, and decided to compare how
        much they ran on different days.
        They each ran for N days - on the i-th
        day, Alice ran Ai meters and Bob ran Bi
        meters.

        On each day, Alice is unhappy if Bob
        ran strictly more than twice her
        distance and happy otherwise.
        On how many of the N days were both
        Alice and Bob happy.
      ======================================
    */

    long long answer = 0;

    std::vector<int> AH (N), BH (N);

    for (long long i = 0; i < N; i += 1) {
      if (2 * A[i] < B[i]) { AH[i] = 0; } else { AH[i] = 1; }
      if (2 * B[i] < A[i]) { BH[i] = 0; } else { BH[i] = 1; }
      if (AH[i] == 1 && BH[i] == 1) answer++;
    }

    std::cout << answer << std::endl;

  }
  return 0;
}
