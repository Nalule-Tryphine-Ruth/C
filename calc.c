#include<stdio.h>
#include<stdlib.h>

int main()
{
//introduce the program
/*
welcome to our simple arithmetic teacher
1.pick an operator of the choice
2.please enter any two random numbers.
+
*
-
/
=
3.enter the answer.
4.evaluate the answer.
*/
//step one
printf("These are the available operators.choose any.\n");
printf("a.)+\n");
printf("b.)-\n");
printf("c.)*\n");
printf("d.)/\n");
printf("Please choose any option above.\n");

char oper;
scanf("%c",&oper);
//step 2
int firstnumber;
int secondnumber;
printf("enter the firstnumber:");
scanf("%d",&firstnumber);

printf("\nEnter the secondnumber:");
scanf("%d",&secondnumber);
//step 3 
float answer;
switch(oper){
case'a':
printf("what is %d+%d?",firstnumber,secondnumber);
scanf("%f",&answer);
break;
case'b':
printf("what is %d-%d?",firstnumber,secondnumber);
scanf("%f",&answer);
break;
case'c':
printf("what is %d*%d?",firstnumber,secondnumber);
scanf("%f",&answer);
break;
case'd':
printf("what is %d/%d?",firstnumber,secondnumber);
scanf("%f",&answer);
break;
default:
printf("Wrong operator option picked.");
break;
}
//step 4
float correctAns;
if(oper=='a'){
        correctAns=firstnumber + secondnumber;
        if(answer==correctAns){
        printf("The answer is correct");
        }else{
        printf("The answer is not correct");
         }
}else{}

return 0;
}


    