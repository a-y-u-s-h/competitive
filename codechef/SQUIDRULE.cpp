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
        Squid game has become a blockbuster
        hit and the frontman is now finding
        it difficult to accomodate all the
        participants in Squid Game 2.0. So,
        he decided that he will allow only
        those participants who could solve
        the following problem.

        There are a total of N players who are
        competing in the Squid Game, numbered
        from 1 to N. When the i-th player
        gets eliminated from the game, Ai amount
        of money is added to the prize pool.
        The game is played until N-1 players
        get eliminated, and the only player
        left is declared as the winner.
        The winner gets all the money present
        in the prize pool.

        You're given an array A consisting
        of N elements, where Ai denotes the
        prize money added to the prize pool
        when the i-th player gets eliminated
        from the game. Find the maximum prize
        that the winner can get, given that
        you can choose any player to be the winner.
      ======================================
    */
    int Sa = std::accumulate(std::begin(A), std::end(A), 0);
    int Ma = *std::min_element(std::begin(A), std::end(A));
    int answer = Sa - Ma;
    std::cout << answer << std::endl;
  }
  return 0;
}
