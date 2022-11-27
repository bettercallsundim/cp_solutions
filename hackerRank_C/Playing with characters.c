#include <stdio.h>
int main()
{

    char c, s[50],se[100];
    scanf("%c",&c);
    scanf("%s\n",&s);
    scanf("%[^\n]s",&se);

    printf("%c\n",c);
    printf("%s\n",s);
    printf("%s\n",se);
    return 0;
}
