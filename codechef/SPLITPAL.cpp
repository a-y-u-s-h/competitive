#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int N;
    std::cin >> N;
    std::deque<int> A;
    for (int n = 0; n < N; n++) { int Ai; std::cin >> Ai; A.push_back(Ai); }
    /*
      ======================================
        JJ has an array A initially of length
        N. He can perform the following operations:

        1) Pick any index i (1 <= i <= |A|)
           such that Ai > 1.
        2) Select any two integers X and Y such
           that X + Y = Ai and X, Y >= 1.
        3) Replace Ai with X and Y.

        Note that the length of the array
        increases by 1 after each operation.
        Example is provided in the problem
        statement. JJ wants to make A palindromic.
        Find the minimum number of operations
        to do so. It is guaranteed that A can
        be converted to a palindromic array by
        using the above operation. Note that an
        Array is called palindromic if it reads
        the same backwards and forwards.
      ======================================
    */

    /*
      ======================================
        We'll use a while loop to check the
        front and back elements. If they're
        the same, we'll remove them both.
        If front element is less than back,
        we will subtract front from back
        and remove the front element. And vice-
        versa for when bcak element is less
        than the front. Process will continue
        until the deque size becomes less than
        or equal to 1.
      ======================================
    */

    int operations = 0;

    while (A.size() > 1) {
      auto L = &A.front(), R = &A.back();
      if (*L == *R) { A.pop_front(); A.pop_back(); continue; }
      if (*L < *R)  { *R -= *L; A.pop_front(); operations++; continue; }
      if (*R < *L)  { *L -= *R; A.pop_back() ; operations++; continue; }
    }

    std::cout << operations << std::endl;
  }
  return 0;
}
