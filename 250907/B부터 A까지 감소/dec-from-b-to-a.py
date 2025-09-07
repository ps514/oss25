A, B = map(int, input().split())

for i in range(B, A - 1, -1):
    print(B, end=" ")
    B -= 1