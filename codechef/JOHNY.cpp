#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    long long N, K;
    std::cin >> N;

    std::vector<long long> A;

    for (int i = 0; i < N; i += 1) {
      long long Ai;
      std::cin >> Ai;
      A.push_back(Ai);
    }

    std::cin >> K;

    /*
      ======================================
        Vlad enjoys listening to music. He
        lives in Sam's Town. A few days ago
        he had a birthday, so his parents gave
        him a gift: MP3-player! Vlad was the
        happiest man in the world! Now he can
        listen his favorite songs whenever he wants!

        Vlad built up his own playlist. The playlist
        consists of N songs, each has a unique
        positive integer length. Vlad likes all
        the songs from his playlist, but there
        is a song, which he likes more than the
        others. It's named "Uncle Johny".

        After creation of the playlist, Vlad
        decided to sort the songs in increasing
        order of their lengths. For example, if the
        lengths of the songs in playlist was {1, 3, 5, 2, 4}
        after sorting it becomes {1, 2, 3, 4, 5}.
        Before the sorting, "Uncle Johny" was on
        K-th position (1-indexing is assumed for
        the playlist) in the playlist.

        Vlad needs your help! He gives you all
        the information of his playlist. Your
        task is to find the position of "Uncle Johny"
        in the sorted playlist.
      ======================================
    */
    long long value = A[K - 1];
    std::sort(std::begin(A), std::end(A));
    auto answer = (std::find(std::begin(A), std::end(A), value) - std::begin(A)) + 1;
    std::cout << answer << std::endl;
  }
  return 0;
}
