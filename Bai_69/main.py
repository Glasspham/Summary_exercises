import re
input_file = "abc.txt"
output_file = "number.txt"
with open(input_file, 'r', encoding='utf-8') as f:
    data = f.read()
    numbers = re.findall(r'\d+', data)
with open(output_file, 'w') as out:
    for number in numbers:
        out.write(number + '\n')