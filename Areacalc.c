#include <stdio.h>
#include <stdlib.h>



int main() {

float CircArea;
float RectArea;
float TriArea;
float base;
float height;
float length;
float width;
const float pie =3.14159;
float radius;
int num;

printf("\tGeometry Calculator");
printf("1. \nCalculate the Area of a Circle\n");
printf("2. Calculate the Area of a Rectangle\n");
printf("3. Calculate the Area of a Triangle\n");
printf("4. Quit\n");
printf("Please enter your choice(1-4): ");
scanf("%d",&num);
switch (num){
case 1:

printf("Enter the radius: \n");
scanf("%f",&radius);
CircArea=pie*radius*radius;
printf("The area of the circle is %f",CircArea);
break;



case 2:


printf("Enter the  length: \n");
scanf("%f",&length);
printf("Enter the width: \n");
scanf("%f",&width);

RectArea=length*width;

printf("The area of the rectangle is %f",RectArea);

break;





case 3:
printf("Enter the base: \n");
scanf("%f",&base);
printf("Enter the height: \n");
scanf("%f",&height);

TriArea=0.5*base*height;

printf("The area of the triangle is %f",TriArea);


break;

default :printf("Input either 1,2, 3 or 4 \n");

}
return 0;
}