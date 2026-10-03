#include <stdio.h>

int main()
{
    int marks;

    printf("Enter your marks: ");
    scanf_s("%d", &marks);

    if (marks >= 75)
    {
        printf("Distinction\n");
    }
    else if (marks > 60)
    {
        printf("First Class\n");
    }
    else if (marks >= 40)
    {
        printf("Second Class\n");
    }
   

    return 0;
}