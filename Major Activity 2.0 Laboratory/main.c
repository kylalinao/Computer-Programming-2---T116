/* Create a simple login program where the user inputs ID# and PIN and if the
credentials are correct, the program will print: You have succesfully Logged In 
and ID# */

#include<stdio.h>

int verify(int crdtls [3][2], int ID, int PIN)
{
    int account = 0;
    for(int i = 0; i<3; i++){
        if(ID == crdtls[i][0] && PIN == crdtls[i][1]){
        account= 1;
        }
    }
    return account;
}

int main ()
{
    int crdtls[3][2] = {{1100,5555}, {1010,5505}, {0110,5050}};
    int ID, PIN;
    
    printf("Enter ID Number: ");
    scanf("%d", &ID);
    printf("Enter PIN: ");
    scanf("%d", &PIN);
    
    if(verify(crdtls,ID,PIN))
    {
        printf("\nYou have successfully logged in\nID#:%d",ID);
    } else {
        printf("\nInvalid ID/PIN!");
    }
    return 0;
}