//print star plus 
# include<stdio.h>
int main(){
   /* int n ;
    printf("enter the number n:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            int x=n/2+1;
            if(j==x||i==x){
            printf("* ");
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}*/
// print hollow rectangle star 
/*int n;
printf("enter the number of rows :");
scanf("%d",&n);
for (int i=1;i<=n;i++){
    for (int j=1;j<=n+2;j++){
        if (j==i||j==n+2){
        printf("* ");
    }
    else{
        printf(" ");
    }
    }
    printf("\n");
}
r
+eturn 0;
}
*/
// wap to print star cross
/*int n;
printf("enter the no. of rows:");
scanf("%d",&n);
for (int i=1;i<=n;i++){
    for (int j=1;j<=n;j++){
        if(i==j||i+j==6){
        printf(" *");
        }
        else{
            printf("  ");
        }
    }
    printf("\n");
}
return 0;
}*/
//wap to print floyd's triangle of numbers 
/*int n;
printf("enter the no. of rows :");
scanf("%d",&n);
int a=1;
for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
        printf("%d ",a);
        a++;
    }
    printf("\n");
}
return 0;
}
*/
// wap to print floyd's triangle only odd numbers 
/*int n;
printf("enter the no. of rows:");
scanf("%d",&n);
int a=1;
for (int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
        printf("%d ",a);
        a=a+2;
    }
    printf("\n");
}
return 0;
}*/
// wap to print 0and 1 tringle
int n;
printf("enter the no. of rows:");
scanf("%d",&n);
for (int i=1;i<=n;i++){
    for (int j=1;j<=i;j++){
        if(i==j||(i+j)%2==0){
            printf(" 1 ");
        }
        else{
            printf(" 0 ");
        }
    }
        printf("\n");
}
return 0;
}

         