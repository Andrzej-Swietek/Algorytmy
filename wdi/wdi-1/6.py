def f(x):
    return x**x-2020


def bisekcja(lewy, prawy, epsilon):
    # Zalozenia: W przedziale [lewy, prawy] jest tylko jeden pierwiastek funkcji f(x)
    # Funkcja zwaraca miejsce zerowe funkcji f.

    # Zamieniamy granice jezeli trzeba
    if lewy > prawy:
        lewy, prawy = prawy, lewy  # Proste, prawda?

    epsilon = abs(epsilon)  # Tak na wszelki wypadek

    if f(lewy) * f(prawy) < 0:  # Jezeli jest m. zerowe w przedziale to liczymy

        pierwiastek = lewy  # Pierwsze przyblizenie pierwiastka na wypadek gdyby
        # od razu zaszedl warunek prawy-lewy < epsilon
        while (prawy - lewy) >= epsilon:
            # Polowa przedzialu jako kolejne przyblizenie pierwiastka
            pierwiastek = (prawy + lewy) / 2.0
            if f(lewy) * f(pierwiastek) < 0:  # m. zerowe jest w przedziale (lewy, pierwiastek)
                prawy = pierwiastek  # przesuwamy prawa granice przedzialu
            elif f(pierwiastek) * f(prawy) < 0:  # m. zerowe jest w przedziale (pierwiastek, prawy)
                lewy = pierwiastek  # przesuwamy lewa granice przedzialu
            else:  # Iloczyn sie wyzerowal, trafilismy w miejsce zerowe!
                break  # Przerywamy wiec petle bo nie ma sensu dalej liczyc

    elif f(lewy) == 0:  # A moze od razu trafilismy w pierwiastek? Sprawdzamy...
        pierwiastek = lewy

    elif f(prawy) == 0:
        pierwiastek = prawy

    else:  # Pierwiastka nie ma w przedziale albo jest ich wiecej niz jeden
        pierwiastek = "Blad - podany przedzial nie spelnia zalozen..."

    return pierwiastek


print(round(bisekcja(4,5,0.000001),6))