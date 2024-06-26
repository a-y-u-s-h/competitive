#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int N, X, K;
    std::cin >> N >> X >> K;
    /*
      ======================================
        A school has organized a field trip
        for a class of N students, of which
        X students are boys, and the remaining
        students are girls.

        Everyone is excited to go trekking, and
        must form groups of size exactly K to do
        so. However, boys will only form groups
        among themselves, and girls will only form
        groups among themselves.

        Both boys and girls will form as many groups
        as possible. The remaining students can
        either dance around a bonfire, or just read
        books. Dancing around the bonfire requires
        a pair of one girl and one boy, while reading
        is done alone.

        Reading is much more boring than dancing, so
        students will try to avoid it. What's the
        minimum number of students who will be
        engaged in reading?

      ======================================
    */
   int M = X;
   int F = N - X;
   int answer = std::abs((M % K) - (F % K));
   std::cout << answer << std::endl;
  }
  return 0;
}
