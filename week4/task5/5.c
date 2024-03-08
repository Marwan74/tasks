<<<<<<< HEAD
/*Write a program that reads a 5x5 array of integers and then prints the row sums and the
sum of the columns:
Ex:
Enter row 1 : 8 3 9 0 10
Enter row 2 : 3 5 17 1 1
Enter row 3 : 2 8 6 23 1
Enter row 4 : 15 7 3 2 9
Enter row 5 : 6 14 2 6 0

Row Totals : 30 27 40 36 28
Columns Totals : 34 37 37 32 21*/
#include <stdio.h>
int main(){
    int m,n,i,j;
    printf("enter number of rows : ");
    scanf("%d",&m);
    printf("enter number of columns : ");
    scanf("%d",&n);
    int arr[m][n];
    for(i=0;i<m;i++){
        printf("enter row %d  \n",i+1);
        for(j=0;j<n;j++){
            scanf ("%d",&arr[i][j]);
        }
    }
    int rsum =0;
    printf("Row Total : ");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            rsum+=arr[i][j];
        }
        printf("%d ",rsum);
        rsum =0;
    }
    int csum=0;
    printf(" \n Column Total: ");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            csum+=arr[i][j];
        }
        printf("%d ",csum);
        csum =0;
    }
    return 0;

=======
/*Write a program that reads a 5x5 array of integers and then prints the row sums and the
sum of the columns:
Ex:
Enter row 1 : 8 3 9 0 10
Enter row 2 : 3 5 17 1 1
Enter row 3 : 2 8 6 23 1
Enter row 4 : 15 7 3 2 9
Enter row 5 : 6 14 2 6 0

Row Totals : 30 27 40 36 28
Columns Totals : 34 37 37 32 21*/
#include <stdio.h>
int main(){
    int m,n,i,j;
    printf("enter number of rows : ");
    scanf("%d",&m);
    printf("enter number of columns : ");
    scanf("%d",&n);
    int arr[m][n];
    for(i=0;i<m;i++){
        printf("enter row %d  \n",i+1);
        for(j=0;j<n;j++){
            scanf ("%d",&arr[i][j]);
        }
    }
    int rsum =0;
    printf("Row Total : ");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            rsum+=arr[i][j];
        }
        printf("%d ",rsum);
        rsum =0;
    }
    int csum=0;
    printf(" \n Column Total");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            csum+=arr[i][j];
        }
        printf("%d ",csum);
        csum =0;
    }
    return 0;

>>>>>>> 5cf71c25eee0c32fe2e8c02d8ef3d153cd705752
}