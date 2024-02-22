
with open("E:\Project Visual Studio Code\Summary_exercises\Bai_55\SAMPLE.INP", "r") as f_in, open("SAMPLE.OUT", "w") as f_out:
    N, M = map(int, f_in.readline().split())
    
    items = []
    for _ in range(N):
        weight, value = map(int, f_in.readline().split())
        items.append((weight, value))

    capacities = [int(f_in.readline()) for _ in range(M)]

    items.sort(key=lambda x: x[1] / x[0], reverse=True)

    total_value = 0
    for weight, value in items:
        for i in range(M):
            if capacities[i] >= weight:
                total_value += value
                capacities[i] -= weight
                break

    f_out.write(str(total_value) + "\n")