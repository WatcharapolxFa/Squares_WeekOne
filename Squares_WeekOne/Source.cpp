#include<stdio.h>
#include<math.h>

double sumArea = 0;
double width = 0;
double legth = 0;
char name[50];

double AreaRectangle(double w, double l)
{
    double sum = 0;
    sum = w * l;
    return sum;
}





int main()
{
    printf(" Pleac ");
    scanf("%s", &name);
    printf("Hi %s ", name);


    /*
    printf("In Put Width :");
    if (scanf("%lf",&width))
    {
      printf("In Put Length :");
      if (scanf("%lf",&legth))
      {
        sumArea =  AreaRectangle(width,legth);
        printf(" \t\t\t\t-- Ans >> AreaRectangle  = %.2lf -- \n",sumArea);
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
    */
}
