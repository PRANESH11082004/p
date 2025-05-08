import sys 
from mymodule import grade_utils  # Import our module 
def main(): 
    if len(sys.argv) < 2:  # Check if scores are provided 
        print("Usage: python main.py <score1> <score2> ... <scoreN>") 
        return 
 
    try: 
        scores = [float(score) for score in sys.argv[1:]]   
        # Convert command-line args to numbers 
        avg_score = grade_utils.average_score(scores)  # Compute average 
        grade = grade_utils.calculate_grade(avg_score)  # Compute grade 
 
        print(f"Scores: {scores}") 
        print(f"Average Score: {avg_score:.2f}") 
        print(f"Final Grade: {grade}") 
 
    except ValueError: 
        print("Error: Please enter valid numeric scores.") 
 
if __name__ == "__main__": 
    main() 

"""
How this works ?
 
This program: 
• Accepts student scores via command-line arguments. 
• Uses a module (grade_utils.py) inside a package (mymodule) to calculate grades. 
• Imports the module and calls functions to compute the grade. 

1. Create a Package and Module 
• Create a folder named mymodule (this is our package). 
• Inside this folder, create a file grade_utils.py (this is our module).

2. Create the Main Script (main.py) 
• Reads scores from the command line. 
• Uses the mymodule.grade_utils module to calculate the average score and grade. 

Sample Output: 

Input given in the terminal: 
python main.py 85 90 78 92 88 

Output: 
Scores: [85.0, 90.0, 78.0, 92.0, 88.0] 
Average Score: 86.6 
Final Grade: B 


"""