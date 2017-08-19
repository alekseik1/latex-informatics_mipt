N = len(s)
z = [0]
left = right = 0
for i in range(1, N):
    x = min(z[i-left], right - i + 1) if i <= right else 0
    while i+x < N and s[x] == s[i+x]:
        x += 1
    z[i] = x
    if i + x - 1 > right:
        left, right = i, i + x - 1
