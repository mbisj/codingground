#include <stdio.h>

int main()
{
    char *cpa[3]={"Michael","Sherry","Jason"};
    int i=0;
    printf("There are three people in my family:\n");
    for(i==0;i<3;i++){
        printf("%s\n",*(cpa+i));
    }
    printf("The longest name length is: %d\n",sizeof(*cpa));
    printf("Done!\n");

    return 0;
}

