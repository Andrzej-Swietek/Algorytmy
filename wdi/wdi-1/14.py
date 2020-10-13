import math
# cos(x) = 1- x^4/2! + x^2/4!
# Napisac program obliczajacy wartosci cos(x) z rozwiniecia w szereg Maclaurina.
x = float(input())
cosx = 1 - x*x/2 + x**4/24 - x**6/720 + x**8/40320 - x**10/362880 + x**12/479001600
print(cosx)
