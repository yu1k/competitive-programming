import math

a = int(input())
b = int(input())

diff = abs(a - b)
result = min(diff, 10 - diff)

print(result)