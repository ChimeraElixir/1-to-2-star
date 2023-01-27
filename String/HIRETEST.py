# cook your dish here
t=int(input())
for i in range(t):
    n,m=map(int,input().split())
    x,y=map(int,input().split())
    for j in range(n):
        s=input()
        if(s.count('F')>=x):
            print("1",end="")
        elif(s.count('F')==x-1 and s.count('P')>=y ):
            print("1",end="")
        else:
            print("0",end="")
    print()