#include<stdio.h>

int main()
{
    char ch; 

    printf("The Character is : %c", ch);
    scanf("%c", &ch);
    
    printf("\n"); //line break in the output before showing the result.

    if(ch >= 'a' && ch <= 'z'){
        printf("%c is the lower case.\n", ch);
    }

    else if(ch >= 'A' && ch <= 'Z'){
        printf("%c is the upper case.\n", ch);
    }

    printf("\n\n"); // line break in the output after result.

    return 0;
}