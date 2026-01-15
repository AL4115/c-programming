// wap to print first 10 natural numbers 
# include <stdio.h>
int main (){
  /* for (int i=1 ; i<11 ; i++){
        printf("%d \n",i);
    };
    return 0;
}
    */
// wap to print the sum of first 10 natural numbers 
/*int sum = 0;
for (int i=1 ; i<11 ; i++){
    sum = sum +i;
}
printf("%d\n",sum);
return 0;
}*/

// wap to display the n terms of natural number and also their sum
/*int n;
int sum =0;
printf("enter the value of n:");
scanf("%d",&n);
printf("the n terms of natural numbers are :\n");
for (int i=1 ; i<=n;i++){
    printf("%d\n",i);
    sum = sum +i;
};
printf("The sum these terms of natural number are : %d",sum);
return 0;
}*/

// wap to print the cube of numbers up to an integer 
/*int n;
int sum;
printf("enter the value of n:");
scanf("%d",&n);
for (int i=1 ;i<=n;i++){
    sum =i*i*i;
     printf("%d\n",sum );
};
return 0;
}*/

// wap to print the multiplication table for a given integer
/*int n;
int mul;
printf("enter an integer:");
scanf("%d",&n);
for (int i=1; i<=12 ;i++){
    mul=i*n;
    printf("%d\n",mul);
};
return 0;
*/

// wap to calculate the factorial of a given integer
/* int n;
int fact;
printf("enter an integer n:");
scanf("%d",&n);
for (int i=1;i<=n;i++){
    fact = i*i;
  //  printf("%d",fact);
};
printf("%d",fact);
return 0;
}*/

// wap to print the sum of positive integers until 0
int n;
int sum=0;
printf("enter the value of n:");
scanf("%d",&n);
int i=0;
while(i<=n){
    i++;
    sum=sum +i;
     printf("the sum of the positive integer is:%d",sum);
     break;
}
 //printf("the sum of the positive integer is:%d",sum);
 return 0;
}