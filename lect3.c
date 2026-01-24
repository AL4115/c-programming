// display this ap - 1,3,5,7,9.. upto 'n' terms 
/*# include <stdio.h>
int main  (){
    int n;
    printf ("enter the n term :");
    scanf("%d",&n);
    for(int i=1 ; i<=2*n-1;i=i+2){
        printf("%d , ",i );
    };
    return 0;
}*/

// display this ap - 4,7,10,13,16---n 
# include <stdio.h>
int main (){
    int n;
    printf("enter the nth term :");
    scanf("%d",&n);
    for(int i=4; i<=n ; i=i+3){
        printf ("%d ,",i);
    };
    return 0;

}