#include<stdio.h>
int main(){


// check prime number or not 

int n,count=0;
scanf("%d",&n);

for(int i = 2;i<n;i++){

    if(n%i==0){
        break;
        count++;
    }


}

if(count == 0){
    printf("Prime number");
}
else{
    printf("Not a prime number");
}









    return 0;
}