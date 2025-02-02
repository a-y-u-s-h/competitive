#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int R;
  std::cin >> R;
  for (int r = 0 ; r < R; r += 1) {
    int L; std::string S;
    std::cin >> L;
    std::cin >> S;
    /*
      ======================================
        The annual snake festival is upon us,
        and all the snakes of the kingdom have
        gathered to participate in the procession.
        Chef has been tasked with reporting on
        the procession, and for this he decides
        to first keep track of all the snakes.

        When he sees a snake first, it'll be its
        Head, and hence he will mark a 'H'. The
        snakes are long, and when he sees the snake
        finally slither away, he'll mark a 'T' to
        denote its tail. In the time in between,
        when the snake is moving past him, or the
        time between one snake and the next snake,
        he marks with '.'s.

        Because the snakes come in a procession, and
        one by one, a valid report would be something
        like "..H..T...HTH....T.", or "...", or
        "HT", whereas "T...H..H.T", "H..T..H",
        "H..H..T..T" would be invalid reports
        (See explanations at the bottom).

        Formally, a snake is represented by a 'H'
        followed by some (possibly zero) '.'s, and
        then a 'T'. A valid report is one such that
        it begins with a (possibly zero length) string
        of '.'s, and then some (possibly zero) snakes
        between which there can be some '.'s, and
        then finally ends with some (possibly zero) '.'s.

        Chef had binged on the festival food
        and had been very drowsy. So his report
        might be invalid. You need to help him
        find out if his report is valid or not.
      ======================================
    */
    int Ch = std::count(std::begin(S), std::end(S), 'H');
    int Ct = std::count(std::begin(S), std::end(S), 'T');
    int Cd = std::count(std::begin(S), std::end(S), '.');

    if (Ch != Ct)       { std::cout << "Invalid" << std::endl; continue; }
    if (Cd == S.size()) { std::cout << "Valid"   << std::endl; continue; }

    S = std::regex_replace(S, std::regex("[.]"), "");
    std::regex expression ("HT"); auto HT = std::distance(std::sregex_iterator(std::begin(S), std::end(S), expression), std::sregex_iterator());
    if (HT == S.size() / 2) { std::cout << "Valid" << std::endl; } else { std::cout << "Invalid" << std::endl; }
  }
  return 0;
}
