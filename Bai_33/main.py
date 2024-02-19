def count_coin_combinations(N, M):
    denominations = [5000, 2000, 1000, 500, 200]
    count = 0
    stack = [(N, 0, [])]  # (remaining_value, index, combination)

    while stack:
        remaining_value, index, combination = stack.pop()

        if remaining_value == 0:
            if len(combination) <= M:
                count += 1
            continue

        if index >= len(denominations):
            continue

        max_coins = min(remaining_value // denominations[index], M - len(combination))
        for num_coins in range(max_coins + 1):
            new_combination = combination + [denominations[index]] * num_coins
            new_remaining_value = remaining_value - num_coins * denominations[index]
            stack.append((new_remaining_value, index + 1, new_combination))

    return count

N = int(input("N: "))
M = int(input("M: "))

result = count_coin_combinations(N, M)
print(f"Co {result} phuong an doi tien")