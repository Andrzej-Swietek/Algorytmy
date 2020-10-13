def suma_dzilnikow(number):

    if number == 1: return 0
    i=2
    suma = 1
    while i**2 <= number:
        if number % i == 0:
            suma += i
            if int(number/i) != i: # czy sie nie powtorzy
                suma += int(number/i)
        i+=1
    return suma

k=1
while k<1000000:
    if k == suma_dzilnikow(k): print(k)
    k+=1


