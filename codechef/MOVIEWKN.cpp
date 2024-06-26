#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int N;
    std::cin >> N;
    std::vector<int> L;
    std::vector<int> R;
    for (int n = 0; n < N; n++) { int Li; std::cin >> Li; L.push_back(Li); }
    for (int n = 0; n < N; n++) { int Ri; std::cin >> Ri; R.push_back(Ri); }
    /*
      ======================================
        Little Egor is a huge movie fan. He
        likes watching different kinds of movies:
        from drama movies to comedy movies,
        from teen movies to horror movies.
        He is planning to visit cinema this
        weekend, but he's not sure which movie
        he should watch.

        There are n movies to watch during this
        weekend. Each movie can be characterized
        by two integers Li and Ri, denoting the
        length and the rating of the corresponding
        movie. Egor wants to watch exactly one
        movie with the maximal value of Li × Ri.
        If there are several such movies, he would
        pick one with the maximal Ri among them.
        If there is still a tie, he would pick
        the one with the minimal index among them.

        Your task is to help Egor to pick a
        movie to watch during this weekend.
      ======================================
    */
    std::map<std::pair<int,int>, std::pair <int, int>> IPLR;

    for (int i = 0; i < N; i += 1) {
      IPLR[std::make_pair(i, L[i] * R[i])] = std::make_pair(L[i], R[i]);
    }

    auto element = std::max_element(std::begin(IPLR), std::end(IPLR), [](auto const &a, auto const &b) {

      int ai = a.first.first;
      int aPi = a.first.second;
      int aLi = a.second.first;
      int aRi = a.second.second;

      int bi = b.first.first;
      int bPi = b.first.second;
      int bLi = b.second.first;
      int bRi = b.second.second;

      return bPi == aPi ? (bRi == aRi ? bi < ai : bRi > aRi) : bPi > aPi;
    });

    auto answer = (*element).first.first + 1;

    std::cout << answer << std::endl;

  }
  return 0;
}
