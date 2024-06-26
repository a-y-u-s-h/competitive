#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int Z, Y, A, B, C;
    std::cin >> Z >> Y >> A >> B >> C;
    /*
      ======================================
        Chef had Rs. Z at start of the trip
        and has spent Rs. Y on the trip. There
        are three kinds of water sports one
        can enjoy, with prices Rs. A, B, C.
        He wants to try each sport at least once.
        If he can try all of them at least once,
        output YES, otherwise output NO.
      ======================================
    */
    bool condition = Z - Y >= A + B + C;
    std::cout << (condition ? "YES" : "NO") << std::endl;
  }
  return 0;
}
