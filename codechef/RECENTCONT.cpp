#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int N;
    std::cin >> N;

    std::vector<std::string> C;
    for (int n = 0; n < N; n++) {
      std::string Ci; std::cin >> Ci;
      C.push_back(Ci);
    }

    /*
      ======================================
        Given a list of contest codes, where
        each contest code is either "START38"
        or "LTIME108", help Chef count how
        many problems were featured in each
        of the contests.
      ======================================
    */

    int Ca = std::count(begin(C), end(C), "START38");
    int Cb = std::count(begin(C), end(C), "LTIME108");
    std::cout << Ca << " " << Cb << std::endl;
  }
  return 0;
}
