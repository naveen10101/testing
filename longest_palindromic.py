def longestPalindrome(s):
    if len(s) < 2:
         return s
    ret = ''
    dp = [[None] * len(s) for i in range(len(s))]
    for i in range(len(s)):
        for j in range(i+1):
            if i == j: dp[i][j] = True
            elif i == j+1: dp[i][j] = s[i] == s[j]
            else: dp[i][j] = (dp[i-1][j+1] and s[i] == s[j])
            if dp[i][j] and i - j + 1 > len(ret): ret = s[j:i+1]
    return ret
    
s=input('string')
ans=longestPalindrome(s)
print(ans)
