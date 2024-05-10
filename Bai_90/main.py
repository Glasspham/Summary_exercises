# Cách 1:
number = int(input("Enter a number: "))
formatted_number = "{:,}".format(number).replace(",", ".")
print(formatted_number)

# Cách 2:
number = int(input("Enter a number: "))
formatted_number = '{:.}'.format(number)
print(formatted_number)