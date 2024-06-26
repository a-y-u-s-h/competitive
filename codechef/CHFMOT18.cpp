#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int S, N;
    std::cin >> S >> N;
    /*
      ======================================
        In a country called Chef land, there
        was a lot of monetary fraud, so Chefu,
        the head of the country, decided to
        choose new denominations of the local
        currency - all even-valued coins up to
        an integer N should exist. After a few
        days, a citizen complained that there
        was no way to create an odd value, so
        Chefu decided that he should also
        introduce coins with value 1. Formally,
        you are given integer N; for v = 1, and
        each even positive integer v <= N, coins
        with value v exist.

        You're also given an integer S. To handle
        transactions quickly, find the minimum
        number of coins needed to pay a price S.
      ======================================
    */
    int coins = 0;

    while (S > 0) {
      if (S >= N && N % 2 == 0) { coins += (S / N); S = S % N; continue; }
      if (S >= N && N % 2 == 1) { coins += (S / (N - 1)); S = S % (N - 1); continue; }
      if (S  < N && N % 2 == 0) { if (S % 2 == 0) { coins += 1; S = 0; break; } else { if (S > 1) { coins += 2; S = 0; break; } else { coins += S; S = 0; break; } }}
      if (S  < N && N % 2 == 1) { if (S % 2 == 1) { coins += 2; S = 0; break; } else { if (S > 1) { coins += 2; S = 0; break; } else { coins += S; S = 0; break; } }}
    }

    std::cout << coins << std::endl;

  }
  return 0;
}
