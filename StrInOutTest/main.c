#include <stdio.h>

int main()
{
    char cp[]="Michael Bi";
    printf("The initial string is: %s\n",cp);
    printf("The initial string length is: %d\n",sizeof(cp));
    printf("The initial string address is: %x\n",cp);
    printf("Please input string: ");
    scanf("%s",cp);//getchar();
    printf("Now the string length is: %d\n",sizeof(cp));
    printf("Now the string address is: %x\n",cp);
    printf("Now the string is: %s\n",cp);
    return 0;
}

