def most_frequent(v):
    counter = 0
    num = 0
    if len(v)>=1:
        num = v[0]

    if len(v) >= 2:
        for i in v:
            curr_frequency = v.count(i)
            if (curr_frequency > counter):
                counter = curr_frequency
                num = i

    return num 



if __name__ == "__main__":
    n = int(input()) # iloc kolorow na starej fladze
    arr = [] # parzyste
    v = []   # nieparzyste 
    for i in range(0, n):
        if i%2==0:
            arr.append(int(input()))
        else:
            v.append(int(input()))

    print(arr)
    print(v)

    freq_a = most_frequent(arr)
    freq_v = most_frequent(v)
    ile_a = arr.count(freq_a)
    ile_v = v.count(freq_v)

    if freq_v != freq_a:
        out = n - ile_a - ile_v
    else:
        list( filter(lambda a: a!= freq_a, arr) )
        if not arr.empty():
            freq_a1 = most_frequent(arr)
            ile_a1 = arr.count(freq_a1)
        else:
            ile_a1 = 0

        list( filter(lambda a: a!= freq_v, v) )
        if not v.empty():
            freq_v1 = most_frequent(v)
            ile_v1 = arr.count(freq_v1)
        else:
            ile_v1 = 0

        # out = min( (t-ile_a+s-ile_v1, t-ile_a1+s-ile_v ) )
        out = n - max(ile_a + ile_v1, ile_a1 + ile_v)

    print(out)


