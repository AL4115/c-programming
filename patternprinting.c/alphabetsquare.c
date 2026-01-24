// wap to print the pattern ABCD
# include <stdio.h>
int main(){
  /* int n;
    printf("enter the no. fo rows  n:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int a=1;
        for(int j=1;j<=n;j++){
            int d=a+64;
            char ch= (char)d;    // this is type casting 
            a++;
            printf("%c ",d);
        }
        printf("\n");
    }
    return 0;
}*/
// print A,AB,ABC,ABCD
/*int n;
printf("enter the no. of rows:");
scanf("%d",&n);
for (int i=1;i<=n;i++){
    int a=1;
    for(int j=1;j<=i;j++){
        int d=a+64;
        char ch =(char)d;
        a++;
        printf("%c ",d);
    }
    printf("\n");
}
return 0;
}*/
// print 1,AB,123,ABCD,12345
int n;
printf("enter the no.of rows :");
scanf("%d",&n);
for(int i=1;i<=n;i=i+2){
    for(int i=2;i<=n;i=i+2){
    for(int j=1;j<=i;j++){
        printf("%d ",j);
        int a=1;
    for(int j=1;j<=i;j++){
        int x=a+64;
        printf("%c ",x);
        a++;
    }
    
//printf("\n");
//for(int i=2;i<=n;i=i+2){
  /*  int a=1;
    for(int j=1;j<=i;j++){
        int x=a+64;
        printf("%c ",x);
        a++;
    }*/
    printf("\n");
}
    }

return 0;
}
}