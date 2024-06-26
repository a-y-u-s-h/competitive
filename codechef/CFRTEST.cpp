#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int N;
    std::cin >> N;
    std::vector<int> D;
    for (int n = 0; n < N; n++) { int Di; std::cin >> Di; D.push_back(Di); }
    /*
      ======================================
        Devu has N weird friends. Its his
        birthday today, so they thought that
        this is the best occasion for testing
        their friendship with him. They put
        up conditions before Devu that they
        will break the friendship unless he
        gives them a grand party on their
        chosen day. Formally, i-th friend will
        break his friendship if he does not
        receive a grand party on Di-th day.

        Devu despite being as rich as Gatsby,
        is quite frugal and can give at most
        one grand party daily. Also, he wants
        to invite only one person in a party.
        So he just wonders what is the maximum
        number of friendships he can save.
        Please help Devu in this tough task.
      ======================================
    */
    std::set distinct (std::begin(D), std::end(D));
    std::cout << distinct.size() << std::endl;
  }
  return 0;
}
