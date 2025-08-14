#include <stdio.h>
float main()
{
    float netSales, grossSales, discount;

    //Enter a number
    printf("Enter Gross Sales\n");
    scanf("%f", &grossSales);

     if (grossSales > 20000.00)
    {
         discount = (15.0/100.0) * grossSales;
        netSales = grossSales - discount;

        printf("net sales = %.2f\n", netSales);

    }
    else if (grossSales > 10000.00)
    {
        discount = (10.0/100.0) * grossSales;
        netSales = grossSales - discount;

        printf("net sales = %.2f\n", netSales);

    }
    else
    {
        discount = (5.0/100.0) * grossSales;
        netSales = grossSales - discount;

        printf("net sales = %.2f\n", netSales);
    }
}
