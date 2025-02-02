#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int N; std::string S;
    std::cin >> N;
    std::cin >> S;
    /*
      ======================================
        Alice and Bob are playing a game of
        Blobby Volley. In this game, in each
        turn, one player is the server and
        the other player is the receiver.
        Initially, Alice is the server,
        and Bob is the receiver.

        If the server wins the point in this
        turn, their score increases by 1,
        and they remain as the server for
        the next turn. But if the receiver
        wins the point in this turn,
        their score does not increase. But
        they become the server in the next turn.

        In other words, your score increases
        only when you win a point when you
        are the server. Please see the Sample
        Inputs and Explanation for more
        detailed explanation.

        They start with a score of 0 each,
        and play N turns. The winner of each
        of those hands is given to you as a
        string consisting of 'A's and 'B's.
        'A' denoting that Alice won that point,
        and 'B' denoting that Bob won that point.
        Your job is the find the score of
        both of them after the N turns.
      ======================================
    */
    char server = 'A';
    std::map<char, int> points;
    for (auto Si = std::begin(S); Si != std::end(S); Si += 1) { if (*Si == server) { points[server]++; } else { server == 'A' ? server = 'B' : server = 'A'; }  }
    std::cout << points['A'] << " " << points['B'] << std::endl;
  }
  return 0;
}
