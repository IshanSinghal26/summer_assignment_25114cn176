#include <stdio.h>
#include <string.h>

struct Student
{
    int roll;
    char name[50];
    float marks;
};

int main()
{
    struct Student s[100];
    int n = 0, choice, roll, i, found;

    while (1)
    {
        printf("\n--- Student Record Management System ---\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Update Student\n");
        printf("5. Delete Student\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("Enter Roll Number: ");
                scanf("%d", &s[n].roll);

                printf("Enter Name: ");
                scanf(" %[^\n]", s[n].name);

                printf("Enter Marks: ");
                scanf("%f", &s[n].marks);

                n++;
                printf("Student record added successfully.\n");
                break;

            case 2:
                if (n == 0)
                {
                    printf("No records found.\n");
                }
                else
                {
                    printf("\nStudent Records:\n");
                    for (i = 0; i < n; i++)
                    {
                        printf("Roll No: %d\n", s[i].roll);
                        printf("Name: %s\n", s[i].name);
                        printf("Marks: %.2f\n\n", s[i].marks);
                    }
                }
                break;

            case 3:
                printf("Enter Roll Number to search: ");
                scanf("%d", &roll);

                found = 0;
                for (i = 0; i < n; i++)
                {
                    if (s[i].roll == roll)
                    {
                        printf("Roll No: %d\n", s[i].roll);
                        printf("Name: %s\n", s[i].name);
                        printf("Marks: %.2f\n", s[i].marks);
                        found = 1;
                        break;
                    }
                }

                if (!found)
                    printf("Student not found.\n");

                break;

            case 4:
                printf("Enter Roll Number to update: ");
                scanf("%d", &roll);

                found = 0;
                for (i = 0; i < n; i++)
                {
                    if (s[i].roll == roll)
                    {
                        printf("Enter New Name: ");
                        scanf(" %[^\n]", s[i].name);

                        printf("Enter New Marks: ");
                        scanf("%f", &s[i].marks);

                        printf("Record updated successfully.\n");
                        found = 1;
                        break;
                    }
                }

                if (!found)
                    printf("Student not found.\n");

                break;

            case 5:
                printf("Enter Roll Number to delete: ");
                scanf("%d", &roll);

                found = 0;
                for (i = 0; i < n; i++)
                {
                    if (s[i].roll == roll)
                    {
                        for (int j = i; j < n - 1; j++)
                        {
                            s[j] = s[j + 1];
                        }
                        n--;
                        printf("Record deleted successfully.\n");
                        found = 1;
                        break;
                    }
                }

                if (!found)
                    printf("Student not found.\n");

                break;

            case 6:
                return 0;

            default:
                printf("Invalid choice.\n");
        }
    }

    return 0;
}