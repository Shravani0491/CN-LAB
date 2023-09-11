#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<time.h>
#define bkt 512

void bktinp(int a,int b){
    if(a>bkt){
        printf("Bucket overflow");
    }

    else{
        usleep(500000);
        while(a>b){
            printf("Outputted %d \n",b);
            a-=b;
            usleep(500000);
        }

        if(a>0){
           printf("Outputted %d \n",a);
        }
    }
}

void main(){
    int pkt,i,op;
    srand(time(NULL));
    printf("Enter op rate \n");
    scanf("%d",&op);
    for(i=1;i<=5;i++){
       usleep(rand()%1000000);
       pkt=rand()%1000;
       printf("Pkt size= %d ",pkt);
       bktinp(pkt,op);

    }

}
