#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int t;
  std::cin >> t;
  for (int i = 0 ; i < t; i += 1) {
    int N, X;
    std::cin >> N >> X;
    /*
      ======================================
        Chef's playlist contains 3 songs
        named A, B, and C, each of duration
        exactly X minutes. Chef generally
        plays these 3 songs in loop. i.e.
        A -> B -> C -> A -> B -> C -> A -> ...

        Chef went on a train journey of N
        minutes and played his playlist on loop
        for the whole journey. How many times
        did he listen to the song C completely.
      ======================================
    */
    int answer = N / (3 * X);
    std::cout << answer << std::endl;
  }
  return 0;
}
