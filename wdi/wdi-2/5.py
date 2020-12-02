" Rozwiązanie z maskami bitowymi liczby "

n = int(input())
l = 0 # liczba podzielnych przez 7 - wynik
m = n
c = 0
v = []

# ile cyfr ma liczba
while m>0:
    c+=1
    m//=10


for i in range(1,2**c):
     m = n # do dzielenia przez 10
     i2 = i
     gen = 0  # generowana liczba 5 11 15 itd
     mnoznik = 1 # 1 10 100 1000
     for j in range(c):
         if i2 % 2 ==1: # ostatni bit jest jedynka
             gen += m%10 * mnoznik
             mnoznik *= 10
         m //= 10;
         i2 //= 2
     v.append(gen)
     if gen % 7 == 0:
         l+=1

print(l)
print(v)

# 2315