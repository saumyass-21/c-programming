#include <stdio.h>

int main()
{
char s[100], t[100];
int i, j, k, l;
printf("Enter first string: ");
fgets(s, sizeof(s), stdin);
printf("Enter second string: ");
fgets(t, sizeof(t), stdin);
for(i=0; s[i]!='\0'; i++)
    {
        if(s[i]=='\n')
            {
                s[i]='\0';
                break;
            }
    }
for(j=0; t[j]!='\0'; j++)
    {
        if(t[j]=='\n')
            {
                t[j]='\0';
                break;
            }
    }
k=0;
while(s[k]!='\0')
    {
        k++;
    }
l=0;
while(t[l]!='\0')
    {
        l++;
    }
if(k != l)
    {
        printf("Not Anagram\n");
        return 0;
    }
int c1[26]={0}, c2[26]={0};
for(i=0; i<k; i++)
    {
        c1[s[i]-'a']++;
        c2[t[i]-'a']++;
    }
for(i=0; i<26; i++)
    {
        if(c1[i] != c2[i])
            {
                printf("Not Anagram\n");
                return 0;
            }
    }
printf("Anagram\n");
return 0;
}
