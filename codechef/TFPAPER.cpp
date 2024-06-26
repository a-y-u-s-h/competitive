#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int t;
  std::cin >> t;
  for (int i = 0 ; i < t; i += 1) {
    int N, K;
    std::cin >> N >> K;
    /*
      ======================================
        In an exam of N questions where each
        question is worth 1 marks and all
        questions can be answered as only T/F.
        Alice got K marks out of N. Bob marked
        questions exact opposite of Alice.
        How many marks did Bob got?
      ======================================
    */
    int answer = N - K;
    std::cout << answer << std::endl;
  }
  return 0;
}
