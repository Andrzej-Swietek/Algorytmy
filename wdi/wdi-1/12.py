# ndd(xyz) = nwd(nwd(x,y), z)
def nwd(x,y):
    tmp=0
    while y!=0:
        tmp = y
        y = x % y
        x = tmp
    return x


x, y, z= [int(x) for x in input("x y z: ").split()]

print( nwd( nwd(x,y),z ) )