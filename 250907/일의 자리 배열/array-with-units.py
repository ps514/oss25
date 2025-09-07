a, b = map(int, input().split())

arr = []
arr.append(a)
arr.append(b)
print(a, b, end=" ")

for i in range(2, 10):
    arr.append((arr[i - 2] + arr[i - 1]) % 10)
    print(arr[i], end=" ")