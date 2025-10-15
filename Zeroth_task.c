/*
Write a program, that reads two strings from the user, each contains max. 30 valid characters.

    Declare two character arrays of 31 call them str1 and str2
    Use scanf() with %s to read into the string
    Use the following snippet to write out all characters and codes in the array:

extend the program with the following:

    Determine and print out the length of str1 (strlen)
    Compare str1 and str2, print out the result! (strcmp)
    Copy the content of str1 to str 2 (strcpy), compare them again!
    Concatenate str1 and str2. Modify the sizes to avoid overindexing!
    Print the concatenated string!
*/

#include <stdio.h>
#include <string.h>
int main()
{
    char str1[31], str2[31];
    scanf("%s", str1);
    scanf("%s", str2);
    // read from user here
    for (int i = 0; i < 31; i++)
    {
        printf("%dth letter='%c', code=%d\n", i, str1[i], str2[i]);
    }
    int n = strlen(str1);
    printf("The length of str1: %d\n", n);
    printf("The length of str2: %lu\n", strlen(str2));
    printf("The compartion of str1 and str2: %d\n", strcmp(str1,str2));
    strcpy(str1,str2);
    printf("The compartion of str1 and str2: %d\n", strcmp(str1,str2));
/*
    char str3[62];
    for(int i=0; i<10; i++){
        str3[i]=str1[i];
    }
    for(int i=strlen(str1); i<strlen(str2); i++){
        str3[i]=str2[i];
    }

    char str4[62];
    strcat(str1, str2);
    for (int i = 0; i < 62; i++)
    {
        printf("%dth letter='%c', code=%d\n", i, str1[i], str2[i]);
    } 
*/
    return 0;
}
