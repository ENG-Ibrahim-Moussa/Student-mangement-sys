
#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    unsigned int id;
    char name[50];
    unsigned int age;
    unsigned int year;
    float gpa;

} student;

struct node
{
    student data;
    struct node *next;
};

struct node *head = NULL;

void printStudent(struct node *print)
{
    printf("\n| Student Id =%d\n", print->data.id);
    printf("| Student name =%s\n", print->data.name);
    printf("| Student age =%d\n", print->data.age);
    printf("| Student GPA =%f\n", print->data.gpa);
    printf("| Student Year of addmission =%d\n", print->data.year);
    printf("| ===========================================\n");
}
void addStudent()
{
    unsigned int studentCount = 1;
    struct node *current = NULL;
    struct node *link = (struct node *)malloc(sizeof(struct node));

    if (link == NULL)
    {
        printf("failed to allocate student");
        return;
    }

    printf("| Enter Student name: ");
    scanf(" %[^\n]%*c", link->data.name);
    printf("|\n");
    printf("| Enter Student age: ");
    scanf("%d", &(link->data.age));
    printf("|\n");
    printf("| Enter Student GPA: ");
    scanf("%f", &link->data.gpa);
    printf("|\n");
    printf("| Enter Student Year of admission: ");
    scanf("%d", &link->data.year);
    printf("|\n");

    if (head == NULL)
    {
        head = link;
        link->next = NULL;
        link->data.id = (link->data.year - 2000) * 10000 + 1;
        printf("| Student id is %d \n", link->data.id);

        return;
    }
    current = head;

    // loop until reach the last node in the old list
    while (current->next != NULL)
    {
        current = current->next;
        if(link->data.year==current->data.year&&current!=head)
          studentCount++;
    }

    // Make the last node in the old list point to new node
    studentCount++;
    current->next = link;
    link->next = NULL;
    link->data.id = ((link->data.year - 2000) * 10000 + studentCount);
    printf("| Student id is %d \n", link->data.id);
}

void printAllStudents(void)
{
    struct node *current = head;

    if (head == NULL)
    {
        printf("| No student has been added\n");
        return;
    }
    while (current != NULL)
    {
        printStudent(current);
        current = current->next;
    }
}

void updateStudent(void)
{
    struct node *current = head;
    struct node *found = NULL;
    if (head == NULL)
    {
        printf("| No student has been added\n");
        return;
    }
    unsigned int ID;
    printf("| Enter Student ID");
    scanf("%d", &ID);
    while (current != NULL)
    {
        if (current->data.id == ID)
        {
            found = current;
            break;
        }

        current = current->next;
    }
    if (found == NULL)
    {
        printf("| No student has been Found\n");
        return;
    }
    printf("| Enter Student name: ");
    scanf(" %[^\n]%*c", found->data.name);
    printf("|\n");
    printf("| Enter Student age: ");
    scanf("%d", &(found->data.age));
    printf("|\n");
    printf("| Enter Student GPA: ");
    scanf("%f", &found->data.gpa);
    printf("|\n");
}

struct node *searchById()
{
    struct node *current = head;
    struct node *found = NULL;
    unsigned int id;

    if (current == NULL)
    {
        printf("| No student has been added\n");
        return NULL;
    }
    printf("Enter Student Id");
    scanf("%d", &id);
    while (current != NULL)
    {
        if (current->data.id == id)
        {
            found = current;
        }
        current = current->next;
    }
    if (found != NULL)
    {

        printStudent(found);
    }
    else
    {
        printf("\n| No student has been found\n");
    }
    return found;
}

void findHighestGpa(void)
{
    float highest = 0;
    struct node *current = head;
    struct node *highestStudent = NULL;
    if (current == NULL)
    {
        printf("| No student has been added\n");
        return;
    }
    while (current != NULL)
    {
        if (current->data.gpa > highest)
        {
            highest = current->data.gpa;
            highestStudent = current;
        }
        current = current->next;
    }
    printStudent(highestStudent);
}

void deleteStudent(void)
{
    struct node *delete = searchById();
    struct node *previous = head;
    char confirm;
    if (delete == NULL)
    {
        return;
    }
    printf("\n|Are you sure you want to delete student?(y/n)\n");
    scanf(" %c", &confirm);
    if (confirm == 'y')
    {
        if (delete == head)
        {
            head = head->next;
            free(delete);
            printf("\n| Student deleted Successfully\n");
        }
        else
        {
            while (previous->next != delete)
                previous = previous->next;
            previous->next = delete->next;
            free(delete);
            printf("\n| Student deleted Successfully\n");
        }
    }
}
void calculateAvgGpa(void){
	struct node* current=head;
	float sum;
	unsigned int count;
	if(head==NULL){
		printf("|\n Gpa average is 0.0\n");
		return;
	}
	while(current!=NULL){
		sum=sum+current->data.gpa;
		count++;
		current=current->next;
		}
	printf("\n| GPA average is %f ",sum/count);



}
void printMenu(void){


	  	  	printf("\n|============== Main Menu ==============|\n");
			printf("| \n");
			printf("|=======================================| \n");
			printf("|Please chose a Menu item:\n");
			printf("|1.Add a Student\n");
		    printf("|2.Update a Student\n");
			printf("|3.Delete a Student\n");
			printf("|4.Search by ID\n");
			printf("|5.Find highest GPA\n");
			printf("|6.Find average GPA\n");
			printf("|7.Print all Students\n");
			printf("|8.EXIT\n");

}



void Exit(unsigned int *num){
	char confirm;

	printf("\n|Are you sure you want to Exit all data will be lost?(y/n)\n");
	scanf(" %c", &confirm);
	if(confirm=='y')
		*num=255;
	else
		return;
	}
