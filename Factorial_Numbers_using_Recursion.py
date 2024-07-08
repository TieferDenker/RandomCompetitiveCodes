def func(n):
    return f([1],n)

def f(a,n):
    if a[-1]<=n:
        a.append(a[-1]*(len(a)+1))
        return f(a,n)
    else:
        return (a.pop())

n=int(input())
v=func(n)
print(v)