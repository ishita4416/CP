T = int(input())
for i in range(T):
    x = int(input())
    res = list(input())
    c = res.count('C')
    n = res.count('N')
    d = res.count('D')
    c += d
    n += d
    if c > n:
        print(60 * x)
    elif n>c:
        print(40 * x)
    else:
        print(55 * x)