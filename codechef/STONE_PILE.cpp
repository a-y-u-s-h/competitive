#include <bits/stdc++.h>

void move (char operation, std::deque<long long>& array) {
  if (array.size() > 1) {
    if (operation == '1') { auto element = array.front(); array.pop_front(); array.push_back(element); }
    if (operation == '2') { array.pop_front(); }
  }
}

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    long long N;
    std::cin >> N;
    std::deque<long long> A;
    for (long long n = 0; n < N; n++) { long long Ai; std::cin >> Ai; A.push_back(Ai); }
    /*
      ======================================
        Aman and Akshat are trying to solve
        a task given to them by their teacher.
        They are given a pile of stones
        containing N stones with an integer
        written on each of them. There are two
        different kinds of moves that can be
        performed on the pile :

        1) Player will remove a stone from the `top`
           of the pile and put it back on the `bottom`
           of the pile.

        2) Player will remove a stone from the `top`
           of the pile and `throw` it away.

        Aman in his turn will perform move 1 once
        and then move 2 once. Akshat in his turn
        will perform move 1 twice and then move 2
        once. They will stop making moves when
        there is only 1 stone left in the pile.

        Both of them gets turn alternatively with
        Aman going first. Find the person
        performing the last move and the number
        written on the last stone left in the pile.
      ======================================
    */


    long long turn = 0;

    while (A.size() > 1) {
      if (turn % 2 == 0) { move('1', A); move('2', A); }
      if (turn % 2 == 1) { move('1', A); move('1', A); move('2', A); }
      turn++;
    }

    std::cout << (turn % 2 != 0) << " " << A.back() << std::endl;
  }
  return 0;
}
