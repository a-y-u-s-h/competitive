#include <iomanip>
#include <iostream>

int main(int argc, char const *argv[]) {
  /*
    ======================================
      X is an integer - it represents requested amount.
      X should be a multiple of 5 for the transaction
      to proceed successfully.

      Y is a float with precision of 2, it represents
      the available balance, so it cannot be smaller
      than X + fee. If it is, we need to output Y.
    ======================================
  */
  int x;
  float y;
  float fee = 0.5;
  std::cin >> x >> y;

  /*
    ======================================
      For a transaction to be valid, the
      requested amount should be a multiple
      of 5 and the balance should be greater
      than the sum of requested amount and ATM fee.
      After checking this we calculate the
      final balance and output it, with precision of 2.
    ======================================
  */
  bool valid = (x % 5 == 0) && (y >= x + fee);
  if (valid) y = y - (x + fee);
  std::cout << std::fixed << std::setprecision(2) << y << std::endl;

  return 0;
}
