#include<stdio.h>
#include<stdlib.h>

// This is a must use library in every c program 
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
//                 the break shows that a case clause has been ended
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
//         The default is used to end a switch statement
//         In this case only the basic operators have been assigned  that is -+/* 
//         and hence if other operators are used then the program will inform the user that they have used a wrong operator
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


    
