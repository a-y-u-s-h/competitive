#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    long long N, M;
    std::cin >> N >> M;
    std::vector<long long> P;
    for (long long n = 0; n < N; n++) { long long Pi; std::cin >> Pi; P.push_back(Pi); }
    /*
      ======================================
        Andrew likes meatballs very much. He
        has N plates of meatballs, here the
        i-th plate contains Pi meatballs. You
        need to find the minimal number of
        plates Andrew needs to take to his
        trip to Las Vegas, if he wants to eat
        there at least M meatballs. Note that
        each plate is already packed, i.e. he
        cannot change the amount of meatballs
        on any plate.
      ======================================
    */
    long long plates = 0, meatballs = 0;
    std::sort(std::begin(P), std::end(P), std::greater<long long>());
    for (auto Pi = std::begin(P); Pi != std::end(P); Pi += 1) { meatballs += *Pi; plates++; if (meatballs >= M) break; }
    long long answer = meatballs < M ? -1 : plates;
    std::cout << answer << std::endl;

  }
  return 0;
}
