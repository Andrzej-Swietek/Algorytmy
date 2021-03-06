//
// Created by Andrzej Świętek on 3/6/21.
//

/*
 *

    Problem znajdowania najdłuższego wspólnego podciągu:
    S1 = "alamakota"
          *  ***
    S2 = "nabmaxk"
           * ** *

    Dane są dwa słowa S1 i S2. |S1|, |S2| <= 1000 liter.
    Cel: długość najdłuższego wspólnego podciągu.

    wynik[i][j] = wynik dla słów S1[1]..S1[i] oraz S2[1]..S2[j].

        a l a m a k o t a
      n 0 0 0 0 0 0 0 0 0
      a 1 1 1 1 1 1 1 1 1
      b 1 1 1 1 1 1 1 1 1
      m 1 1 1 2 2 2 2 2 2
      a 1 1 2 2 3 3 3 3 3
      x 1 1 2 2 3 3 3 3 3
      k 1 1 2 2 3 4 4 4 4

     S1 xxxxA
     S2 xxB

    if S1[i] == S2[j]: // jesli takie same to 1( z racji ze znalezlismy kolejny element) + to co po skosie czyli do tej pory najdluzszy podciag
        wynik[i][j] = 1 + wynik[i-1][j-1]
    else:
        wynik[i][j] = max(wynik[i-1][j], wynik[i][j-1])

    Czas: O(|S1| * |S2|)

 */