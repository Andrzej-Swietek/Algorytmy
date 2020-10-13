"""
Nieskonczony iloczyn sqrt(0.5)*sqrt(0.5 + 0.5 *sqrt(0.5)) * sqrt(0.5 + 0.5 * sqrt(0.5 + 0.5 *
sqrt(0.5)))  ... ma wartosc 2/. Napisz program korzystajacy z tej zaleznosci i wyznaczajacy wartosc .
"""

def f(x):
    if x==1: return 1/2
    else: return f(1) + (1/2)*f(x-1)**(1/2)

wynik = f(1)
n=2
while n<20:
    wynik *= f(n)
    n+=1
wynik **=(1/2)

print(2/wynik)
