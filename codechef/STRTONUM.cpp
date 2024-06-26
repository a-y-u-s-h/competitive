long long stringToNumber(const string& str) {
  /*
    ======================================
      You're given a string that represents
      a positive number. Your task is to
      write a program that converts this
      string into its numerical equivalent
      without using any in-built parsing,
      conversion libraries, or direct
      type-casting methods. The string will
      not contain any leading zeroes, decimals
      or any non-numeric characters. Complete
      the function.
    ======================================
  */
  long long multiplier = 1; long long number = 0;
  for (auto Si = std::rbegin(str); Si != std::rend(str); Si += 1) { number += (*Si - '0') * multiplier; multiplier *= 10; }
  return number;
}
