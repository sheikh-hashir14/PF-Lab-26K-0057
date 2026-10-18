#include <stdio.h>

int main(){
    int employee_salary, contribution_percent = 0, employer_match_percent;
    float employee_contribution, employer_contribution, total_contribution;

    printf("Enter the Employee Salary: ");
    scanf("%d", &employee_salary);
    
    while(1){
        printf("Enter the Employee Contribution Percentage: ");
        scanf("%d", &contribution_percent);
        
        if(contribution_percent <= 15 && contribution_percent > 0){
            break;
        }
        else{
            printf("Error: Contribution Percentage cannot be less than 0 or greater than 15. Try again\n");
            continue;
        }
    }
    while(1){
        printf("Enter the Employer Matching Percentage: ");
        scanf("%d", &employer_match_percent);

        if(employer_match_percent <= 15 && employer_match_percent > 0){
            break;
        }
        else{
            printf("Error: Employer Matching Percentage cannot be less than 0 or greater than 15. Try again\n");
            continue;
        }
    }

    employee_contribution = employee_salary * (100/contribution_percent);
    employer_contribution = employee_contribution * (100/employer_match_percent);

    total_contribution = employee_contribution + employer_contribution;

    printf("Total Contribution: %.2f\n", total_contribution);

}