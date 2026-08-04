"""Read n, n integers, and target; print the first matching pair of indices."""

def two_sum(values, target):
    for i in range(len(values)):
        for j in range(i + 1, len(values)):
            if values[i] + values[j] == target:
                return i, j
    return -1, -1


def main():
    data = list(map(int, input().split()))
    n = data[0]
    values = data[1:1 + n]
    target = data[1 + n]
    print(*two_sum(values, target))


if __name__ == "__main__":
    main()
