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


def remove(f, g):
    if f == g:
        f = f.next
        if f is not None:
            f.prev = None
        return f

    p = f
    q = f
    while q != g:
        p = q
        q = q.next
    p.next = q.next
    if p.next is not None:
        q.next.prev = p

    return f


def zad11(f, key):
    if f is None:
        f = Node(key)
        return f

    g = f
    while g.next is not None:
        p = g
        if g.value == key:
            return remove(f, g)
        g = g.next
        g.prev = p
    if g.value == key:
        return remove(f, g)
    g.next = Node(key)
    return f





first3 = Node(14)
first1 = Node(25)
first2 = Node(6)
for i in range(1, 9):

    a = Node(i+8)
    a.next = first1
    first1 = a
for i in range(1, 6):

    a = Node(i)
    a.next = first2
    first2 = a

wypisz(first1)
#wypisz(first2)
#increase(first)
#print(first.value)
wypisz(zad11(first1, 14))