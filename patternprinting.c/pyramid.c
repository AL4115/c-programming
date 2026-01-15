// wap to print alphabet pyramid mast 
# include <stdio.h>
int main (){
    int n;
    printf("enter the no. of rows :");
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i; j++){
            printf("   ");
        }
        for(int k=1;k<=i;k++){
            //This is type casting 
            char ch= (char)(k+64);
            printf(" %c ",ch);
        }
        int a= i-1;// extra cheez.
        for(int q=1;q<=i-1;q++){
            char ch = (char)(a+64);
            printf(" %c ",ch);
            a--;
        }
        printf("\n");
    }
    return 0;
}