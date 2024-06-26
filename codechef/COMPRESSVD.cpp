#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int N;
    std::cin >> N;
    std::vector<int> A;
    for (int n = 0; n < N; n++) { int Ai; std::cin >> Ai; A.push_back(Ai); }
    /*
      ======================================
        Chef recorded a video explaining his
        favourite recipe. However, the size
        of the video is too large to upload
        on the internet. He wants to compress
        the video so that it has the minimum
        size possible.

        Chef's video has N frames initially.
        The value of the i-th frame is Ai.
        Chef can do the following type of
        operation any number of times:

        Choose an index i (1 <= i < = N) such
        that the value of the i-th frame is
        equal to the value of either
        its neighbours and reemove the i-th
        frame. Find the minimum number of
        frames Chef can achieve.
      ======================================
    */
    for (int i = 0, current = 0; i < N; i += 1) {
      if (i == 0) { current = A[i]; continue; }
      if (current == A[i]) { A[i] = 0; } else { current = A[i]; }
    }

    A.erase(std::remove(std::begin(A), std::end(A), 0), std::end(A));
    std::cout << A.size() << std::endl;

  }
  return 0;
}
