class Node:
    def __init__(self, value):
        self.value = value
        self.next = None
        self.prev = None


def wypisz(first):
    while first is not None:
        print(first.value, end=" ")
        first = first.next
    print()


def add(f1, f2):
    suma = 0
    licznik1 = 1
    licznik2 = 1
    g = f1
    g1 = f2
    while g.next is not None:
        p = g
        g = g.next
        g.prev = p
    while g1.next is not None:
        p = g1
        g1 = g1.next
        g1.prev = p
    while g.prev is not None:
        suma += licznik1*g.value
        g = g.prev
        licznik1 *= 10
    suma += licznik1 * g.value
    while g1.prev is not None:
        suma += licznik2*g1.value
        g1 = g1.prev
        licznik2 *= 10
    suma += licznik2 * g1.value
    c = suma
    ile = 0
    print(suma)
    while c > 0:
        c //= 10
        ile += 1
    print(ile)
    f = Node(0)
    i = 1
    g = f
    p = f
    while i < ile:
        p = g
        g.next = Node(0)
        g = g.next
        g.prev = p
        i += 1
    while g.prev is not None:
        g.value = suma % 10
        suma //= 10
        g = g.prev
    g.value = suma
    return f



first1 = Node(9)
first2 = Node(6)
for i in range(1, 9):

    a = Node(i)
    a.next = first1
    first1 = a
for i in range(1, 6):

    a = Node(i)
    a.next = first2
    first2 = a

wypisz(first1)
wypisz(first2)
wypisz(add(first1, first2))