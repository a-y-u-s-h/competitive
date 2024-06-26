#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int N; std::string V; std::vector<int> S;
    std::cin >> N;
    for (int n = 0; n < N; n++) { int Si; std::cin >> Si; S.push_back(Si); }
    std::cin >> V;
    /*
      ======================================
        Chef has recently introduced a feature,
        called WA Test Cases, which allows you
        to see the smallest test case that your
        WA code has failed in. For example,
        you can go to any relevant problem in
        Practice, make a submission which gets
        a WA verdict, and then click on the
        "Debug My Code" button to see the test case.

        Your job now is to find the smallest
        test case that a particular submission
        fails on. That problem has N test cases,
        and you're given the size of each of
        those test cases as S1, S2, S3...Sn.
        You're also given a binary string V,
        which tells whether the submission
        has passed a particular test case or not.
        That is, if the i-th bit of V is 1, that
        means that the submission has passed
        the i-th test case. If it is 0, then
        it has failed that test case. Your job
        is to output the size of the smallest
        test case where the submission has failed.
      ======================================
    */
    std::vector<std::pair<int, char>> SV; std::transform(std::begin(S), std::end(S), std::begin(V), std::back_inserter(SV), [](auto const &a, auto const &b) { return std::make_pair(a, b); });
    SV.erase(std::remove_if(std::begin(SV), std::end(SV), [] (auto const &SVi) { return SVi.second == '1'; }), std::end(SV));
    auto element = *std::min_element(std::begin(SV), std::end(SV), [] (auto const &a, auto const &b) { return a.first < b.first; });
    std::cout << element.first << std::endl;
  }
  return 0;
}
