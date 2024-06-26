#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int N, X;
    std::cin >> N >> X;
    std::vector<int> H;
    for (int n = 0; n < N; n++) { int Hi; std::cin >> Hi; H.push_back(Hi); }
    /*
      ======================================
        Ved started playing a new mobile game
        called Fighting Clans. An army of N enemies
        is approaching his base. The i-th enemy has
        Hi health points. An enemy gets killed if
        his health points become 0. Ved defends his
        base using a weapon named Inferno. He can set
        the Inferno to one of the following two modes:

        Single-Target Mode: In one second, the Inferno
        can target exactly one living enemy and cause
        damage of at most X health points.

        Multi-Target Mode: In one second, the Inferno
        can target all living enemies and cause damage
        of 1 health point to each of them. Find the
        minimum time required to kill all the enemies.

        Note: Ved is not allowed to change the
        mode of the weapon once it is set initially.

        Since we cannot change mode of weapon
        once set initially, we can simply
        calculate times taken to kill entire
        army by one method each and find out
        the minimum answer.
      ======================================
    */

    std::vector<int> Hs (std::begin(H), std::end(H));
    std::vector<int> Hm (std::begin(H), std::end(H));

    /*
      ======================================
        Single-Target Mode
      ======================================
    */
    int Ts = 0;
    while (std::accumulate(std::begin(Hs), std::end(Hs), 0) > 0) {
      for (auto Hsi = std::begin(Hs); Hsi != std::end(Hs); Hsi += 1) {
        if (*Hsi > 0) { *Hsi -= std::min(X, *Hsi); Ts++; }
      }
    }

    /*
      ======================================
        Multi-Target Mode
      ======================================
    */
    int Tm = 0;
    while (std::accumulate(std::begin(Hm), std::end(Hm), 0) > 0) {
      std::transform(std::begin(Hm), std::end(Hm), std::begin(Hm), [](auto const &Hmi) { return Hmi > 0 ? Hmi - 1 : Hmi; });
      Tm++;
    }

    /*
      ======================================
        Answer would be minimum among two.
      ======================================
    */
    int answer = std::min(Ts, Tm);
    std::cout << answer << std::endl;
  }
  return 0;
}
