def nwd(x,y):
    tmp=0
    while y!=0:
        tmp = y
        y = x % y
        x = tmp
    return x


def nww(x,y):
    return x*int((y/nwd(x,y)))

x, y, z= [int(x) for x in input("x y z: ").split()]

print( nww( nww(x,y),z ) )