#include <stdio.h>

int main()
{
    char *c[]={"12345678"};
    printf("Number for testing is: %s\n",*c);
    int l=sizeof(c);
    printf("Number length is: %d\n",l);
    int i=l/2;
    printf("Number length divided by 2 is: %d\n",i);
    int j=l-2;
    while(j>=0){
        printf("Number %d divided is: %s\n",j,*c+j);
        j=j-2;
    }
    /*strncpy(cp,c,2);
    printf("Number after divided are: %s\n",cp);*/
    return 0;
}

