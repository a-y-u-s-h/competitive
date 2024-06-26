#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  /*
    ======================================
      Problem basically says that there
      are 'N' cupcakes which need to be packed
      into 'A' packages, and whatever remains
      Chef will eat them. A is a number that
      lies between 1 and N inclusive. We want
      to find A, so that Chef gets to eat as
      many cakes as possible.
    ======================================
  */
  int t;
  std::cin >> t;
  for (int i = 0; i < t; i += 1) {
    int N;
    std::cin >> N;

    /*
      ======================================
        We need to maximize N % A.
        It happens at A = (N / 2) + 1
      ======================================
    */
    int A = (N / 2) + 1;
    std::cout << A << std::endl;
  }
  return 0;
}
