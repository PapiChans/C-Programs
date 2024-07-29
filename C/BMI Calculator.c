#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    float h1 = 0,h2 = 0,height = 0,weight = 0,bmi = 0;

    printf("--------------------------\n");
    printf("BMI (Body Mass Index) Calculator\n");
    printf("--------------------------\n");
    printf("Enter your Height in Centimeters (cm): ");
    scanf("%f",&h1);
    printf("Enter your Weight in Kilograms (kg): ");
    scanf("%f",&weight);

    h2 = h1 / 100; // Divide the Height in centimeters by 100
    height = h2 * h2; // After Divide, Multiply it by itself
    bmi = weight / height; // Calculate BMI

    printf("\n--------------------------\n");
    printf("Computation of your BMI\n");
    printf("--------------------------\n");
    printf("Your Height is: %f cm\n",h1);
    printf("Your Weight is %f kg\n",weight);

    printf("\nTo calculate BMI \n");
    printf("Height: %f cm / 100 is %f\n",h1,h2);
    printf("Square of Height: %f * %f is %f \n",h2,h2,height);
    printf("Your BMI is Weight divided by Height: %f / %f\n",weight,height);

    printf("\nBMI: %f\n",bmi);

    if (bmi <= 18.5){ //If-Else Statement for Weight Classification
    printf("Weight Status: Underweight");
    }
    else if (bmi <= 24.9){
    printf("Weight Status: Healthy");
    }
    else if (bmi <= 29.9){
    printf("Weight Status: Overweight");
    }
    else if (bmi <= 34.9){
    printf("Weight Status: Obesity Class 1");
    }
    else if (bmi <= 39.9){
    printf("Weight Status: Obesity Class 2");
    }
    else if (bmi >= 40.0){
    printf("Weight Status: Obesity Class 3");
    }

    getch();
    return 0;
}
