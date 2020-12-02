def pierwsza(x):
    i=2
    if x==1: return False
    while i**2 <= x:
        if x%i == 0: return False
        i+=1
    return True



x=int(input())
print(pierwsza(x))
