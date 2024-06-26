#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int N;
    std::cin >> N;
    std::vector<int> S;
    for (int n = 0; n < N; n++) { int Si; std::cin >> Si; S.push_back(Si); }
    /*
      ======================================
        Chef is very fond of horses. He enjoys
        watching them race. As expected, he has
        a stable full of horses. He, along with
        his friends, goes to his stable during
        the weekends to watch a few of these
        horses race. Chef wants his friends to
        enjoy the race and so he wants the race
        to be close. This can happen only if
        the horses are comparable on their skill
        i.e. the difference in their skills is less.

        There are N horses in the stable. The
        skill of the horse i is represented
        by an integer S[i]. The Chef needs to
        pick 2 horses for the race such that
        the difference in their skills is minimum.
        This way, he would be able to host a very
        interesting race. Your task is to help him
        do this and report the minimum difference
        that is possible between 2 horses in the race.
      ======================================
    */
    std::sort(std::begin(S), std::end(S));

    int answer = *std::max_element(std::begin(S), std::end(S)) - *std::min_element(std::begin(S), std::end(S));

    for (auto Si = std::begin(S); Si != std::end(S); Si += 1) {
      for (auto Sj = std::begin(S); Sj != std::end(S); Sj += 1) {
        if (Si < Sj) { answer = std::min(answer , std::abs(*Sj - *Si)); }
      }
    }

    std::cout << answer << std::endl;
  }
  return 0;
}
