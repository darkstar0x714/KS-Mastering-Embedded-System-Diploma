/*
 * name : Lab_4_summation_for_input_num.c
 * Created by : Amir W. Fathy on 9/5/2022.
 * Distribution : c program make user enter number and program return the summation
*/

#include <stdio.h>

int main() {
    int n, sum = 0;
    printf("enter +ve integer number");
    scanf("%d", &n);
    for (int i = 0; i <= n; i++) {
        sum = sum + i;
    }
    printf("result is = %d", sum);
}

/*
//---------------------------------Another solution using gauss summation formula-------------------------------
// this solution is better in run time
#include <stdio.h>

int  main(){
    int n,sum=0;
    printf("enter +ve integer number");
    scanf("%d",&n);
    sum=(n*(n+1))/2;
    printf("result is = %d",sum);
}
*/
