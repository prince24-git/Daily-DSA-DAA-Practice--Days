"""Read n and n integers; print them sorted in ascending order."""

def selection_sort(values):
    for i in range(len(values)):
        smallest = i
        for j in range(i + 1, len(values)):
            if values[j] < values[smallest]:
                smallest = j
        values[i], values[smallest] = values[smallest], values[i]
    return values


def main():
    data = list(map(int, input().split()))
    n = data[0]
    values = data[1:1 + n]
    print(*selection_sort(values))


if __name__ == "__main__":
    main()
