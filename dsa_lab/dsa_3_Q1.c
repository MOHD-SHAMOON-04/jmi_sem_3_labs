// DSA lab 3 (5/8/24)
// Menu driven program : to implement the following on a structure
// structure(int roll, char[] name, int marks, int semester)
// 1. enter one structure data
// 2. display all records
// 3. search by rollno.
// 4. search by name
// 5. give topper details
// 6. list all students by semester

#include <stdio.h>
#include <string.h>

// int num = 10; - just as a reminder
struct student
{
    int roll;
    char name[32];
    int marks;
    int sem;
} stud[10];

// for printing each indv details
void prtDetail(int i)
{

    printf("+-----------|--------------------------------|---------|------------+\n");
    printf("|%11d|%32s|%9d|%12d|\n", stud[i].roll, stud[i].name, stud[i].marks, stud[i].sem);
}

// printing table
void prtTable(int size)
{
    printf("+-----------|--------------------------------|---------|------------+\n");
    printf("|  Roll No  |              NAME              |  MARKS  |  SEMESTER  |\n");

    for (int i = 0; i < size; i++)
    {
        prtDetail(i);
    }
    printf("+-----------|--------------------------------|---------|------------+\n");
}

// searching roll number function
int srchRoll(struct student *a, int temp, int size)
{
    for (int i = 0; i < size; i++)
    {
        if (a[i].roll == temp)
        {
            // returning index when roll found
            return i;
        }
    }
    // roll not found = returned (-1)
    return -1;
}

// searching name function
int srchName(struct student *a, char temp[], int size)
{
    for (int i = 0; i < size; i++)
    {
        int res = strcmp(a[i].name, temp);
        if (res == 0)
        {
            // name found - index value returned
            return i;
        }
    }
    // if no name found returned -1
    return -1;
}

// tomper
int topper(struct student *a, int size)
{
    int max = 0;
    for (int i = 0; i < size; i++)
    {
        if (a[i].marks > a[max].marks)
        {
            max = i;
        }
    }
    return max;
}

// semester wise display
void semester(struct student *a, int temp, int size)
{
    for (int i = 0; i < size; i++)
    {
        if (a[i].sem == temp)
        {
            prtDetail(i);
            
        }
    }
    printf("+-----------|--------------------------------|---------|------------+\n");
}

// main
int main()
{
    int index = 0;
    int choice = 0;
    char temp[32];
    while (1)
    {
        printf("MENU:\n[0. EXIT]\n[1. Enter one student's data]\n[2. Display all records]\n[3. Search by roll no.]\n[4. Search by name]\n[5. List the TOPPER]\n[6. List all students by semester]\n>>>");
        scanf("%d", &choice);

        switch (choice)
        {
        case 0:
        {
            printf("EXIT!!!");
            return 0;
        }
        // enter details
        case 1:
        {
            printf("ENTER the following details of a student :\n");
            printf("ROLL NO. : ");
            scanf("%d", &stud[index].roll);

            printf("enter name of student: ");
            scanf("%s", &temp);
            strcpy(stud[index].name, temp);

            printf("MARKS : ");
            scanf("%d", &stud[index].marks);

            printf("SEMESTER : ");
            scanf("%d", &stud[index].sem);

            index++;
            // prtTable(index);
            break;
        }
        // display all records
        case 2:
        {
            prtTable(index);
            break;
        }
        // search by roll num
        case 3:
        {
            int temp;
            printf("Enter roll num to be searched : ");
            scanf("%d", &temp);

            int res = srchRoll(stud, temp, index);
            if (res == -1)
            {
                printf("ROLL NUM NOT FOUND\n");
            }
            else
            {
                printf("ROLL NUM FOUND AT index = %d\n", res);
                prtDetail(res);
                printf("+-----------|--------------------------------|---------|------------+\n");
            }
            break;
        }
        // search by name
        case 4:
        {
            char temp[32];
            printf("Enter name to be searched : ");
            scanf("%s", &temp);

            int res = srchName(stud, temp, index);
            if (res == -1)
            {
                printf("NAME NOT FOUND\n");
            }
            else
            {
                printf("NAME FOUND AT index = %d\n", res);
                prtDetail(res);
                printf("+-----------|--------------------------------|---------|------------+\n");
            }
            break;
        }
        // topper datails
        case 5:
        {
            int res = topper(stud, index);
            prtDetail(res);
            printf("+-----------|--------------------------------|---------|------------+\n");
            break;
        }
        // list students by semester
        case 6:
        {
            int temp;
            printf("Enter semester to be searched : ");
            scanf("%d", &temp);
            semester(stud, temp, index);
            break;
        }
        default:
        {
            printf("Invalid choice...");
            break;
        }
        }
    }
    return 0;
}
