//Algorithm:
//Step 1: START
//Step 2: Initialize float variables sub1, sub2, sub3, sub4, sub5, sub6 and avg.
//Step 3: Take the user input for the marks in each of the six subjects.
//Step 4: The control falls into the if block that checks if the marks in each subject are greater than 40. If the condition is True, print the result FAIL.
//Step 5: If the condition is False, the control falls into the else block.
//Step 6: Here, we know that the student has passed in all the subjects, we find the grade of the student and hence the control falls into the if-else ladder.
//Step 7: Print the respective grade for the ranges of marks.
//Step 8: STOP 


#include<stdio.h>
#include<stdlib.h>
int main()
{
    float sub1, sub2, sub3, sub4, sub5, sub6, avg;
    printf("Enter the marks in the range of 0-100\n");
    printf("Enter the marks in Data Structures:");
    scanf("%f", &sub1);
    printf("Enter the marks in Discrete Mathematics:");
    scanf("%f", &sub2);
    printf("Enter the marks in Digital Electronics:");
    scanf("%f", &sub3);
    printf("Enter the marks in Basic Electrical Engineering:");
    scanf("%f", &sub4);
    printf("Enter the marks in Principles of Management:");
    scanf("%f", &sub5);
    printf("Enter the marks in Environmental Science:");
    scanf("%f", &sub6);

    if(sub1 < 40 || sub2 < 40 || sub3 < 40 || sub4 < 40 || sub5 < 40 || sub6 < 40){
        printf("Fail");
    }
    else{
        avg = (sub1 + sub2 + sub3 + sub4 + sub5 + sub6)/6;

        if(avg > 90 && avg <= 100){
            printf("Grade = O");
        }
        else if(avg > 80 && avg <= 90){
            printf("Grade = A++");
        }
        else if(avg > 70 && avg <= 80){
            printf("Grade = A+");
        }
        else if(avg > 60 && avg <= 70){
            printf("Grade = A");
        }
        else if(avg > 50 && avg <= 60){
            printf("Grade = B");
        }
        else if(avg > 40 && avg <= 50){
            printf("Grade = C");
        }
        else{
			printf("Enter marks in the valid range only");
        }



    }

    
return 0;
}

