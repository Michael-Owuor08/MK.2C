/*
Program for Library fine calculation
Author: Michael
Date: 26/09/2026
*/

#include <stdio.h>

int main() {

    int bookID,dueDate,returnDate,daysOverdue,fineRate,fineAmount;
    
    //input
    printf("Enter the book ID:\t");
    scanf("%d",&bookID);
    printf("Enter the return date:\t");
    scanf("%d",&returnDate);
    printf("Enter the due date:\t");
    scanf("%d",&dueDate);
    
    //validation input 
    if (returnDate<=0||dueDate<=0||bookID<=0){
        printf("Invalid input \n");
        return 1;
    }
    
    //calculate overdue days 
    daysOverdue=returnDate-dueDate;
    
    //calculate fine 
    if (daysOverdue<=0){
        fineRate=0;
        fineAmount=0;
    }   
    
    else if(daysOverdue>=1&&daysOverdue<=7){
        fineRate=20;
       
    }
    
    else if (daysOverdue>=8&&daysOverdue<=14){
        fineRate=50;
    }
    
    else{
        fineRate=100;
    }
    
    fineAmount=daysOverdue*fineRate;
    
    //display output 
    printf("\nBook ID:%d\n",bookID);
    printf("Due Date:%d\n",dueDate);
    printf("Return Date:%d\n",returnDate);
    printf("Days Overdue:%d\n",daysOverdue);
    printf("Fine Rate:%d\n",fineRate);
    printf("fine Amount:%d\n",fineAmount);
    
    return 0;
}    
    