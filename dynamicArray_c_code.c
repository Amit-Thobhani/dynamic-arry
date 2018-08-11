#include <stdio.h>
#include <stdlib.h>

int arrayCreater(int n){

    int i,*p;
    p = (int*)malloc(n*sizeof(int));

    for(i=0;i<n;i++)
        scanf("%d",p+i);
    for(i=0;i<n;i++)
        printf("%d ",*(p+i));
    printf("\n");
    return p;
}

int main()
{   int n,i,a,b,j,i1;

    scanf("%d %d",&a,&b);
    printf("\na = %d and b = %d\n",a,b);
    int *arr[a];

    for(i=0;i<a;i++){
        scanf("%d\n",&n);
        arr[i] = arrayCreater(n);
    }

    for(i1=0;i1<b;i1++){
        scanf("\n%d %d ",&i,&j);
        printf("\n%d",arr[i][j]);
    }
    return 0;
}
