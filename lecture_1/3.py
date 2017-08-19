N = len(s)
pi = [0]*N
for i in range(1, N):
    for k in range(i+1):
        if s[0:k] == s[i - k + 1:i + 1]:
            pi[i] = k
