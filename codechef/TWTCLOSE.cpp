#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int N, K;
  std::cin >> N >> K;

  /*
    ======================================
      N is number of tweets on the page,
      ranging from 1 to N. And K is number
      of clicks in the following formats:

      1. CLICK X (X is tweet number (1 <= X <= N))
      2. CLOSEALL

      CLOSEALL: Closes all tweets.
      CLICK X: Toggles the state of Xth tweet.

      Initially all tweets are closed.
      We need to find the total number of
      still open tweets just after each click.
    ======================================
  */

  std::vector<bool> tweets;
  for (int n = 0; n < N; n += 1) {
    /*
      ======================================
        Our tweets are now a vector of booleans,
        tweet number is (its index + 1)
        and the value at that index denotes
        whether it's opened or closed. True, if it's
        opened, false if it's closed.
      ======================================
    */
    bool tweet = false;
    tweets.push_back(tweet);
  }

  for (int k = 0; k < K; k += 1) {
    std::string command;
    std::cin >> command;

    /*
      ======================================
        If the command is a click command,
        we change the state of that particular
        tweet (based on tweet number which is
        the extra input we need to process in this
        case).
      ======================================
    */
    if (command == "CLICK") {
      int number;
      std::cin >> number;
      int index = number - 1;
      tweets[index] = !tweets[index];
    }

    /*
      ======================================
        If the command is CLOSEALL command,
        then we simply set all tweets to closed (false).
        After doing all this we return the length
        of tweets after the operation.
      ======================================
    */
    if (command == "CLOSEALL") {
      for (int i = 0; i < tweets.size(); i += 1) {
        tweets[i] = false;
      }
    }

    /*
      ======================================
        We now remove all tweets that
        are closed and then print out the size
        of array that has only open elements.
      ======================================
    */
    int answer = std::count(std::begin(tweets), std::end(tweets), true);
    std::cout << answer << std::endl;
  }
  return 0;
}
