#include<stdio.h>
#include<math.h>

// int main(){                 //write a program to print the average of 3 numbers

//     int x, y , z, average;

//     printf("Enter the numbers: ");
//     scanf("%d %d %d", &x, &y ,&z);

//     average= (x + y + z)/3;

//     printf("The average number is : %d", average);
    


//     return 0;
// }

int main (){

    char ch;

    printf("enter a character: ");
    scanf("%c", &ch);
    
    if(isdigit(ch)==0){
        printf("The character is a digit./n");

        }  else{
            printf("The character is not a digit./n");
        }

    return 0;
}