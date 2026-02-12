a, b = input().split()

if(len(a) > len(b)):
    print("Coding ", len(a))
elif(len(a) < len(b)):
    print("Coding", len(b))
else:
    print("same")