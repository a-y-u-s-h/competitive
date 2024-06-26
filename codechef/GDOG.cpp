#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0; t < T; t += 1) {
    int64_t N, K;
    std::cin >> N >> K;

    /*
      ======================================
        There are N things that will be
        distributed among X people
        (X lies between 1 to K) such that N % X
        should be maximum (because the dog wants
        to have the maximum remainder).
      ======================================
    */

    int64_t maximum = 0, people = 0;
    for (int x = 1; x <= K; x += 1) {
      int64_t remainder = N % x;
      if (maximum < remainder) {
        maximum = remainder;
        people = x;
      }
    }

    /*
      ======================================
        We find out remainders for every X,
        and then find out the maximum remainder.
        Maximum remainder is the number of coins
        that the dog can get.
      ======================================
    */
    std::cout << maximum << std::endl;
  }
  return 0;
}
