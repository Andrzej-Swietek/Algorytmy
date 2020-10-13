"""
1 + 3 + 5 + ...  = n^2
np 9 = 1+3+5 => n=3 bo 3 wyrazy
"""
x = int(input())
odd = 1  # liczba nieprzysta zaczyna sie od 1
suma = 0
n=0 # wynik
while sume+odd <= x:
    # w kazdej iteracji sume zwiekszamy o nieparzysta
    suma += odd
    odd+=2 #nastepna nieparzesta jest za +2
    n+=1

print(n)