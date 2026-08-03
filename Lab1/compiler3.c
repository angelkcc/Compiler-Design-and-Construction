//3. write a c program to simulate lexical analyser for validating operator (arithemetic, relational.logical and assignment).
#include<stdio.h>
#include<string.h>
int main()
{
    char op[3],ch;
    do
    {
        printf("Enter an operator: ");
        scanf("%s", op);
    // Arithmetic Operators
        if(strcmp(op,"+")==0 || strcmp(op,"-")==0 ||
           strcmp(op,"*")==0 || strcmp(op,"/")==0 ||
           strcmp(op,"%")==0)
        {
            printf("Arithmetic Operator\n");
        }
    // Relational Operators
        else if(strcmp(op,"==")==0 || strcmp(op,"!=")==0 ||
                strcmp(op,">")==0 || strcmp(op,"<")==0 ||
                strcmp(op,">=")==0 || strcmp(op,"<=")==0)
        {
            printf("Relational Operator\n");
        }
    // Logical Operators
        else if(strcmp(op,"&&")==0 || strcmp(op,"||")==0 ||
                strcmp(op,"!")==0)
        {
            printf("Logical Operator\n");
        }
    // Assignment Operators
        else if(strcmp(op,"=")==0 || strcmp(op,"+=")==0 ||
                strcmp(op,"-=")==0 || strcmp(op,"*=")==0 ||
                strcmp(op,"/=")==0 || strcmp(op,"%=")==0)
        {
            printf("Assignment Operator\n");
        }

        else
        {
            printf("Invalid Operator\n");
        }
        printf("\nDo you want to continue? (y/n): ");
        scanf(" %c", &ch);
    } while(ch=='y' || ch=='Y');
    printf("Program terminated");
    return 0;

}
