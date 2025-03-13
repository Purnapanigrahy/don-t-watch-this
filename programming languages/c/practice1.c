# include<stdio.h>
int main() {
    int r,c,i,j;
    printf("enter the colomn : ");
    scanf("%d",& r);
    printf("enter the row : ");
    scanf("%d", & c );
    for (i=1;i<=c;i++){
        printf("\n");
        for(j=1;j<=r;j++){
            if (i==1||j==1||i==r||j==c){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
    }
    return 0;
}