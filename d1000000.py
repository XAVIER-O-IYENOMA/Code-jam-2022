def doit():
    n = int(input())
    dices = [int(x) for x in input().split()]
    maxNum = max(dices)
    memo = [0] * (maxNum+1)
    for i in range(n):
        memo[dices[i]] += 1
    result = 0
    left = 0
    for i in range(maxNum, 0, -1):
        left += memo[i]
        if left > 0:
            left -= 1
            result += 1
    return result

T = int(input())
for t in range(1, T + 1):
    print('Case #{}: {}'.format(t, doit()))
