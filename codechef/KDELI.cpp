#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    long long N, K, L;
    std::cin >> N >> K >> L;
    std::vector<long long> A;
    for (long long n = 0; n < N; n++) { long long Ai; std::cin >> Ai; A.push_back(Ai); }
    /*
      ======================================
        A new patisserie has opened up to
        rave reviews. You, in your quest for
        deliciousness, are going to visit it.

        The patisserie has N pastries. With
        your trained eye, you judge that the
        i-th of them has deliciousness Ai.
        Of course, you want to eat pastries
        whose total deliciousness is as high
        as possible. Unfortunately, you can't
        just buy everything out.

        There are K customers in the store,
        including you. They form a queue to
        order pastries, of which you're the
        L-th person. Each customer including
        you will do the following:

        1. Among the remaining pastries, buy
        the one with the highest deliciousness.
        2. Then move to the back of the queue.

        This will repeat till all the pastries
        are sold out. What's the total deliciousness
        of the pastries you buy?
      ======================================
    */
    long long answer = 0;
    std::sort(std::begin(A), std::end(A), std::greater<int>());
    for (long long r = 0; K * r + L - 1 < N; r += 1) { answer += A[K * r + L - 1]; }
    std::cout << answer << std::endl;
  }
  return 0;
}
