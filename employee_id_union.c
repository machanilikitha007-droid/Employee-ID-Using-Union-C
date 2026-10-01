#include <stdio.h>
#include <string.h>

union EmployeeID
{
    int numericID;
    char textID[20];
};

int main()
{
    union EmployeeID employee;
    int choice;

    printf("===== Employee ID Using Union =====\n");
    printf("1. Numeric Employee ID\n");
    printf("2. Text Employee ID\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1)
    {
        printf("Enter Numeric Employee ID: ");
        scanf("%d", &employee.numericID);

        printf("\nEmployee ID: %d\n", employee.numericID);
    }
    else if (choice == 2)
    {
        printf("Enter Text Employee ID: ");
        scanf("%19s", employee.textID);

        printf("\nEmployee ID: %s\n", employee.textID);
    }
    else
    {
        printf("\nInvalid choice!\n");
    }

    printf("\nThe union stores one ID value at a time.\n");

    return 0;
}
