#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    long long N, B, M;
    std::cin >> N >> B >> M;
    /*
      ======================================
        Jem will not take a break until he
        finishes at least half of the remaining
        problems. Formally, if N is even then
        he will take he first break after
        finishing N / 2 problems. If N is odd
        then the break will be after he done
        (N + 1) / 2 problems. Each of his break
        will last for B minutes. Initially, he
        takes M minutes in solving a problem,
        after each break he will take twice more
        time in solving a problem, i.e. 2 * M
        minutes per problem after the first break.

        Jem will start working soon and ask you
        to help him calculate how much time it
        will take until he finish the last problem!

        [] pause []
                 [] pause []
                          [] pause .. 0

      ======================================
    */

    long long time = 0;
    long long speed = M;

    while (N) {
      long long Q = N % 2 == 0 ? N / 2 : (N + 1) / 2;
      time += (Q * speed) + B;
      // std::cout << N << " " << speed << " " << Q << " " << N - Q << " " << time - B << " " << time <<  std::endl;
      speed *= 2;
      N -= Q;
    }

    time -= B;

    std::cout << time << std::endl;
  }
  return 0;
}
