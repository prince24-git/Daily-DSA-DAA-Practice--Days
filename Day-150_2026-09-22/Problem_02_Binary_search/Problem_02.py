"""Read n, a sorted list of n integers, and target; print its index or -1."""

def binary_search(values, target):
    left, right = 0, len(values) - 1
    while left <= right:
        mid = left + (right - left) // 2
        if values[mid] == target:
            return mid
        if values[mid] < target:
            left = mid + 1
        else:
            right = mid - 1
    return -1


def main():
    data = list(map(int, input().split()))
    n = data[0]
    values = data[1:1 + n]
    target = data[1 + n]
    print(binary_search(values, target))


if __name__ == "__main__":
    main()
