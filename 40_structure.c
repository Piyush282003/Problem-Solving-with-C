#include <stdio.h>

struct Student{
    int n;
    struct address{
        int add;
    }a;
};

int main(){
    // struct Student s;
    // scanf("%d",&s.n);
    // printf("The value is %d\n",s.n);
    // scanf("%d",&s.a.add);
    // printf("The value is %d\n",s.a.add);

    struct Student s[10];
    for(int i=0;i<3;i++){
        scanf("%d",&s[i].n);
        printf("The value is %d\n",s[i].n);
        scanf("%d",&s[i].a.add);
        printf("The value is %d\n",s[i].a.add);
    }
    return 0;
}