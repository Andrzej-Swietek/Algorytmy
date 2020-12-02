import time

start_time = time.time()

def pierwsza(x):
    """
            Test pierwszosci
                do sqrt(x)
                1 false 2,3 true
                jeżeli wykluczamy parzyste mozemy skakac co 2
    """
    if x == 2 or x == 3:
        return True
    elif x < 2 or x%2==0 or x%3==0:
        return False

    i = 5
    while i <= x**(1/2):
        # Jezeli x%5 zwracamy fałsz i skaczemy o 2 do przodu np 5%5==0
        if x % i ==0:
            return False
        i+=2
        # i odrazu sprawdzamy od 7
        if x % i ==0:
            return False
        i+=4

    return True


# x=int(input())
# print(pierwsza(x))

for i in range(0,10000000):
    pierwsza(i)
r=time.time()-start_time
print(str(r))

# wynik dla 1 00 000 - 0.11s
# wynik dla 1 000 000 - 0.32s
# wynik dla 10 000 00 - 3.3s