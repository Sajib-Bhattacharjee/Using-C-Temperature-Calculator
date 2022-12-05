#include<stdio.h>
int main()
{
    while(1)
    {
    int choice;
    double temp,result,Celsius,Fahrenheit,Kelvin;

    printf("Conversion of temperature my style \n\a");
    printf("1.Fahrenheit to Celsius \n");
    printf("2.Celsius to Fahrenheit \n");
    printf("3.Celsius to Kelvin \n");
    printf("4.kelvin to Celsius \n");
    printf("5.Fahrenheit to Kelvin\n");
    printf("6.Kelvin to Fahrenheit \n");
    printf("Enter your choice: ");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
    {
        printf("Enter the Fahrenheit temperature: ");
        scanf("%lf",&temp);
        result=(temp-32)/1.8;
        printf("The result is:%lf ",result);
        break;
    }
    case 2:
    {
        printf("Enter the Celsius temperature: ");
        scanf("%lf",&temp);
        result=(temp*1.8)+32;
        printf("The result is : %lf",result);
        break;
    }
    case 3:
        {
            printf("Enter the Celsius temperature: ");
        scanf("%lf",&Celsius);
        result=(Celsius+273);
        printf("The result is : %lf",result);
        break;
        }
    case 4:
        {

            printf("Enter the Kelvin temperature: ");
        scanf("%lf",&Kelvin);
        result=(Kelvin-273);
        printf("The result is : %lf",result);
        break;
        }
    case 5:
        {
             printf("Enter the Fahrenheit temperature: ");
        scanf("%lf",&Fahrenheit);
        result=(Fahrenheit+241);
        printf("The result is: %lf ",result);
        break;
        }
    case 6:
        {

             printf("Enter the Kelvin temperature: ");
        scanf("%lf",&Kelvin);
        result=(Kelvin-241);
        printf("The result is:%lf ",result);
        break;
        }


    default :
      {
          printf("The number is not valid\n");
        printf("Please enter the valid number\n");
        printf("-SBC...\n");
      }
    }
    getch();

}
}
