class Node:
    def init(self, value):
        self.value = value
        self.next = None
        self.prev = None


def wypisz(first):
    while first is not None:
        print(first.value, end=" ")
        first = first.next
    print()


def increase(f):
    g = f
    while g.next is not None:
        p = g
        g = g.next
        g.prev = p
    g.value += 1
    if g.value == 10:
        g.value = 0
        k = True
        while k and g.prev is not None:
            g = g.prev
            g.value += 1
            if g.value < 10:
                k = False
            else:
                g.value = 0
        if g.value == 0:
            g.prev = Node(1)
            g.prev.next = f
            f = g.prev

    return f


first = Node(9)
for i in range(1, 11):

    a = Node(9)
    a.next = first
    first = a

wypisz(first)
wypisz(increase(first))

