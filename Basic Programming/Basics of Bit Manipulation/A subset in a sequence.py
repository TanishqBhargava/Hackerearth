#=========================#
# ID: tanishqbhargava2509 #
# LANG: C++               #
#=========================#
#Tanishq Bhargava
t=int(input())
for _ in range(t):
    n=(bin(int(input()))[2:])[::-1]
    arr=[]
    for i in range(len(n)):
        if n[i]=='1':
            arr.append(3**i)
    print(len(arr))
    print(*arr)
