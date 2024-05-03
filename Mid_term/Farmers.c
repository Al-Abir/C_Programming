#include <stdio.h>

int main() {
    int t;
    scanf("%d",&t);
    for(int i=0; i<t; i++)
    {
       int w1,w2,d;
       scanf("%d %d %d",&w1, &w2,&d);

       int total_worker = w1+w2;
       int new_days = (w1*d)/total_worker;
       
       int diff = d-new_days;
       printf("%d\n",diff);
    
    }
    return 0;
}