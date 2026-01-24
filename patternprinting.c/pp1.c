# include <stdio.h>
int main(){
  /*  printf("*****\n*****\n*****");
    return 0;
}*/
int n;
printf("enter the number of rows :");
scanf("%d",&n);
int m;
printf("enter the number of columns :");
scanf("%d",&m);
for(int i=1;i<=n;i++){
    for (int j=1;j<=m;j++){
       // * =m*n;
        printf("*");
    };
    printf("\n");
};
return 0;
}