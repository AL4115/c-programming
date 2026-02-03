# include<stdio.h>
int main(){
    int arr[6] = {2,4,7,3,9,6};
    int pr=1;
    for(int i=0;i<=5;i++){
        pr = pr * arr[i];
    }
        printf("the product of the given element of an array is:%d",pr);
    return 0;
}