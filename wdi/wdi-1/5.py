""" Metoda wyznaczania pierwiastka kwadratowego Newtona """
import math

def newtonSquareRoot(x):
    eps = 0.00000000001
    # boki prostokąta a i x
    a=1.0
    b=x
    # dopouki a+b >= eps
    while math.fabs(a-b) >= eps:
        a = (a+b)/2.0 # a = średnia arytm bów
        b = x/a # drugi bok to x/a
    return a

x = float(input())
print(round(newtonSquareRoot(x),6))
