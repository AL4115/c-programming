# include <stdio.h>
int main(){
   /* //int arr[5]={8,2,3,4,1};
     //arr[4]=200;
    //printf("%d",arr[10]);
    char arr[5]={'a','z','*','#','%'};
    printf("%d",arr[4]);
    return 0;
}*/
// wap to print an array by taking input from user 
int arr[5];
/*printf("enter the first element :");
scanf("%d",& arr[0]);
printf("enter the second element :");
scanf("%d",& arr[1]);
printf("enter the third  element :");
scanf("%d",& arr[2]);
printf("enter the fourth element :");
scanf("%d",& arr[3]);
printf("enter the fifth element :");
scanf("%d",& arr[4]);
printf("%d",arr[2]);*/
for(int i=0;i<=4;i++){
    printf("enter the element :");
    scanf("%d",&arr);
}
printf("%d",arr[2]);
return 0;
}

