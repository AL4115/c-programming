// wap  to print the table of n where n is a integer and it will inputed by user 
# include <stdio.h>
int main (){
int x;
printf ("enter the value of x:");
scanf ("%d",&x);
for (int i=1 ; i<=10 ; i++){
    int n=i*x;
    printf ("%d \n",n);
};
    return 0;
}