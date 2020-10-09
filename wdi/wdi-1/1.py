def f(n):
    if n==1 or n==2:
        return 1
    else:
        return f(n-1)+f(n-2)


n=1
while f(n)<1000000:
    print(f(n))
    n+=1