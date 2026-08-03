//4. write a c program to check whether the given input is keyword or not. (in case of c-language)

#include <stdio.h>
#include <string.h>

int main()
{
    char str[20], ch;
    char keyword[32][10] =
    {
        "auto","break","case","char","const","continue","default","do",
        "double","else","enum","extern","float","for","goto","if",
        "int","long","register","return","short","signed","sizeof","static",
        "struct","switch","typedef","union","unsigned","void","volatile","while"
    };

    int i, found;
    do
    {
        found = 0;
        printf("Enter a word: ");
        scanf("%s", str);

        for(i = 0; i < 32; i++)
        {
            if(strcmp(str, keyword[i]) == 0)
            {
                found = 1;
                break;
            }
        }

        if(found)
            printf("It is a C Keyword.\n");
        else
            printf("It is not a C Keyword.\n");

        printf("\nDo you want to continue? (y/n): ");
        scanf(" %c", &ch);

    } while(ch == 'y' || ch == 'Y');

    printf("Program terminated.");

    return 0;
}
