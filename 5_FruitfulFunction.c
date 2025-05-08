# Function to check if a number is even or odd
def is_even_or_odd(number):
    if number % 2 == 0:
        return "Even"
    else:
        return "Odd"

# Function to find the maximum of two numbers
def find_maximum(a, b):
    if a > b:
        return a
    else:
        return b

# Function to check if a year is a leap year
def is_leap_year(year):
    if (year % 4 == 0 and year % 100 != 0) or (year % 400 == 0):
        return True
    else:
        return False

# Function to calculate grade based on marks
def calculate_grade(marks):

    if marks >= 90:
        return "A"
    elif marks >= 80:
        return "B"
    elif marks >= 70:
        return "C"
    elif marks >= 60:
        return "D"
    else:
        return "F"

# Function to check if a number is positive, negative, or zero
def check_number_type(number):
    if number > 0:
        return "Positive"
    elif number < 0:
        return "Negative"
    else:
        return "Zero"

# Function to check if a string is a palindrome
def is_palindrome(s):
    s = s.lower().replace(" ", "")  # Convert to lowercase and remove spaces
    if s == s[::-1]:  # Compare the string with its reverse
        return True
    else:
        return False

# Main program
def main():

    while True:
        print("\n--- Menu ---")
        print("1. Check if a number is even or odd")
        print("2. Find the maximum of two numbers")
        print("3. Check if a year is a leap year")
        print("4. Calculate grade based on marks")
        print("5. Check if a number is positive, negative, or zero")
        print("6. Check if a string is a palindrome")
        print("7. Exit")
        choice = input("Enter your choice (1-7): ")

        if choice == "1":
            try:
                num = int(input("Enter a number: "))
                result = is_even_or_odd(num)
                print(f"The number {num} is {result}.")
            except ValueError:
                print("Please enter a valid integer.")

        elif choice == "2":
            try:
                num1 = float(input("Enter the first number: "))
                num2 = float(input("Enter the second number: "))
                maximum = find_maximum(num1, num2)
                print(f"The maximum of {num1} and {num2} is {maximum}.")
            except ValueError:
                print("Please enter valid numeric values.")

        elif choice == "3":
            try:
                year = int(input("Enter a year: "))
                if is_leap_year(year):
                    print(f"{year} is a leap year.")
                else:
                    print(f"{year} is not a leap year.")
            except ValueError:
                print("Please enter a valid year.")

        elif choice == "4":
            try:
                marks = float(input("Enter the student's marks: "))
                if 0 <= marks <= 100:
                    grade = calculate_grade(marks)
                    print(f"The student's grade is: {grade}")
                else:
                    print("Marks must be between 0 and 100.")
            except ValueError:
                print("Please enter a valid numeric value.")

        elif choice == "5":
            try:
                num = float(input("Enter a number: "))
                result = check_number_type(num)
                print(f"The number {num} is {result}.")
            except ValueError:
                print("Please enter a valid numeric value.")

        elif choice == "6":
            input_string = input("Enter a string: ")
            if is_palindrome(input_string):
                print(f"'{input_string}' is a palindrome.")
            else:
                print(f"'{input_string}' is not a palindrome.")

        elif choice == "7":
            print("Exiting the program. Goodbye!")
            break

        else:
            print("Invalid choice. Please enter a number between 1 and 7.")

# Run the main program
if __name__ == "__main__":
    main()
