#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int N, M;
  std::cin >> N >> M;
  std::vector<int> A;
  std::vector<std::tuple<int, int, std::string>> posts;
  for (int n = 0; n < N; n++) { int Ai; std::cin >> Ai; A.push_back(Ai); }
  for (int m = 0; m < M; m++) { int Fi, Pi; std::string Si; std::cin >> Fi >> Pi >> Si; posts.push_back(std::make_tuple(Fi, Pi, Si)); }
  /*
    ======================================
      Chef Watson uses a social network
      called ChefBook, which has a new feed
      consisting of posts by his friends.
      Each post can be characterized by Fi -
      the identifier of the friend who created
      the post, Pi - the popularity of the post
      (which is pre-calculated by ChefBook
      platform using some machine learning algo)
      and Si - the contents of the post which
      is a string of lower and uppercase English
      alphabets.

      Also, Chef has some friends, which he
      has marked as special. The algorithm
      used by ChefBook for determining the
      order of posts in news feed is as follows:

      1. Posts of special friends should be
      shown first, irrespective of popularity.
      Among all such posts the popular ones
      should be shown earlier.

      2. Among all other posts, popular posts
      should be shown earlier.

      Given, a list of identifiers of Chef's
      special friends and a list of posts, you
      have to implement this algorithm for
      engineers of ChefBook and output the
      correct ordering of posts in the news
      feed.
    ======================================
  */
  std::vector<std::tuple<int, int, std::string>> S, R;
  std::copy_if(std::begin(posts), std::end(posts), std::inserter(S, std::end(S)), [&A] (auto const &post) { return std::find(std::begin(A), std::end(A), std::get<0>(post)) != std::end(A); });
  std::copy_if(std::begin(posts), std::end(posts), std::inserter(R, std::end(R)), [&A] (auto const &post) { return std::find(std::begin(A), std::end(A), std::get<0>(post)) == std::end(A); });
  std::sort(std::begin(S), std::end(S), [] (auto const &a, auto const &b) { return std::get<1>(a) > std::get<1>(b); });
  std::sort(std::begin(R), std::end(R), [] (auto const &a, auto const &b) { return std::get<1>(a) > std::get<1>(b); });

  std::vector<std::tuple<int, int, std::string>> reordered (S.size() + R.s);
  std::merge(std::begin(S), std::end(S), std::begin(R), std::end(R), std::begin(reordered))

  reordered.reserve(S.size() + R.size());
  reordered.insert(std::end(reordered), std::begin(S), std::end(S));
  reordered.insert(std::end(reordered), std::begin(R), std::end(R));

  for (auto i : reordered) { std::cout << std::get<2>(i) << std::endl; }

  return 0;
}
