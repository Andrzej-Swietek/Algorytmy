" LICZBY DWU-TRZY-PIATKOWE - Czynnikami pierwszymi musza byc 2 / 3 / 5 "

end = None

n = int(input(">> "))

l = 0 # licznik
a2 = 1
while a2 <= n:
    a3 = a2
    while a3 <= n:
        a5 = a3
        while a5 <= n:
            l += 1
            a5 *= 5
        end
        a3 *= 3
    end
    a2 *= 2
end

print(l)

# 31 -> 18