print("========== List Operations ==========")
# Create a list
fruits = ["apple", "banana", "cherry"]
print("Original List:", fruits)
# 1. Append: Add an item to the end of the list
fruits.append("orange")
print("After Append:", fruits)
# 2. Extend: Add multiple items to the end of the list
fruits.extend(["grape", "kiwi"])
print("After Extend:", fruits)
# 3. Insert: Insert an item at a specific position
fruits.insert(1, "mango")
print("After Insert:", fruits)
# 4. Remove: Remove the first occurrence of an item
fruits.remove("banana")
print("After Remove:", fruits)
# 5. Pop: Remove and return the item at a specific position (default is last)
popped_item = fruits.pop(2)
print("Popped Item:", popped_item)
print("After Pop:", fruits)
# 6. Clear: Remove all items from the list
fruits_copy = fruits.copy()  # Make a copy before clearing
fruits_copy.clear()
print("After Clear:", fruits_copy)
# 7. Index: Find the index of the first occurrence of an item
index = fruits.index("mango")
print("Index of 'mango':", index)
# 8. Count: Count the number of occurrences of an item
fruits.append("apple")
count = fruits.count("apple")
print("Count of 'apple':", count)
# 9. Sort: Sort the list in ascending order
fruits.sort()
print("After Sort:", fruits)
# 10. Reverse: Reverse the order of the list
fruits.reverse()
print("After Reverse:", fruits)


#====================== Dictionary Operations ======================
print("\n========== Dictionary Operations ==========")
# Create a dictionary
student_scores = {"Alice": 85, "Bob": 72, "Charlie": 90}
print("Original Dictionary:", student_scores)
# 1. Add a new key-value pair
student_scores["Diana"] = 88
print("After Adding Diana:", student_scores)
# 2. Update a value
student_scores["Bob"] = 75
print("After Updating Bob's Score:", student_scores)
# 3. Remove a key-value pair
del student_scores["Charlie"]
print("After Removing Charlie:", student_scores)
# 4. Get a value by key
alice_score = student_scores.get("Alice")
print("Alice's Score:", alice_score)
# 5. Check if a key exists
exists = "Bob" in student_scores
print("Is Bob in the dictionary?", exists)
# 6. Get all keys
keys = student_scores.keys()
print("Keys in Dictionary:", list(keys))
# 7. Get all values
values = student_scores.values()
print("Values in Dictionary:", list(values))
# 8. Get all key-value pairs
items = student_scores.items()
print("Key-Value Pairs in Dictionary:", list(items))
# 9. Copy a dictionary
student_scores_copy = student_scores.copy()
print("Copied Dictionary:", student_scores_copy)
# 10. Clear a dictionary
student_scores_copy.clear()
print("After Clearing Copied Dictionary:", student_scores_copy)
