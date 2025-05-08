from collections import Counter
def reverse_string(s):
    return s[::-1]

def is_palindrome(s):
    return s == s[::-1]

def count_char(s, char):
    return s.count(char)

def remove_duplicates(s):
    seen = set()
    result = ""
    for char in s:
        if char not in seen:
            seen.add(char)
            result += char
    return result

def first_non_repeating(s):
    freq = Counter(s)
    for char in s:
        if freq[char] == 1:
            return char
    return None

def to_title_case(s):
    return " ".join([word.capitalize() for word in s.split()])

def are_anagrams(s1, s2):
    return sorted(s1) == sorted(s2)

def replace_char(s, old, new):
    return s.replace(old, new)

def count_words(s):
    return len(s.split())

def remove_vowels(s):
    vowels = "aeiouAEIOU"
    return "".join([char for char in s if char not in vowels])

def main():
    while True:
        print("\nString Operations Menu:")
        print("1. Reverse String")
        print("2. Check Palindrome")
        print("3. Count Character Occurrences")
        print("4. Remove Duplicates")
        print("5. First Non-Repeating Character")
        print("6. Convert to Title Case")
        print("7. Check Anagrams")
        print("8. Replace a Character")
        print("9. Count Words")
        print("10. Remove Vowels")
        print("11. Exit")

        choice = input("\nEnter your choice (1-11): ")

        if choice == "1":
            s = input("Enter a string: ")
            print("Reversed String:", reverse_string(s))

        elif choice == "2":
            s = input("Enter a string: ")
            print("Is Palindrome:", is_palindrome(s))

        elif choice == "3":
            s = input("Enter a string: ")
            char = input("Enter the character to count: ")
            print(f"Occurrences of '{char}':", count_char(s, char))

        elif choice == "4":
            s = input("Enter a string: ")
            print("String without duplicates:", remove_duplicates(s))

        elif choice == "5":
            s = input("Enter a string: ")
            result = first_non_repeating(s)
            print("First Non-Repeating Character:", result if result else "None found")

        elif choice == "6":
            s = input("Enter a sentence: ")
            print("Title Case:", to_title_case(s))

        elif choice == "7":
            s1 = input("Enter first string: ")
            s2 = input("Enter second string: ")
            print("Are Anagrams:", are_anagrams(s1, s2))

        elif choice == "8":
            s = input("Enter a string: ")
            old = input("Enter character to replace: ")
            new = input("Enter new character: ")
            print("Modified String:", replace_char(s, old, new))

        elif choice == "9":
            s = input("Enter a sentence: ")
            print("Word Count:", count_words(s))

        elif choice == "10":
            s = input("Enter a string: ")
            print("Without Vowels:", remove_vowels(s))

        elif choice == "11":
            print("Exiting the program. Goodbye!")
            break

        else:
            print("Invalid choice. Please select a valid option.")

if __name__ == "__main__":
    main()
