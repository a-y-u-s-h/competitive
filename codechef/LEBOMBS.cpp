#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int N; std::string S;
    std::cin >> N;
    std::cin >> S;
    /*
      ======================================
        The Little Elephant from the Zoo of
        Lviv currently is on a military mission.
        There are N enemy buildings placed
        in a row and numbered from left to
        right starting from 0. Each building
        i (except the first and the last) has
        exactly two adjacent buildings with
        indices i-1 and i+1. The first and
        the last buildings have just a single
        adjacent building.

        Some of the buildings contain bombs.
        When bomb explodes in some building
        it destroys it and all adjacent to it
        buildings. You're given the string S
        of length N, where Si is 1 if the i-th
        building contains a bomb and 0 otherwise.
        Find for the little elephant the
        number of buildings that will not be
        destroyed after all bombs explode. Please
        note that all bombs explode simultaneously.
      ======================================
    */
    int answer = N;

    for (int i = 0; i < N; i += 1) {
      if (i == 0 && N > 1 && S[i + 1] == '1') { answer--; continue; }
      if (i == N - 1 && S[i - 1] == '1')      { answer--; continue; }
      if (S[i - 1] == '1' || S[i + 1] == '1') { answer--; continue; }
      if (S[i] == '1') { answer--; continue; }
    }

    std::cout << answer << std::endl;
  }
  return 0;
}
