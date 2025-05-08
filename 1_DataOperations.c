# Function to calculate the sum and product of two numbers
def sum_and_product(a, b):
    return a + b, a * b  # Returns a tuple
# Function to swap two numbers using tuple assignment
def swap_numbers(a, b):
    return b, a  # Swapping using tuple assignment
# Function to demonstrate tuple unpacking
def display_person_info():
    person_info = ("Alice", 30, "Engineer")  # Tuple with personal info
    name, age, profession = person_info  # Tuple unpacking
    print(f"Name: {name}, Age: {age}, Profession: {profession}")
# Function to calculate the quotient and remainder of division
def divide_and_remainder(a, b):
    return divmod(a, b)  # Returns a tuple of quotient and remainder
# Main program
def main():
# Sum and Product Calculation
    a, b = 10, 5
    sum_result, product_result = sum_and_product(a, b)
    print("=== Sum and Product Calculation ===")
    print(f"The sum of {a} and {b} is: {sum_result}")
    print(f"The product of {a} and {b} is: {product_result}")
# Swapping Numbers
    a, b = swap_numbers(a, b)
    print("\n=== Swapping Numbers ===")
    print(f"After swapping: a = {a}, b = {b}")
# Displaying Person Information
    print("\n=== Displaying Person Information ===")
    display_person_info()
# Division and Remainder Calculation
    dividend, divisor = 25, 4
    quotient, remainder = divide_and_remainder(dividend, divisor)
    print("\n=== Division and Remainder Calculation ===")
    print(f"When {dividend} is divided by {divisor}: Quotient = {quotient}, Remainder = {remainder}")
# Entry point of the program
main()
