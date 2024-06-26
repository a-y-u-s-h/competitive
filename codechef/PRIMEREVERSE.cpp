#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int N; std::string A, B;
    std::cin >> N;
    std::cin >> A;
    std::cin >> B;
    /*
      ======================================
        You're given two binary strings A and
        B each, of length N. You can perform
        the following operation on string A
        any number of times:

        1. Select a prime number X.
        2. Choose any substring of string A
        having length X and reverse the subtring.

        Determine whether you can make the string
        A equal to B using any (possibly zero)
        number of operations.
      ======================================
    */
    int CA1 = std::count(std::begin(A), std::end(A), '1');
    int CB1 = std::count(std::begin(B), std::end(B), '1');
    std::string answer = CA1 == CB1 ? "YES" : "NO";
    std::cout << answer << std::endl;
  }
  return 0;
}
