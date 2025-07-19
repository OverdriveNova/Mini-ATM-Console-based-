#include <stdio.h>

 int main(){
    int ch = 0;
    float balance = 1000.0 ,amount;
    while(ch != 4){
    printf("Welcome to Mini ATM!\n 1. Check Balance\n 2. Deposit Money\n 3. Withdraw Money\n 4. Exit\n Enter your choice(1,2,3,4): ");
    scanf("%d",&ch);
    
        if ( ch == 1 ){
            printf("Current Balance: %f",balance);
        } else if ( ch == 2 ) { 
            printf("Enter Amount To Deposit: \n");
            scanf("%f",&amount);
            balance += amount;
            printf("New Balance is: %f\n",balance);
        } else if ( ch == 3 ) {
            printf("Enter Amount To Withdraw\n");
            scanf("%f",&amount);
            if( amount > balance) { printf ("Insuffient Balance!\n");}
            else{balance -= amount;
            printf("New Balance: %f\n",balance);}
        } else if ( ch == 4 ) { 
            printf("Thank You For Using The ATM.\n GOODBYE!\n");
            break;
        } else {
            printf("Invalid Choice! Try Again.\n");
        }
    }
    return 0;

 }