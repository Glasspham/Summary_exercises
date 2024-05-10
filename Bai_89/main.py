# Hàm tách các từ từ một chuỗi
def split_words(input):
    return input.split()

# Hàm tìm từ dài nhất trong một chuỗi
def find_longest_word(input):
    words = split_words(input)
    return max(words, key=len)

# Hàm tìm chuỗi dài nhất trong một danh sách các chuỗi
def find_longest_string(strings):
    return max(strings, key=len)

# Đếm số từ trong một chuỗi
def count_words(input):
    words = split_words(input)
    return len(words)

# Đếm số từ "your" trong một chuỗi
def count_your(input):
    words = split_words(input)
    return words.count("your")

if __name__ == "__main__":
    with open("E:\Project Visual Studio Code\Summary_exercises\Bai_89\STR.INP", "r") as input_file, open("E:\Project Visual Studio Code\Summary_exercises\Bai_89\STR.OUT", "w") as output_file:
        n = int(input_file.readline().strip())
        strings = [input_file.readline().strip() for _ in range(n)]

        # a. Tìm từ dài nhất của mỗi chuỗi
        output_file.write("CAU a:\n")
        for string in strings:
            output_file.write(find_longest_word(string) + "\n")

        # b. Tìm chuỗi con chứa từ bên trái và từ bên phải của mỗi chuỗi
        output_file.write("CAU b:\n")
        for string in strings:
            words = split_words(string)
            if len(words) >= 2:
                output_file.write(words[0] + " " + words[-1] + "\n")

        # c. Tìm chuỗi dài nhất trong file
        output_file.write("CAU c:\n")
        output_file.write(find_longest_string(strings) + "\n")

        # d. Đếm số từ trong file
        output_file.write("CAU d:\n")
        output_file.write(str(sum(count_words(string) for string in strings)) + "\n")

        # e. Đếm số từ "your" trong file
        output_file.write("CAU e:\n")
        output_file.write(str(sum(count_your(string) for string in strings)) + "\n")