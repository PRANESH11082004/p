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
    with open(file_name, mode="r") as file:
        reader = csv.reader(file)
        for row in reader:
            print(row)

# Function to append a new student record
def append_student(student_id, name, age, grade):
    with open(file_name, mode="a", newline="") as file:
        writer = csv.writer(file)
        writer.writerow([student_id, name, age, grade])
    print(f"Student {name} added successfully!\n")

# Function to search for a student by ID
def search_student(student_id):
    with open(file_name, mode="r") as file:
        reader = csv.reader(file)
        for row in reader:
            if row[0] == str(student_id):
                print("Student Found:", row)
                return
    print("Student not found.\n")

# Main execution
write_students()  # Create file with initial data

while True:
    print("\nMenu:")
    print("1. Display Students")
    print("2. Add Student")
    print("3. Search Student")
    print("4. Exit")

    choice = input("Enter your choice: ")

    if choice == "1":
        print("\nStudent Records:")
        read_students()
    elif choice == "2":
        student_id = input("Enter Student ID: ")
        name = input("Enter Student Name: ")
        age = input("Enter Student Age: ")
        grade = input("Enter Student Grade: ")
        append_student(student_id, name, age, grade)
    elif choice == "3":
        student_id = input("Enter Student ID to search: ")
        search_student(student_id)
    elif choice == "4":
        print("Exiting program...")
        break
    else:
        print("Invalid choice. Please enter a valid option.")
