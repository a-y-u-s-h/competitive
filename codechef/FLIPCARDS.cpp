#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int N, X;
    std::cin >> N >> X;
    /*
      ======================================
        There are N cards on a table out
        of which X cards are face-up and
        the remaining are face-down. In one
        operation, we can do the following:

        Select any one card and flip it (i.e.
        if it was initially face-up, after the
        operation it will be face-down and vice
        versa). What is the minimum number of
        operations we must perform so that all
        the cards face in the same direction.
        That is, either all are face up or
        all are face-down.
      ======================================
    */
    int answer = X < N - X ? X : N - X;
    std::cout << answer << std::endl;
  }
  return 0;
}
