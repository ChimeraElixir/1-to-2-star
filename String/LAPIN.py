# cook your dish here

def solve():
    s=input()
    n=len(s)
    
    if(n%2==0):
        s1=s[0:n//2]
        s2=s[n//2:n]
    else:
        s1=s[0:n//2]
        s2=s[n//2+1:n]
    
    r1=''.join(sorted(s1))
    r2=''.join(sorted(s2))
    
    if r1==r2:
        print("YES")
    else:
        print("NO")

t=int(input())
for _ in range(t):
    solve()