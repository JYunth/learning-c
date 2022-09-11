#include <stdio.h>

//The main idea in this example program is to understand that when you store a variable, you have to be careful with where you store it. 
//If you want to store a character then you should store it in a variable of the char type.
//But you can display that char as a number also, using the format placeholder. 

int main()
{
    char letter;
    printf("Enter a letter for which to display ASCII: ");
    scanf("%c", &letter);

    printf("The ASCII value of the letter you entered is: %d\n", letter);
    printf("Thank you fro using my program!\n");
    return 0;
}
