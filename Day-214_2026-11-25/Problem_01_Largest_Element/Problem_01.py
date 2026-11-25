numbers = list(map(int, input("Enter numbers separated by spaces: ").split()))

if not numbers:
    raise SystemExit("Enter at least one number.")

largest = numbers[0]
largest_index = 0

for i in range(1, len(numbers)):
    if numbers[i] > largest:
        largest = numbers[i]
        largest_index = i

print("Largest number:", largest)
print("Index:", largest_index)
