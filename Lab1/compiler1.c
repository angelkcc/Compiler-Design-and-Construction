//lab1:
//1. Write a c/c++ program to identify whether input line is a comment or not.
#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], ch;

    do
    {
        printf("Enter a line: ");
        scanf(" %[^\n]", str);

        if(str[0]=='/' && str[1]=='/')
        {
            printf("Single-line comment\n");
        }
        else if(str[0]=='/' && str[1]=='*' && str[strlen(str)-2]=='*' && str[strlen(str)-1]=='/')
        {
            printf("Multi-line comment\n");
        }
        else
        {
            printf("Not a comment\n");
        }

        printf("\nDo you want to continue? (y/n): ");
        scanf(" %c", &ch);

    } while(ch=='y' || ch=='Y');

    printf("Program terminated.");

    return 0;
}

