#include <stdio.h>

int main() 
{
char s1[100], s2[100], doubled[200];
int len1 = 0, len2 = 0, i;
printf("Enter first string: ");
fgets(s1, sizeof(s1), stdin);
printf("Enter second string: ");
fgets(s2, sizeof(s2), stdin);
for (i = 0; s1[i] != '\0' && s1[i] != '\n'; i++) len1++;
for (i = 0; s2[i] != '\0' && s2[i] != '\n'; i++) len2++;
if (len1 != len2) 
   {
        printf("Strings are not rotations (different lengths).\n");
        return 0;
    }
for (i = 0; i < len1; i++) doubled[i] = s1[i];
for (i = 0; i < len1; i++) doubled[len1 + i] = s1[i];
doubled[2 * len1] = '\0';
int found = 0;
for (i = 0; i <= len1; i++) 
    {
        int j;
        for (j = 0; j < len2; j++) 
        {
            if (doubled[i + j] != s2[j])
                break;
        }
        if (j == len2) 
        {
            found = 1;
            break;
        }
    }
if (found)
     printf("rotation.\n");
else
     printf("not rotation.\n");
return 0;
}
