#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    std::string S;
    std::cin >> S;
    /*
      ======================================
        There are N students. They sit in
        a line in during their lectures.

        One day Chef was late to class. As
        a result, some of the students have
        formed pairs and are talking to each
        other, while the others are busy
        studying. This information is given
        to you by a string s of length n,
        consisting of characters '*', <' and '>',
        where '*' denotes that the student is
        studying, '>' denotes that the
        corresponding student is talking to
        the student to the right, and '<'
        denotes that the corresponding student
        is talking to the student to the left.

        For example, consider a sample configuration
        of students - *><*. Here students numbered
        1 and 4 are busy studying, while the student
        2 and 3 are talking to each other. In this
        example, ><><, student 1 and 2 are talking
        to each other, and 3 and 4 are also talking
        to each other. You are guaranteed that the
        given input is a valid configuration, i.e.
        <> can not be a valid string s, as here
        student 1 is shown to be talking to left,
        but there is no student to the left. Same
        is the case for right. Similarly, >><< is
        also not a valid configuration, as students
        2 and 3 are talking to each other, so
        student 1 won't be able to talk to student 2.

        When the students see their teacher coming,
        those who were talking get afraid and immediately
        turn around, i.e. students talking to left
        have now turned to the right, and the one
        talking to right have turned to the left.
        When Chef sees two students facing each other,
        he will assume that they were talking.
        A student who is busy studying will continue
        doing so. Chef will call each pair of
        students who were talking and punish them.
        Can you find out how many pairs of students
        will get punished?

        For example, in case *><*, when students see
        Chef, their new configuration will be *<>*.
        Chef sees that no students are talking to
        each other. So no one is punished. While
        in case ><><, the new configuration of
        students will be <><>, Chef sees that
        student 2 and 3 are talking to each other
        and they will be punished.

      ======================================
    */
    S = std::regex_replace(S, std::regex("><"), "<>");

    int answer = 0;

    for (int i = 0; i < S.size(); i += 1) {
      std::string slice (std::begin(S) + i, std::begin(S) + i + 2);
      if (slice == "><") answer++;
    }

    std::cout << answer << std::endl;

  }
  return 0;
}
