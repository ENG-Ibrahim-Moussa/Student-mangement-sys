/*
 ============================================================================
 Name        : Project.c
 Author      : Ibrahim Mohsen
 Version     :
  Description: Mini Project C
        Standard Embedded Diploma C course
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "StudentMngmntSys.h"
int main(void)
{
  setvbuf(stdout, NULL, _IONBF, 0);
  setvbuf(stderr, NULL, _IONBF, 0);
  unsigned int state = case0;

  while (state != exitVal)
  {

    printMenu();
    printf("\n| choice= ");
    scanf("%d", &state);
    switch (state)
    {
    case AddStudent:
      addStudent();
      break;
    case UpdateAstudent:
      printAllStudents();
      break;
    case DeleteAStudent:
      deleteStudent();
      break;
    case SearchById:
      searchById();
      break;
    case findHigestGpa:
      findHighestGpa();
      break;
    case findAverageGpa:
      calculateAvgGpa();
      break;
    case PrintAllStuddents:
      printAllStudents();
      break;
    case EXIT:
      Exit(&state);
      break;
    }
  }

  return 0;
}
