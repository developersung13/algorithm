N = int(input())
meetings = []
ans = []
flag = 0

for k in range(N):
    i, s, e = map(int, input().split())
    meetings.append((i, s, e))
    
meetings = sorted(meetings, key=lambda x: (x[2], x[1]))
    
for m in meetings:
    i, s, e = m[0], m[1], m[2]
    if s >= flag:
        ans.append(i)
        flag = e

print(len(ans))
for k in ans:
    print(k, end=' ')