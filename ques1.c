# include<stdio.h>
int main(){
   /* int marks[10] = {95,90,31,25,100,50,65,89,97,30};
    int x;
    for(int i=0;i<=9;i++){
        if(marks[i]<35){
            printf(" %d ",i);
        }
        else{
        }
    }
    return 0;
}*/
// by taking input from user 
int marks[10];
for (int i=0;i<10;i++){
    int x=i+1;
    printf("enter the element number %d\n",x);
    scanf("%d",&marks[i]);
}
for(int i=0;i<10;i++){
    printf("%d",marks[i]);
}
for(int i=0;i<10;i++){
    if(marks[i]<35){
        printf(" %d ",i);
    }
    else{
    }
}
return 0;
}