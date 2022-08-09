N = int(input())
A = list(map(int, input().split()))
B, C = map(int, input().split())
ans = N

for k in range(N):
    A[k] -= B

for k in range(N):
    if A[k] <= 0:
        continue
    mok = int(A[k] / C)
    if mok * C >= A[k]:
        ans += mok
    else:
        ans += mok + 1
print(ans)