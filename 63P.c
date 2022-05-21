# include<stdio.h>

int main()
{
    int x;
    printf("enter number:");
    scanf("%d",&x);
    
    if (x>0){
        printf("natural number");
    }
    else {
        printf("not a natural number");
    }

    return 0;
}