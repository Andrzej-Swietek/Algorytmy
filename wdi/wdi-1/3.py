def f(n):
    if n==1 or n==2:
        return 1
    else:
        return f(n-1)+f(n-2)


if __name__ == "__main__":
    sumaZdana = int(input("suma: "))
    v = [1, 1]  # VECTOR
    i=1

    prefix = [0, 1, 2]
    while v[i]+v[i-1] <= sumaZdana:
        v.append(v[i]+v[i-1])
        i+=1
        prefix.append(v[i]+prefix[len(prefix)-1])

    k=1
    g=0 # flaga do przerwania obu pętli
    while k<len(prefix) and g==0:
        j = 0
        while j<k and g==0:
            if prefix[k]-prefix[j] == sumaZdana:
                print("∀ x∈ℕ+ ∃ spojny podciag o sume {}".format(sumaZdana))
                g+=1
            j+=1
        k+=1


    if g==0:
        print("nie istnieje spojny podciag o sume {}".format(sumaZdana))

