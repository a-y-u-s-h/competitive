#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int R;
    std::cin >> R;
    /*
      ======================================
        The budget of Technex'23 is R thousand
        rupees. Since ICM is their flagship
        event, they will allocate at least half
        of their budget to it.

        There are 5 other events planned under
        Technex'23. The team wants to distribute
        the remaining amount equally among these.
        Find the maximum amount in rupees that
        could be allocated to each of
        the other five events.
      ======================================
    */
    int answer = 100 * R;
    std::cout << answer << std::endl;
  }
  return 0;
}
