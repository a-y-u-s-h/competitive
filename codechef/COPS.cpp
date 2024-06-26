#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int M, x, y;
    std::cin >> M >> x >> y;
    std::vector<int> H;
    for (int m = 0; m < M; m++) { int Hi; std::cin >> Hi; H.push_back(Hi); }
    /*
      ======================================
        There are 100 houses located on a
        straight line. The first house is
        numbered 1 and the last one is
        numbered 100. Some M houses out of
        these 100 are occupied by cops.

        Thief Devu has just stolen PeePee's bag
        and iss looking for a house to hide in.
        PeePee uses fast 4G internet and sends
        the message to all the cops that a thief
        named Devu has just stolen her bag
        and ran into some house.

        Devu knows that the cops run at a
        maximum speed of x houses per minute
        in a straight line and they will
        search for a maximum of y minutes.
        Devu wants to know how many houses
        are safe for him to escape from the
        cops. Help him in getting this info.
      ======================================
    */
    int span = x * y;
    std::vector<int> houses (100); std::iota(std::begin(houses), std::end(houses), 1);
    for (int m = 0; m < M; m += 1) { int L = std::max(0, H[m] - span); int R = std::min(100, H[m] + span); std::transform(std::begin(houses) + L - 1, std::begin(houses) + R, std::begin(houses) + L - 1, [] (auto const &Hi) { return 0; }); }
    int answer = std::count_if(std::begin(houses), std::end(houses), [] (auto const &Hi) { return Hi != 0; });
    std::cout << answer << std::endl;
  }
  return 0;
}
