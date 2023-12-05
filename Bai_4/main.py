a, b = map(int, input().split())

thickness_a_cm = a / 10000  # Chuyển đổi từ µm sang cm
folds = 0

while thickness_a_cm < b:
    thickness_a_cm *= 2
    folds += 1

print(folds)