def solve():
    a, b, c = map(int, input().split())
    x = a + b + c

    if x % 3 != 0:
        print("NO")
        return

    print("NO" if b > x // 3 else "YES")

t = int(input())
for _ in range(t):
    solve()
