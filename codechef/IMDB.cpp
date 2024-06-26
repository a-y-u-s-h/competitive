#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  /*
    ======================================
      Chef has been searching for a good
      motivational movie that he can watch
      during his exam time. His hard disk
      has X GB of space remaining. His friend
      has N movies represented with (Si,Ri)
      representing (space required, IMDB rating).
      Help Chef choose the single best movie
      (highest IMDB rating) that can fit
      in his hard disk.
    ======================================
  */
  int T;
  std::cin >> T;
  for (int t = 0; t < T; t += 1) {
    int64_t N, X;
    std::cin >> N >> X;
    /*
      ======================================
        We're given movies (in the form of
        space required and IMDB rating). We
        are putting it in a vector of pairs,
        so that we can sort it based on ratings
        and return the element that has the highest
        rating later.
      ======================================
    */
    std::vector<std::pair<int64_t, int64_t>> movies;
    for (int n = 0; n < N; n += 1) {
      int64_t Si, Ri;
      std::cin >> Si >> Ri;
      std::pair<int64_t, int64_t> movie = std::make_pair(Si, Ri);
      movies.push_back(movie);
    }

    /*
      ======================================
        We want to find the movie that has
        the highest rating (maximum element based
        on second value of the pair) and whose
        first element is not greater than X, so
        we need to pass a custom predicate function
        that checks for this, as 3rd argument of max_element.
        Also since it'll return a pair, we need the
        `second` key as our answer because that's
        the rating of the movie.

        Before doing that, we erase all movies who
        will not fit in Chef's hard drive at all.

        Constraints:

        1 ≤ T ≤ 10
        1 ≤ N ≤ 5⋅10^4
        1 ≤ X ≤ 10^9
        1 ≤ Si, Ri ≤ 10^9 for each valid i
        X ≥ Si for at least one valid i
      ======================================

    */

    movies.erase(std::remove_if(std::begin(movies), std::end(movies), [&](const auto &x) { return x.first > X; }), std::end(movies));
    auto predicate = [](const auto &a, const auto &b) { return a.second < b.second; };
    int64_t answer = (*std::max_element(std::begin(movies), std::end(movies), predicate)).second;
    std::cout << answer << std::endl;
  }
  return 0;
}
