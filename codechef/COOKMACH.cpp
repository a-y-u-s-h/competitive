#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int A, B;
    std::cin >> A >> B;
    /*
      ======================================
        Chef is on a vacation these days,
        so his friend Chefza is trying to
        solve Chef's everyday tasks.

        Today's task is to make a sweet roll.
        Rolls are made by a newly invented
        cooking machine. The machine is pretty
        universal - it can make lots of dishes
        and Chefza is thrilled about this.

        To make a roll, Chefza has to set all
        the settings to specified integer values.
        There are lots of settings, each of them
        set to some initial value. The machine is
        pretty complex and there is a lot of
        cooking to be done today, so Chefza has
        decided to use only two quick ways to
        change the settings. In a unit of time,
        he can pick one setting (let's say its
        current value is v) and change it in
        one of the following ways.

        1) If v is even, change this setting to v/2.
           If v is odd, change it to (v − 1)/2.

        2) Change setting to 2 × v

        The receipt is given as a list of
        integer values the settings should be
        set to. It is guaranteed that each
        destination setting can be represented
        as an integer power of 2.

        Since Chefza has just changed his profession,
        he has a lot of other things to do.
        Please help him find the minimum number
        of operations needed to set up a
        particular setting of the machine.
        You can prove that it can be
        done in finite time.
      ======================================
    */

    /*
      ======================================
        The fastest way is the following:
        Use thee first step repeatedly until
        the number becomes a power of two.
        If the current number is larger than B,
        use the first step even further until
        number becomes B. Otherwise, use the
        second step repeatedly until the number
        becoems B. The number of steps this
        takes is the answer.

        In fact, the operations are simply the
        Bitwise logical shift operations!
        In other words, the first operation
        is simply a single right shift,
        and the second operation is a
        single left shift.
      ======================================
    */

    int steps = 0;
    while ((A & -A) != A) { A >>= 1, steps++; }
    while (A < B)         { A <<= 1, steps++; }
    while (A > B)         { A >>= 1, steps++; }
    std::cout << steps << std::endl;
  }
  return 0;
}
