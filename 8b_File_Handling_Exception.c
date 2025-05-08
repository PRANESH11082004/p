import csv

# File name
file_name = "Student.csv"

# Function to create and write initial data
def write_students():
    data = [
        ["ID", "Name", "Age", "Grade"],
        [1, "Alice", 20, "A"],
        [2, "Bob", 21, "B"],
        [3, "Charlie", 22, "C"]
    ]
    with open(file_name, mode="w", newline="") as file:
        writer = csv.writer(file)
        writer.writerows(data)
    print("Student.csv file created successfully!\n")

# Function to read and display file contents
def read_students():
    try:
        with open(file_name, mode="r") as file:
            reader = csv.reader(file)
            for row in reader:
                print(row)
    except FileNotFoundError:
        print("Error: File not found. Please create the file first.")

# Function to append a new student record
def append_student(student_id, name, age, grade):
    try:
        with open(file_name, mode="a", newline="") as file:
            writer = csv.writer(file)
            writer.writerow([student_id, name, age, grade])
        print(f"Student {name} added successfully!\n")
    except Exception as e:
        print(f"Error while adding student: {e}")

# Function to search for a student by ID
def search_student(student_id):
    try:
        with open(file_name, mode="r") as file:
            reader = csv.reader(file)
            for row in reader:
                if row[0] == str(student_id):
                    print("Student Found:", row)
                    return
        print("Student not found.\n")
    except FileNotFoundError:
        print("Error: File not found. Please create the file first.")
    except Exception as e:
        print(f"An error occurred: {e}")

# Main execution
write_students()  # Create file with initial data

while True:
    print("\nMenu:")
    print("1. Display Students")
    print("2. Add Student")
    print("3. Search Student")
    print("4. Perform Division Calculation")
    print("5. Exit")

    choice = input("Enter your choice: ")

    if choice == "1":
        print("\nStudent Records:")
        read_students()
    elif choice == "2":
        try:
            student_id = int(input("Enter Student ID: "))
            name = input("Enter Student Name: ")
            age = int(input("Enter Student Age: "))
            grade = input("Enter Student Grade: ")
            append_student(student_id, name, age, grade)
        except ValueError:
            print("Error: Invalid input. Please enter correct data types.")
    elif choice == "3":
        try:
            student_id = int(input("Enter Student ID to search: "))
            search_student(student_id)
        except ValueError:
            print("Error: Invalid input. Please enter a valid integer ID.")
    elif choice == "4":
        try:
            n = int(input("Enter the value of n: "))
            d = int(input("Enter the value of d: "))
            c = int(input("Enter the value of c: "))
            q = n / (d - c)
            print("Quotient:", q)
        except ZeroDivisionError:
            print("Error: Division by Zero!")
        except ValueError:
            print("Error: Invalid input. Please enter integers only.")
        except Exception as e:
            print(f"An unexpected error occurred: {e}")
    elif choice == "5":
        print("Exiting program...")
        break
    else:
        print("Invalid choice. Please enter a valid option.")
