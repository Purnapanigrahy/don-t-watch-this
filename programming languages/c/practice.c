# include<stdio.h>
int main() {
    int r,c,i,j;
    printf("enter the row : ");
    scanf("%d",& r);
    printf("enter the colomn : ");
    scanf("%d", & c );
    for (i=1;i<=r;i++){
        for(j=1;j<=c;j++){
        printf("*");
        }
        printf("\n");
    }
    return 0;
}