// wap to print numbers from 1 to 10 using while loop 
# include <stdio.h>
int main (){
   /* int i=0;
    while(i<=10){
        printf("%d ",i);
        i++;
    }*/
   // garbage value de deta hai compiler jab ham variables ki value declare nhi karte 
  /* int j;
    printf("\n%d",j);
   while(j<=10){
    //printf("\n%d",j);
    j=j+1;
   }
    return 0;
}*/
/*int x=4,y=3,z;
z=x-- -y;
printf("\n %d %d %d",x,y,z);
return 0;
}*/
/*int i;
while(i=10){
    printf("\n%d",i);
    i=i+1;
}
    return 0;

}*/

int x=4,y=0,z;
while (x>=0){
    x--;
    y++;
    if (x==y){
        continue;
    }
    else{
        printf("\n %d %d",x,y);
    }
}
return 0;
}
