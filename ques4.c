// wap to find the total no.of pairs in the array whose sum is equal to the given value x
# include<stdio.h>
//int main(){
    /*int n=12;
    int arr[8] = {1,2,3,4,5,6,7,8};
    int count =0;
    for(int i=0;i<8;i++){
        for(int j=i+1;j<8;j++){
        if(arr[i]+arr[j]==n){
            count ++;
            printf("(%d,%d)\n",arr[i],arr[j]);
        }
        else{
        }
    }
    }
    printf("%d",count);
    return 0;
}*/
// wap for triplets
/*int n=12;
    int arr[8] = {1,2,3,4,5,6,7,8};
    int count =0;
    for(int i=0;i<8;i++){
        for(int j=i+1;j<8;j++){
            for(int k=j+1;k<8;k++){
        if(arr[i]+arr[j]+arr[k]==n){
            count ++;
            printf("(%d,%d,%d)\n",arr[i],arr[j],arr[k]);
        }
        else{
        }
    }
}
    }
    printf("%d",count);
    return 0;
}*/
// wap to find the 2nd largest element of an array
//# include<limits.h>
int main(){
int arr[8] = {1,2,3,4,5,6,7,8};
int large=arr[0];
int slarge=arr[0];
for(int i=0;i<8;i++){
    if(large<arr[i]){
        large = arr[i];
        slarge=large;
    }
    else{
    }

//for(int i=0;i<8;i++){
    if(slarge>large){
        large = slarge;
    }
    else{

    }

}
//printf("%d",large);
printf("%d",slarge);
return 0;
}


/*#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int nums[n];
    for(int i=0;i<n;i++){
        scanf("%d",&nums[i]);
    }
    int target;
    scanf("%d",&target);
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if((nums[i]+nums[j])==target){
                printf("%d %d",i,j);
                return 0;
            }
        }
    }
    return 0;
}*/


/*#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int nums[n];
    for(int i=0;i<n;i++){
        scanf("%d",&nums[i]);
    }
    int maxsum=nums[0];
    int currsum= nums[0];
    for(int i=1;i<n;i++){
        if(currsum+nums[i]>nums[i])
            currsum=currsum + nums[i];
        else
            currsum=nums[i];
        if(currsum>maxsum)
            maxsum=currsum;
    }
    printf("%d",maxsum);
    return 0;
}
*/
/*# include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int nums[n];
    for(int i=0;i<n;i++){
        scanf("%d",&nums[i]);
    }
    int low=0,mid=0,high=n-1;

while(mid<=high){
    if(nums[mid]==0){
        int temp=nums[low];
        nums[low]=nums[mid];
        nums[mid]=temp;
        low++;
        mid++;
    }
    else if(nums[mid]==1){
        mid++;
    }
    else{
        int temp=nums[mid];
        nums[mid]=nums[high];
        nums[high]=temp;
        high--;
    }
}
for(int i=0;i<n;i++){
    printf("%d",nums[i]);
}
    return 0;
}*/
