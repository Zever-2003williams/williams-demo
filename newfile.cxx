#include<iostream>
using namespace std;
int main(){
    int c=1,p=1,N;
    printf("Where u want to stop with Natural number ");
    scanf("%d",&N);
    while (c<=N){
        p=p*c;     
        c++;
      
    }
  int  avg=p/N;
     printf("The product is %d\n",p);
     printf("The average is %d ",avg);
     return 0;
}