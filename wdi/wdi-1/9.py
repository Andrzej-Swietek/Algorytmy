def podzielniki(x):
    v = [1,x] # vektor podzielnikow zawsze 1 i sama liczba
    i = 2
    if x == 1: return 1
    while i*i <= x:
        if x%i==0:
            v.append(i)
            if x != i**2:
                v.append(int(x/i))
        i+=1

    v.sort()
    return v


x = int(input())
print(podzielniki(x))

