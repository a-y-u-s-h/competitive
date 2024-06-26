#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    long long N;
    std::cin >> N;
    /*
      ======================================
        Every great Chef knows that lucky
        numbers are positive integers whose
        decimal representations contain
        only the lucky digits 4 and 7. For
        example, numbers 47, 744, 4 are lucky
        and 5, 17, 467 are not.

        Our Chef has recently returned from
        the Lucky country. He observed that
        every restaurant in the Lucky country
        had a lucky number as its name. He
        believes that having a lucky number
        as a restaurant name can indeed turn
        out to be very lucky.

        Our Chef believes that it is possible
        to make a lucky number having N digits
        even luckier. Any number following
        the rules below is called Lucky lucky
        number:

        The number contains only digits 4 and 7.
        Count of digit 4 in the number should
        be divisible by 7. Count of digit 7 in
        the number should be divisible  by 4.

        Help our Chef to compute the count
        of digit 4 in the smallest Lucky lucky
        nnumber having N digits.
      ======================================
    */

    /*
      ======================================
        We want the lucky lucky number to
        be as small as possible. Thus, we
        want the number to have maximum
        number of 4's placed in the beginning
        of the number. We can write N = 7Q + R,
        i.e. R = N mod 7. From then, we can
        see the pattern for count of 4.
      ======================================
    */

    if (N % 7 == 0) { std::cout << N << std::endl; continue; }
    while (N > 0) { N -= 4; if (N % 7 == 0) { std::cout << N << std::endl; break; } }
    if (N % 7 != 0) { std::cout << -1 << std::endl; }
  }
  return 0;
}
