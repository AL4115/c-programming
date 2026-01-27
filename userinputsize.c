# include <stdio.h>
int main(){
    int n;
    printf("enter the size of an array:");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        int x=i+1;
        printf("enter the element number :%d\n",x);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        printf(" %d ",arr[i]);
    }
    return 0;
}