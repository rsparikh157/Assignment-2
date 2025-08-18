#include <stdio.h>
float main()
{
    float sub1, sub2, sub3, avgMarks ;

    //Enter a subject wise marks
    printf("Enter Marks in Subject 1\n");
    scanf("%f",&sub1);

    printf("Enter Marks in Subject 2\n");
    scanf("%f",&sub2);

    printf("Enter Marks in Subject 3\n");
    scanf("%f",&sub3);

    //Calculate Average
    avgMarks = (sub1 + sub2 + sub3) / 3.0;



    if (avgMarks >= 70)
    {
        printf("student gets distinction");
    }

    else if (avgMarks >= 60)
    {
        printf("student gets first class");
    }

    else if (avgMarks >= 50)
    {
        printf("student gets second class");
    }

    else if (avgMarks >= 35)
    {
        printf("student gets third class");
    }

    else
    {
        printf("student fails");
    }
}
