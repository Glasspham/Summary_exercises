from datetime import datetime
def calculate_birth_year(age):
    current_year = datetime.now().year
    birth_year = current_year - age
    return birth_year
your_birthyear = int(input("Enter your age: "))
birth_year = calculate_birth_year(your_birthyear)
print("Your birth year is:", birth_year)