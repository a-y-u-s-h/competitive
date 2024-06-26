#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int N, K;
    std::cin >> N >> K;
    std::vector<int> H;
    for (int n = 0; n < N; n++) { int Hi; std::cin >> Hi; H.push_back(Hi); }
    /*
      ======================================
        Sang-Woo advises Gi-Hun to hide
        behind someone to avoid getting shot.

        Gi-Hun follows Sang-Woo's advice and
        hides behind Ali, who saved his life
        earlier. Gi-Hun and Ali both have
        the same height, K. Many players saw
        this trick and also started hiding behind Ali.

        Now, there are N players standing
        between Gi-Hun and Ali in a straight
        line, with the i-th player having
        height Hi. Gi-Hun wants to know the
        minimum number of players who need
        to get shot so that Ali is visible
        in his line of sight.

        Line of sight is a straight line
        drawn between the topmost point of
        two objects. Ali is visible to
        Gi-Hun if nobody between them
        crosses this line. Even if there are
        some players who have the same height
        as that of Gi-Hun and Ali, Ali will
        be visible in Gi-Hun's line of sight.
        Gi-Hun and Ali have the same height.
      ======================================
    */
    int answer = std::count_if(std::begin(H), std::end(H), [K] (auto const &Hi) { return Hi > K; });
    std::cout << answer << std::endl;
  }
  return 0;
}
