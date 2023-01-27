# cook your dish 
def solve(string,n):
    w=input()
    for i in w:
        if i not in string:
            print("No")
            return
    print("Yes")
    
string=input()
n=int(input())

while(n):
    solve(string,n)
    n-=1

