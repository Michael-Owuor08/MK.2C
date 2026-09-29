/*
program to determine eligibility 
Author:Michael 
Attendance>=75,average marks >=21000
Date:26/09/2026
*/
#include <stdio.h>

int main (){
    float attendance,average_marks;
    
    printf("Enter your attendance:\t");
    scanf("%f",&attendance);
    
    printf("Enter your avarage marks:\t");
    scanf("%f",&average_marks);
    
    if(attendance>=75&&average_marks>=40){
        printf("Eligible.\n");
    } 
    else{
        printf("Not eligible.\n"); 
    } 
    
    return 0;
}     