// wap to print star tringle mast
# include<stdio.h>
int main(){
    int n;
    printf("enter the no. of rows :");
    scanf("%d",&n);
   /* for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            printf("   ");
        }
        for(int k=1;k<=i;k++){
            printf(" * ");
        }
        printf("\n");
    }
    return 0;
    
}*/

// wap to print the rhombus of star 
/*for(int i=1;i<=n;i++){
    for(int j=1;j<=n-i;j++){
        printf("   ");
    }
    for(int k=1; k<=n;k++){
        printf(" * ");
    }

    printf("\n");
}
return 0;
}
*/
// wap to print alphabet triangle 

/*for(int i=1;i<=n;i++){
    int a=1;
    for(int j=1;j<=n-i;j++){
        printf("   ");
    }
    for(int k=1;k<=i;k++){
        int sum = a+64;
        printf(" %c ",sum);
        a++;
    }
    printf("\n");
}
return 0;
}*/
// wap to print star pyramid 
/*for(int i=1;i<=n;i++){
    for (int j=1;j<=n-i;j++){
        printf("   ");
    }
    for(int k=1;k<=i;k++){
        printf(" * ");
    }
    for(int m=1;m<i;m++){
        printf(" * ");
    }
    printf("\n");
}
return 0;
}*/

// wap to print number pyramid 
/*int a=2;
for(int i=1;i<=n;i++){
    int a=i-2;
    for(int j=1;j<=n-i;j++){
        printf("   ");
    }
    for(int k=1;k<=i;k++){
        printf(" %d ",k);
    }
    for(int m=3;m<=i+1;m++){
        //int sum=a+1;
        printf(" %d ",a);
        a++;
    }
    printf("\n");
}
return 0;
}*/
// wap to print number pyramid mast
for(int i=1;i<=n;i++){
    int a=i-1;
    for(int j=1;j<=n-i;j++){
        printf("   ");
    }
    for(int k=1;k<=i;k++){
        printf(" %d ",k);
    }
    for(int m=1;m<=i-1;m++){
        printf(" %d ",a);
        a--;
    }
    printf("\n");
}
return 0;
}

