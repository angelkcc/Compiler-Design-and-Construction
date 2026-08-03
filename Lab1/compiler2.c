//2. write a c program to check whether the given input is valid identifier or not.

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char str[100], ch;

    char keyword[32][10] = {
        "auto","break","case","char","const","continue","default","do",
        "double","else","enum","extern","float","for","goto","if",
        "int","long","register","return","short","signed","sizeof","static",
        "struct","switch","typedef","union","unsigned","void","volatile","while"
    };

    int i, valid;

    do
    {
        valid = 1;

        printf("Enter an identifier: ");
        scanf("%s", str);

        // Check first character
        if(!(isalpha(str[0]) || str[0]=='_'))
        {
            valid = 0;
        }

        // Check remaining characters
        for(i=1; i<strlen(str) && valid; i++)
        {
            if(!(isalnum(str[i]) || str[i]=='_'))
            {
                valid = 0;
            }
        }

        // Check if it is a keyword
        for(i=0; i<32 && valid; i++)
        {
            if(strcmp(str, keyword[i]) == 0)
            {
                valid = 0;
            }
        }

        if(valid)
            printf("Valid Identifier\n");
        else
            printf("Invalid Identifier\n");

        printf("\nDo you want to continue? (y/n): ");
        scanf(" %c", &ch);

    } while(ch=='y' || ch=='Y');

    printf("Program terminated.");

    return 0;
}
