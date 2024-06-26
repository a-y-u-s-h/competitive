#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    long long S;
    std::cin >> S;
    std::vector<long long> Q;
    std::vector<std::vector<long long>> L;
    for (long long i = 0; i < S; i++) { long long Qi; std::cin >> Qi; Q.push_back(Qi); }
    for (long long i = 0; i < S; i++) { long long Ei; std::cin >> Ei; std::vector<long long> Li; for (long long j = 0; j < Ei; j++) { long long Lij; std::cin >> Lij; Li.push_back(Lij); } L.push_back(Li); }

    /*
      ======================================
        Chef has just started watching GoT,
        and he wants to first calculate the
        exact time (in minutes) that it'll
        take him to complete the series.

        The series has S seasons, and the i-th
        season has Ei episodes, each of which
        are Li1, Li2, Li3, ...LiEi minutes long.
        Note that these Lij include the duration
        of beginning intro song in each episode.

        The streaming service he uses, allows
        Chef to skip the intro song. The intro
        song changes slightly each season, and
        so he wants to watch the intro song
        in the first episode of each season,
        but he'll skip it in all other episodes
        of that season (yes, we know, a sacrilege!).
        You know that the intro song lasts for
        Qi minutes in the i-th season.

        Find the total time in minutes, that
        he has to watch.
      ======================================
    */

    long long answer = 0;

    for (long long i = 0; i < S; i++) {
      for (long long j = 0; j < L[i].size(); j += 1) {
        answer += L[i][j];
        if (j != 0) { answer -= Q[i]; }
      }
    }

    std::cout << answer << std::endl;

  }
  return 0;
}
