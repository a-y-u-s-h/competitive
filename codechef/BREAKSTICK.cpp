#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int64_t N, X;
    std::cin >> N >> X;
    /*
      ======================================
        Chef has a stick of length N. He
        can break the stick into 2 or more
        parts such that the parity of length
        of each part is the same. For example,
        a stick of length 11 can be broken
        into 3 sticks of length { 3, 3, 5 }
        since each part is odd but it cannot
        be broken into two sticks of lengths
        { 5, 6 } since one is even and the
        other is odd.

        Chef can then continue applying this
        operation on smaller sticks he obtains,
        as many times as he likes. Can Chef
        obtain a stick of length exactly X by
        doing this?
      ======================================
    */
   bool condition = N % 2 == 0 || (N % 2 == 1 && X % 2 == 1);
   std::cout << (condition ? "YES" : "NO") << std::endl;
  }
  return 0;
}
