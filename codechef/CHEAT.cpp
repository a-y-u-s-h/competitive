#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int N;
    std::cin >> N;
    /*
      ======================================
        There are N spooky days left until
        Halloween. Dracula dines at a mysterious
        restaurant that changes its spooky
        menu daily. He particularly enjoys
        what they serve on Tuesday. Today is
        Monday, so he wishes to calculate how
        many times he can indulge in his favourite
        menu in the next N days (including today)
        before Halloween. Note that Dracula
        follows the 7-day calendar, with
        Tuesday immediately following Monday.
      ======================================
    */
    std::vector<int> remaining (N); std::iota(std::begin(remaining), std::end(remaining), 1);
    auto answer = std::count_if(std::begin(remaining), std::end(remaining), [](auto const &day) { return day % 7 == 2; });
    std::cout << answer << std::endl;
  }
  return 0;
}
