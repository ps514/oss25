N = int(input())
arr = list(map(int, input().split()))

for i in range(0, N, 1):
    print(arr[i] ** 2, end=" ")