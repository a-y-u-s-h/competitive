#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;

  for (int t = 0 ; t < T; t += 1) {
    long long A, B, N;
    std::cin >> A >> B >> N;
    /*
      ======================================
        Alice likes all the numbers which are
        divisible by A. Bob does not like the
        numbers which are divisible by B and
        likes all the remaining numbers.
        Determine the smallest number greater
        than or equal to N which is liked by
        both Alice and Bob. Output -1 if no
        such number exists.
      ======================================
    */

    /*
      ======================================
        Find the smallest multiple of A greater
        than or equal to N and then keep
        adding A until the candidate is
        not divisible by B.
      ======================================
    */
    long long answer = ((N + A - 1) / A) * A;
    if (A % B == 0) { std::cout << "-1" << std::endl; continue; }
    while (answer % B == 0) { answer += A; }
    std::cout << answer << std::endl;
  }
  return 0;
}
