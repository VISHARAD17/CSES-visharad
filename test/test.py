n = int(input())
x = [int(i) for i in input().split()]
l = [int(i) for i in input().split()]
r = [int(i) for i in input().split()]

def function(n, x, l, r):
    Maxans = []
    
    for i in range(n):
        ans = 0
        low = l[i]
        high = r[i]
        ele = x[i]
        for y in range(low, high+1):
            ans = max(ele ^ y, ans)
        Maxans.append(ans)
    
    return Maxans

print(function(n, x, l, r))
