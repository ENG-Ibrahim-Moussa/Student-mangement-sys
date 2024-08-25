#pragma once

void addStudent(void);
void printAllStudents(void);
void updateStudent(void);\
void searchById(void);
void findHighestGpa(void);
void deleteStudent (void);
void printMenu(void);
void calculateAvgGpa(void);
void Exit(unsigned int *);

enum State {
	case0,AddStudent,UpdateAstudent,DeleteAStudent,SearchById,findHigestGpa,findAverageGpa,PrintAllStuddents,EXIT,exitVal=255
};
