class Node:
    def __init__(self, value):
        self.value = value
        self.next = None


def zad23(start):
    if start is None:
        return 0

    p1 = start
    p2 = start.next
    while p1 != p2:
        p1 = p1.next
        p2 = p2.next.next

    #p1 = p2
    ile = 1
    p1 = p1.next
    while p1 != p2:
        p1 = p1.next
        ile += 1

    return ile