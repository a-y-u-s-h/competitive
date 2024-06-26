#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int N;
    std::cin >> N;
    std::vector<int> S;
    for (int n = 0; n < N; n++) { int Si; std::cin >> Si; S.push_back(Si); }
    /*
      ======================================
        Most problems on CodeChef highlight
        chef's love for food and cooking but
        little is known about his love for
        racing sports. He is an avid Formula 1
        fan. He went to watch this yaer's Indian
        Grand Prix at New Delhi. He noticed
        that one segment of the circuit was
        a long straight road. It was impossible
        for a car to overtake other cars on
        this segment. Therefore, a car had to
        lower down its speed if there was a slower
        car in front of it. While watching
        the race, Chef started to wonder how many
        cars were moving at their maximum speed.

        Formally, you're given the maximum
        speed of N cars in the order they
        entered the long straight segment
        of the circuit. Each car prefers to
        move at its maximum speed. If that's
        not possible because of the front car
        being slow, it might have to lower
        its speed. It still moves at the fastest
        possible speed while avoiding any collisions.
        For the purposes for this problem,
        you can assume that the straight segment
        is infinitely long.

        Count the number of cars which were
        moving at their maximum speed on the
        straight segment.
      ======================================
    */
    std::vector<bool> maximums; int front = S[0];
    for (int i = 0; i < N; i++) { if (i == 0) { maximums.push_back(1); front = S[i]; continue; } if (S[i] <= front) { maximums.push_back(1); front = S[i]; } else { maximums.push_back(0); } }
    int answer = std::count(std::begin(maximums), std::end(maximums), 1);
    std::cout << answer << std::endl;

  }
  return 0;
}
