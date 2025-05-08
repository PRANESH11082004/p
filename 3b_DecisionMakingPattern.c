while True:
    print("\nSelect Pattern:")
    print("1. Right-Angled Triangle")
    print("2. Pyramid Pattern")
    print("3. Floyd’s Triangle")
    print("4. Diamond Pattern")
    print("5. Exit")

    # Take input from the user
    choice = int(input("Enter choice (1/2/3/4/5): "))

    if choice == 5:
        print("Exiting the program. Goodbye!")
        break

    depth = int(input("Enter the depth/size of the pattern: "))

    num = 1  # Used for Floyd’s Triangle

    for i in range(1, depth + 1):
        if choice == 1:  # Right-Angled Triangle
            for j in range(1, i + 1):
             print(j, end=" ")

        elif choice == 2:  # Pyramid Pattern
            print(" " * (depth - i), end="")
            for j in range(1, i + 1):
                print(j, end=" ")

        elif choice == 3:  # Floyd’s Triangle
            for j in range(1, i + 1):
                print(num, end=" ")
                num += 1

        elif choice == 4:  # Diamond Pattern
            for j in range(1, depth - i + 1):
                print(" ", end=" ")
            for j in range(1, i * 2):
                print("*", end=" ")
            print()
        else:
            print("Invalid input. Please try again.")
            break  # Exit loop if invalid input

        print()  # Move to the next line
