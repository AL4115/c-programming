// display the ap - 100,97,94,--- upto all terms which are positive 
# include <stdio.h>
int main (){
   /* int a=100;
    for (int i=1;a>0;i++){
        printf("%d ",a);
        a=a-3;
    }
    return 0;
}*/

// wap to display the gp -100,50,25----upto n terms
/*int n;
printf("enter the number n:");
scanf ("%d",&n);
float a=100;
for(int i=1;i<=n;i++){
    printf("%d ",a);
    a=a*(1/2);
};
return 0;
}*/
// wap to check  if a given number is prime or a composite number'
/*int n;
printf ("enter the number : ");
scanf("%d",&n);
for (int i=2 ; i<=n-1 ; i++){
    if (n %i==0){
        printf("the given number is a composite number .");
        break;
    }
    else{
       printf("the given number is a prime number.");
       break;
   };
};
return 0;
}
*/

// wap to print the odd numbers from 1 to 100

for (int i=1 ; i<=100 ; i++){
    if (i%2==!0){
    printf("%d ", i);
    };
};
return 0;
}