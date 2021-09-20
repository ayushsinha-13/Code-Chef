#include<stdio.h>
#include<stdlib.h>

struct emp
{
    int eno;
    char ename[10];
    float sal;
};

void linkfloat()
{
    float a=0,*b;
    b=&a;
    a=*b;
}

int main()
{
    struct emp *e;
    int n,i;
    printf("\nEnter the Size \n");
    scanf("%d",&n);

    e=(emp*)calloc(n,sizeof(struct emp));

    printf("\nEnter the Eno,EName, ESal \n");

    for(i=0;i<n;i++)
    {
        scanf("%d %s %f",&e[i].eno,&e[i].ename,&e[i].sal);
    }
    printf("\n\nDetails of Employee \n\n");
    for(i=0;i<n;i++)
    {
        printf("\n\n%d\t%s\t%f",e[i].eno,e[i].ename,e[i].sal);
    }
}