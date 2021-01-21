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


def prime(x):
    if x==2 or x==3:
        return True
    if x<2 or x%2==0 or x%3==0:
        return False
    i = 5
    while i*i <= x:
        if x%i==0:
            return False
        i+=2
        if x%i==0:
            return False
        i+=4

    return True


def remove(f, g):
    if f == g:
        f = f.next
        f.prev = None
    else:
        p = f
        while f != g:
            p = f
            f = f.next
        p.next = f.next
        if p.next is not None:
            f.next.prev = p


def remove_prime(f):
    if f is None:
        return f
    g = f
    while g.next is not None:
        if prime(g.value):
            remove(f, g)
        p = g
        g = g.next
        g.prev = p
    if prime(g.value):
        remove(f, g)

    return f


first = Node(17)
for i in range(1, 11):

    a = Node(i)
    a.next = first
    first = a

wypisz(first)
#increase(first)
#print(first.value)
wypisz(remove_prime(first))