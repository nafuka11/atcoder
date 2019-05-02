n = int(input())
people = [int(input()) for _ in range(5)]

ans = -(-n // people[0])
for i in range(1, 5):
    if people[i] < people[i - 1]:
        ans = max(ans, -(-n // people[i]))
    ans += 1

print(ans)
