numbers = list(map(int, input().split()))
count = {}
for num in numbers:
    if num in count:
        count[num] += 1
    else:
        count[num] = 1
for num in count:
    print(f"Số {num} lặp lại {count[num]} lần")


from collections import Counter
for key,value in Counter(numbers).items():
    print(f'Số {key} lặp lại {value} lần')
