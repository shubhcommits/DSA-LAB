#include <stdio.h>
int main() {
    int r1,r2;
    int c=0;
    scanf("%d",&r1);
    scanf("%d",&r2);
    for(int i=r1;i<=r2;i++){
        c=0;
        for(int j=1;j<=r2;j++){
            if(i%j==0){
                c++;
            }
        }
        if(c==2){
            printf("%d ",i);
        }
    }
    return 0;
}
