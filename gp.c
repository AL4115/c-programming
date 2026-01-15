// print the gp from 1,2,4,8,16,32,----------n
# include <stdio.h>
int main (){
   /* int n;
    printf("enter n:");
    scanf("%d",&n);*/
  /*int a=1;
    for(int i=1;i<=n;i++){
         printf("%d ",a);
        a=a*2;
    };
    return 0;

}*/

// display the gp i.e 3,12,48-----------n terms 
/*int a=3;
for (int i=1;i<=n;i++){
    printf ("%d ",a);
    a=a*4;
};
return 0;
}*/

// display the ap upto 100,97,94---upto all terms which are positive 
int n;
printf("enter the number n:");
scanf("%d",&n);
for(int i=100;i<=n;i=i-3){
    int a=n-3;
    printf("%d ",a);
}
return 0;
}