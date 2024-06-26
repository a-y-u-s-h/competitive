#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int t;
  std::cin >> t;
  for (int i = 0; i < t; i += 1) {
    int A, B;
    std::cin >> A >> B;

    /*
      ======================================
        Nothing special here, just need to
        print out the relational operator
        that applies among the three below.
      ======================================
    */

    if (A < B) std::cout << "<" << std::endl;
    if (A > B) std::cout << ">" << std::endl;
    if (A == B) std::cout << "=" << std::endl;
  }
  return 0;
}
