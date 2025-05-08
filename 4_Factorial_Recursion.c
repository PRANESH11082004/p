# Helper function to validate input
def validate_input(n):
    if n < 0:
        raise ValueError("Factorial is not defined for negative numbers.")
    return n

# Recursive function to calculate factorial
def factorial(n):
    # Base case: factorial of 0 or 1 is 1
    if n == 0 or n == 1:
        return 1
    else:
        return n * factorial(n - 1)  # Recursive call

# Function to handle the problem using composition
def calculate_factorial():
    try:
        num = int(input("Enter a non-negative integer: "))

        # Validate input using function composition
        num = validate_input(num)

        # Calculate factorial using recursion
        result = factorial(num)

        # Output the result
        print(f"The factorial of {num} is {result}.")

    except ValueError as e:
        print(f"Error: {e}")

# Run the program
calculate_factorial()
