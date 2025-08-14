#include <stdio.h>
float main()
{
    float grossSalary, netSalary, allowance, deduction;

    // Enter grossSalary
    printf("Enter Gross Salary");
    scanf("%f", &grossSalary);

    if (grossSalary > 10000)
    {
        allowance = (10.0/100.0)* grossSalary;
        deduction = (3.0/100.0)* grossSalary;

        netSalary = grossSalary + allowance - deduction;
        printf("Net Salary = %.2f\n", netSalary);

            }

    else if (grossSalary > 5000)
    {
        allowance = (7.0/100.0)* grossSalary;
        deduction = (2.0/100.0)* grossSalary;

        netSalary = grossSalary + allowance - deduction;
        printf("Net Salary = %.2f\n", netSalary);

            }
}
