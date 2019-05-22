N = int(input())


def dfs(s):
    if s != '' and int(s) > N:
        return 0
    ans = int(all([s.count(c) > 0 for c in '753']))
    for c in '753':
        ans += dfs(s + c)
    return ans


print(dfs(''))
