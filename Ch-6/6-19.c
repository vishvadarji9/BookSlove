// 19. Using Switch case block, input the name of the month from the user and display the corresponding
// number of days in that month.

#include<stdio.h>
int main(){
    char month[20];
    printf("Enter the name of the month: ");
    scanf("%s", month);

    switch(month){
        case "January":
        case "March":
        case "May":
        case "July":
        case "August":
        case "October":
        case "December":    
            printf("31 days\n");
            break;
        case "April":
        case "June":
        case "September":
        case "November":
            printf("30 days\n");
            break;
        case "February":
            printf("28 days\n");
            break;
        default:
            printf("Invalid month\n");
            break;
        
    }
    return 0;
}