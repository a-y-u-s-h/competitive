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
        You have a vector, you can right rotate
        it any number of times. What is the
        maximum value of A1 + An that you can get?
      ======================================
    */
    int answer = 0;

    for (int i = 0; i < N; i += 1) {
      std::rotate(std::begin(A), std::begin(A) + 1, std::end(A));
      int Si = A.front() + A.back();
      if (answer < Si) answer = Si;
    }

    std::cout << answer << std::endl;
  }
  return 0;
}
