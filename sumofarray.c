// wap to print the sum of element of a given array
# include<stdio.h>
int main(){
    int arr[5]={1,3,5,7,10};
    int sum=0;
    for(int i=0;i<5;i++){
         sum=sum+arr[i];
    }
         printf("%d",sum);
    return 0;
}