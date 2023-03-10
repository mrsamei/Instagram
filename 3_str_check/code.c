#include <stdio.h>

int isSubstring(char str1[] , char str2[])
{
    int len = 0 , temp_len = 0;
    
    // getting the length of str2 :
    while (str2[len])
        len++;
    
    for (int i = 0; str1[i] ; i++)
    {
        // adding to the temporary variable "temp_length" if a character
        // in str2 is available in str1 :
        if (str2[temp_len] == str1[i])
            temp_len++;
    }
    // if temp_len = len, then all characters
    // in str2 are available in str1 :
    if (temp_len == len)
        return 1;
    else
        return 0;  
}

int main()
{
    if (isSubstring("Google.com","Goge"))
        printf("True");
    else
        printf("False");
    return 0;
}