 # include <stdio.h>
 //ch >= 97 & ch >= a both are same
 

 int main()
 {
     char ch;
     printf("ebter character :");
     scanf("%c", &ch);
    if (ch>= 'A' && ch<= 'Z'){
        printf("uper case");

    }
    else if (ch >= 'a' && ch <='z'){
        printf("lower case");

    }
    else {
        printf("not english letter");
    }
    
     return 0;

 } 