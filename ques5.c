// wap to find the  largest element in a given array
# include<stdio.h>
int main (){
    int arr[7]={20,23,67,45,24,110,10};
    int max1=arr[0];
    int max2=arr[0];
        for(int j=0;j<=6;j++){
        if(max1<arr[j]){
            max2=max1;
            max1=arr[j];
             
        }
        else if(max2<=arr[j] && max1!=arr[j]){
            max2=arr[j];
        }
    }
printf("%d is the largest element",max2);
    return 0;
}