#include <bits/stdc++.h>

bool primality (int N) {
  for (int i = 2; i < N; i += 1) { if (N <= 2 || N % i == 0) return false; }
  return true;
}

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int x, y;
    std::cin >> x >> y;
    /*
      ======================================
        Farmer Feb has three fields with
        potatoes planted in them. He harvested
        x potatoes from the first field, y
        potatoes from the second field and is
        yet to harvest potatoes from the third
        field. Feb is very superstitious and
        believes that if the sum of potatoes
        he harvests from the three fields is
        a prime number, he'll make a huge profit.
        Please help him by calculating for him
        the minimum number of potatoes that if
        harvested from the third field will make
        the sum of potatoes prime. At least one
        potato should be harvested from the third
        field.

        x + y + z = prime
        z = prime - (x + y)

        x, y are given, but we don't know the prime
        number, so we can start by increasing (x + y)
        in a loop, until we encounter our first
        prime number (check for primality),
        and then break the loop and output the answer.
      ======================================
    */

    int answer = 1;
    while ( !primality(x + y + answer) ) { answer++; }
    std::cout << answer << std::endl;
  }
  return 0;
}
