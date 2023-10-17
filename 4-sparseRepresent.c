#include<stdio.h>
#include<stdlib.h>
struct Elements{
    int i;
    int j;
    int x;
};
struct Sparse{
    int m;
    int n;
    int num;
    struct Elements *e;
};
void create(struct Sparse *s,int A1[100][100],int m,int n){
    s->m=m;
    s->n=n;
    s->num=0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(A1[i][j]!=0){
                s->num++;
            }
        }
    }
    s->e=(struct Elements*)malloc(s->num* sizeof(struct Elements));
    int k=0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(A1[i][j]!=0){
                s->e[k].i=i;
                s->e[k].j=j;
                s->e[k].x=A1[i][j];
                k++;
            }
        }
    }
}
void Display(struct Sparse *s){
    printf("%d %d %d\n",s->m,s->n,s->num);
    for(int i=0;i<s->num;i++){
        printf("%d %d %d\n",s->e[i].i,s->e[i].j,s->e[i].x);
    }
}
int main(){
    // struct Sparse s;
    // Create(&s);
    // free(s.e);
    // return 0;
    struct Sparse s;
    int m,n;
    scanf("%d",&m);
    scanf("%d",&n);
    int A1[100][100];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&A1[i][j]);
        }
    }
    create(&s,A1,m,n);
    Display(&s);
    free(s.e);
    return 0;
}