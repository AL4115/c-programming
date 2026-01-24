/*// wap to print all the even numbers from 1 to 100
# include <stdio.h>
int main (){
    int n;
    for (int i=1 ; i<=100 ; i++){
        if (i%2==!0){
            continue ;
        };
        printf ("%d ",i);
    };
    return 0;
}*/
// wap to detect the greater numbers between a and b
# include <stdio.h>
int main (){
    int a;
    int b;
    printf("enter the value of a:");
    scanf("%d",a);
    printf("enter the value of b :");
    scanf("%d",b);
    if (a>b){
        printf("a is greater ");
    }
    else {
        printf("b is greater");
    };
    return 0;
}