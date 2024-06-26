#include <bits/stdc++.h>

long long solution (long long a, long long b) {
  if (a % 3 == 0 || b % 3 == 0)                   return 0;
  if (a % 3 == b % 3 && b % 3 != 0)               return 1;
  if (a % 3 != b % 3 && b % 3 != 0 && b% 3 != 0)  return 2;
}

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    long long A, B;
    std::cin >> A >> B;
    /*
      ======================================
        Stack likes the number 3 a lot. He
        has two non-negative integers A and B.
        In one operation, stack can do either
        of the following:

        A := |A - B| or B := |A - B|

        Note that |X| denotes the absolute
        value of X. Find the minimum number of
        operations after which at least one
        integer out of A and B becomes
        divisible by 3.
      ======================================
    */
    std::cout << solution(A, B) << std::endl;
  }
  return 0;
}
