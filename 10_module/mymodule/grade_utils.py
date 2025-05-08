def calculate_grade(score): 
    """Returns the grade based on the score.""" 
    if score >= 90: 
        return "A" 
    elif score >= 80: 
        return "B" 
    elif score >= 70: 
        return "C" 
    elif score >= 60: 
        return "D" 
    else: 
        return "F" 
 
def average_score(scores): 
    """Returns the average of given scores.""" 
    return sum(scores) / len(scores) if scores else 0