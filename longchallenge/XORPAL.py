T = int(input())
for i in range(T):
    n = int(input())
    S = list(input())
    o = S.count('1')
    z = S.count('0')
    if n % 2 != 0:
        print("Yes")
    else:
        if o == z:
            print("Yes")
        elif o == n:
            print("Yes")
        elif z == n:
            print("Yes")
        elif o % 2 == 0 and z % 2 == 0:
            print("Yes")
        else:
            print("No")
            
