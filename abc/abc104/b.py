import re

print('AC' if re.match(r'^A[a-z]+C[a-z]+$', input()) else 'WA')
