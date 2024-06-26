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
        A particular month has 30 days, numbered
        from 1 to 30. Day 1 is Monday, and the
        usual 7-day week is followed (so Day 2 is
        Tuesday, Day 3 is Wednesday, and so on).
        Every Saturday and Sunday is a holiday.
        There are N festival days, which are also
        holidays. Note that it is possible for
        a festival day to occur on a Saturday
        or Sunday. You are given the dates of the
        festivals. Determine the total number of
        holidays this month.
      ======================================
    */

    std::vector<int> month (30); std::iota(std::begin(month), std::end(month), 1);
    std::transform(std::begin(month), std::end(month), std::begin(month), [](auto const &day)  { return (day % 7 == 6 || day % 7 == 0) ? 0 : day; });
    std::transform(std::begin(month), std::end(month), std::begin(month), [A](auto const &day) { return (std::find(std::begin(A), std::end(A), day) != std::end(A)) ? 0 : day;  });
    auto answer = std::count(std::begin(month), std::end(month), 0);
    std::cout << answer << std::endl;
  }
  return 0;
}
