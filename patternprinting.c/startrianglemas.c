// wap to print the given pattern star triangle mast 
# include<stdio.h>
int main(){
    int n;
    printf("enter the no. of lines :");
    scanf("%d",&n);
    /*for(int i=0;i<n;i++){
        for(int j=n;j>n-i;j--){
            printf("   ");
        }
        for(int k=1;k<=n-i;k++){
            printf(" * ");
        }
        printf("\n");
    }
    return 0;
}*/

// wap to print the pattern --- star pyramid mast 
/*int nst=n-1;
int nsp=1;
for(int a=1;a<=2*n-1;a++){
        printf(" * ");
    }
    printf("\n");
for(int i=0;i<n;i++){
    for(int j=1;j<=nst;j++){
        printf(" * ");
    }
    for(int k=1;k<=nsp;k++){
        printf("   ");
    }
    for(int m=0;m<nst;m++){
        printf(" * ");
    }
    nst--;
    nsp+=2;
    printf("\n");
}
return 0;
}*/

// wap to print the number pyramid mast 
int num=n-1;
int nsp=1;
for(int a=1;a<=2*n-1;a++){
        printf(" %d ",a);
    }
    printf("\n");
for(int i=0;i<n;i++){
    for(int j=1;j<=num;j++){
        printf(" %d ",j);
    }
    for(int k=1;k<=nsp;k++){
        printf("   ");
    }
    for(int m=n+1;m<2*n-1;m++){
        printf(" %d ",m);
    }
    num++;
    nsp+=2;
    printf("\n");
}
return 0;
}
