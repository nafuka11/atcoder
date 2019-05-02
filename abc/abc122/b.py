import re

pattern = '[^ACGT]'
S = input()
ans = max(map(len, re.split(pattern, S)))
print(ans)
