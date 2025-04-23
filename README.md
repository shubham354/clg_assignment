# Student Marks & Grade Management System

This C program allows you to input marks for 5 subjects, calculates the total and average, and assigns a grade based on the average marks.

## Features
- Accepts marks for 5 subjects.
- Calculates:
  - Total marks
  - Average marks
  - Grade (A/B/C/D/Fail)
- Includes input validation to ensure marks are within the 0–100 range.
- Clean output formatting and modular structure using functions.

## Grading Scale
| Average (%) | Grade |
|-------------|--------|
| 90 - 100    | A      |
| 75 - 89     | B      |
| 60 - 74     | C      |
| 40 - 59     | D      |
| Below 40    | F (Fail) |

## How to Compile and Run

### Compile
```bash
gcc student_grade_manager.c -o student_grade_manager



--- Student Marks & Grade Management System ---
Enter marks for subject 1 (0-100): 85
Enter marks for subject 2 (0-100): 90
Enter marks for subject 3 (0-100): 78
Enter marks for subject 4 (0-100): 88
Enter marks for subject 5 (0-100): 91

--- Report Card ---
Subject 1: 85.00
Subject 2: 90.00
Subject 3: 78.00
Subject 4: 88.00
Subject 5: 91.00
Total: 432.00
Average: 86.40
Grade: B
