x = int(input())
v =[1,1]
i=1

# Wypełniamy tablice
while v[i] * v[i-1] <= x:
    v.append(v[i] + v[i-1])
    i+=1


g=0
k=1
while k<len(v):
    if v[k] * v[k - 1] == x:
        print("TRUE")
        g=1
        break
    k+=1
if g==0: print("FALSE")