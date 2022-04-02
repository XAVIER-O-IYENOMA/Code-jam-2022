n=int(input())

for _ in range(n):
    r,c=list(map(int,input().split()))
    print("Case #",_+1,":",sep='')
    print("..",end='')
    for i in range(c-1):
        print("+-",end='')
    print("+")
    print("..",end='')
    for i in range(c-1):
        print("|.",end='')
    print("|")
    for j in range(r):
        for k in range(c):
            print("+-",end='')
        print("+")
        if j<r-1:
            for k in range(c):
                print("|.",end='')
            print("|")
