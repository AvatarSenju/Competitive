for _ in range(int(input())):
    n = int(input())

    flag = 1
    ar = list(map(int, input().split()))
    top = max(ar[0], ar[n-1])

    i = 0
    j = n-1
    while(i <= j):
        m = max(ar[i], ar[j])
        if(m > top):
            print("No")
            flag = 0
            break
        if(ar[i] > ar[j]):
            top = ar[i]
            i += 1
        else:
            top = ar[j]
            j -= 1

    if(flag == 1):
        print("Yes")
