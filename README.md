# Student-mangement-sys
Student mangement system C project for embebed systems diploma at Edges for Training 
Project Title: Student Management System in C
Author: Ibrahim Mohsen
Description: This C program is a mini-project developed as part of the Standard Embedded Diploma C course. The project implements a simple command-line Student Management System that allows users to perform various operations related to student data management.

Overview:
The program serves as an interactive system where users can manage a collection of student records. The available operations include adding, updating, deleting, searching for students, and calculating statistics such as the highest GPA and average GPA.

Key Functionalities:
Menu-Driven Interface: The program presents a menu to the user, allowing them to select different actions. This is implemented using a loop that runs until the user chooses to exit.

Add Student: Users can add new student records to the system, including details such as name, age, and GPA while the stident ID is assigned automatically.

Update Student: The program allows users to update existing student records. It prompts for a selection of the student to be updated.

Delete Student: Users can remove a student record from the system based on the student’s ID.

Search by ID: Users can search for a student by their unique ID and retrieve their details.

Find Highest GPA: The program can identify and display the student with the highest GPA.

Calculate Average GPA: The system calculates and displays the average GPA of all students in the system.

Print All Students: Users can view a list of all students currently stored in the system.

Exit: The program allows users to exit the system, terminating the application.

Implementation Details:
Header File: The program relies on a separate a C File and a header file  (StudentMngmntSys.h) which  contains Prototypes for the functions used in managing student records.
C File: (StudentMngmntSys.c) a C File containing the Function declerations.  
State Management: The main loop of the program operates based on the state variable, which determines the action to be performed according to the user’s input.

Buffering: The program configures the standard output and error streams using setvbuf to ensure immediate output display, which is particularly useful for real-time interaction in a command-line environment.
