def is_leap_year(year):
    return (year % 4 == 0 and year % 100 != 0) or (year % 400 == 0)

def is_valid_date(day, month, year):
    if month < 1 or month > 12: return False
    days_in_month = [0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]
    if month == 2 and is_leap_year(year): days_in_month[2] = 29
    return 1 <= day <= days_in_month[month]

def process_date_string(s):
    valid_dates = []
    year = 2000 + int(s[-2:])
    if len(s) == 5:
        day_str = s[:2]
        month_str = s[2]
        day = int(day_str)
        month = int(month_str)
        if is_valid_date(day, month, year): valid_dates.append(f"{day_str}/{month_str}/{year}")
    day_str = s[0]
    month_str = s[1:len(s) - 2]
    day = int(day_str)
    month = int(month_str)
    if is_valid_date(day, month, year): valid_dates.append(f"{day_str}/{month_str}/{year}")
    return valid_dates

def main():
    with open('Ngay.inp', 'r') as input_file:
        with open('Ngay.out', 'w') as output_file:
            N = int(input_file.readline().strip())
            for _ in range(N):
                s = input_file.readline().strip()
                valid_dates = process_date_string(s)
                if not valid_dates:
                    output_file.write("NO\n")
                else:
                    output_file.write(';'.join(valid_dates) + '\n')

if __name__ == "__main__":
    main()