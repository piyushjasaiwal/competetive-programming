num = int(input())
ans = 0
cnt_2 = 0
cnt_5 = 0
for n in range(num,0,-1):
    while n%2 == 0:
        cnt_2 += 1
        n/=2

    while n%5 == 0:
        cnt_5+=1
        n/=5

print(min(cnt_2,cnt_5))