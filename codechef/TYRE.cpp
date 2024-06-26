#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int t;
  std::cin >> t;
  for (int i = 0 ; i < t; i += 1) {
    int N, M;
    std::cin >> N >> M;
    /*
      ======================================
        There are N bikes and M cars on the
        road. Each bike has 2 tyres and each
        car has 4 tyres. Find the total
        number of tyres on the road.
      ======================================
    */
    int answer = (N * 2) + (M * 4);
    std::cout << answer << std::endl;
  }
  return 0;
}
