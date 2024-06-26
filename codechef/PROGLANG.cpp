#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  /*
    ======================================
      Chef is a software developer, so he
      has to switch between different languages
      sometimes. Each programming language
      has some features, which are represented
      by integers here.

      Currently, Chef has to use a language with
      two given features A and B. He has two options
      - switching to a language with two features
      A1 and B1, or to a language with two features
      A2 and B2. All four features of these two
      languages are pairwise distinct.

      Tell Chef whether he can use the first language,
      the second language or neither of these languages
      (if no single language has all the required features).
    ======================================
  */
  int T;
  std::cin >> T;
  for (int t = 0; t < T; t += 1) {
    int A, B, A1, B1, A2, B2;
    std::cin >> A >> B >> A1 >> B1 >> A2 >> B2;
    /*
      ======================================
        We simply count the occurences of
        A and B among language pairs. We need
        to print 1 if both features are in first
        language (L1) and 2 if both features are
        in 2nd language (L2) and 0 if both features
        don't exist in either of them.

        Ca1, Ca2 represent count of A in L1 and L2
        respectively. Cb1 and Cb2 reprent count of B
        in L1 and L2 respectively.
      ======================================
    */
    std::vector<int> L1 = {A1, B1};
    std::vector<int> L2 = {A2, B2};
    int Ca1 = std::count(begin(L1), end(L1), A);
    int Cb1 = std::count(begin(L1), end(L1), B);
    int Ca2 = std::count(begin(L2), end(L2), A);
    int Cb2 = std::count(begin(L2), end(L2), B);

    bool first = Ca1 && Cb1;
    bool second = Ca2 && Cb2;
    bool neither = !(first || second);

    if (first) std::cout << 1 << std::endl;
    if (second) std::cout << 2 << std::endl;
    if (neither) std::cout << 0 << std::endl;
  }
  return 0;
}
