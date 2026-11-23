n = int(input())
values = list(map(int, input().split()))
target = int(input())

low, high = 0, n - 1
answer = -1
while low <= high:
    mid = low + (high - low) // 2
    if values[mid] == target:
        answer = mid
        break
    elif values[mid] < target:
        low = mid + 1
    else:
        high = mid - 1

print(answer)
