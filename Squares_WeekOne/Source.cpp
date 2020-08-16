#include<stdio.h>
#include<math.h>



double AreaRectangle(double w, double l)
{
    double sum = 0;
    sum = w * l;
    return sum;
}





int main()
{
    double sumArea = 0;
    double width = 0;
    double legth = 0;
    char name[50];
    printf(" Please specify name : ");
    scanf("%s", &name);
    printf("Hi \t %s \t welcome to Laundry112  \n", name);



    printf("Please specify a width :");
    if (scanf_s("%lf", &width))
    {
        printf("Please specify a legth :");
        if (scanf_s("%lf", &legth))
        {
            sumArea = AreaRectangle(width, legth);
            printf(" \t\t\t\t-- Ans >> AreaRectangle  = %.2lf Square meter -- \n", sumArea);
        }
        else
        {
            printf("\t\t\t ----- Please enter the number of numbers as integers. -----\n");
            printf("\t\t\t\t\t ----- End Program. ----- \n ");
        }
    }
    else
    {
        printf("\t\t\t ----- Please enter the number of numbers as integers. -----\n");
        printf("\t\t\t\t\t ----- End Program. ----- \n ");
    }
    printf("\t\t\t\t\t ----- By Watcharapol -----\n");
    printf("\t\t\t\t----- I started to fall in love with this. -----\n");
    return 0;

}
