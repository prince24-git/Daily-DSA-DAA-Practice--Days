"""Read n, n integers, and a target; print the first matching index or -1."""

def linear_search(values, target):
    for index, value in enumerate(values):
        if value == target:
            return index
    return -1


def main():
    data = list(map(int, input().split()))
    n = data[0]
    values = data[1:1 + n]
    target = data[1 + n]
    print(linear_search(values, target))


if __name__ == "__main__":
    main()
