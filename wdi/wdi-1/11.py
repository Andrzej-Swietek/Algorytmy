def suma_dzilnikow(number):
    suma = 1
    i=2
    while i**2 <= number:
        if number % i == 0:
            suma += i
            if int(number/i) != i: # czy sie nie powtorzy
                suma += int(number/i)
        i+=1
    return suma


k=2 # zaczynamy od 2
n=20000*5 # ile liczymy
v = [0]*n
while k<n:
    if v[k] != 0:
        k+=1
    if suma_dzilnikow(suma_dzilnikow(k))==k and suma_dzilnikow(k) !=k: # dla danego k liczymy sume dzielnikow i z tej liczby liczymy jeszcze raz sume dzielnikow i sprawdzamy czy jest rowna k - zalozenie liczb zaprzyjaznionych i suma_dzilnikow(k) !=k bo to nie moga byc liczby doskonałe
        print(k,suma_dzilnikow(k))
        v[suma_dzilnikow(k)]+=1
    k+=1


