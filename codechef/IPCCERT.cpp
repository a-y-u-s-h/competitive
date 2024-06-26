#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int N, M, K;
  std::cin >> N >> M >> K;

  std::vector<std::pair<std::vector<int>, int>> S;

  for (int i = 0; i < N; i += 1) {
    std::pair <std::vector<int>, int> Si;
    std::vector<int> Li;
    for (int j = 0; j < K; j += 1) {
      int Lij;
      std::cin >> Lij;
      Li.push_back(Lij);
    }

    int Qi;
    std::cin >> Qi;


    Si.first  = Li;
    Si.second = Qi;
    S.push_back(Si);
  }

  /*
    ======================================
      There were N students (1..N) participating
      in a contest and they watched a total of
      K lectures (1..K). For each student i,
      and each lecture j, the ith student
      watched the jth lecture for Ti,j minutes.

      Additionally, for each student i, we know that
      this student asked a particular question Q,
      Qi times. The criteria for getting a
      certificate is that a student must have watched
      at least M minutes of lectures in total and they
      must have asked the question Q no more
      than 10 times. Find out how may participants
      are eligible for the certificate.
    ======================================
  */

  auto answer = std::count_if(std::begin(S), std::end(S), [M](auto const &Si) { return std::accumulate(std::begin(Si.first), std::end(Si.first), 0) >= M && Si.second <= 10; });
  std::cout << answer << std::endl;

  return 0;
}
