#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int q; 
    scanf("%d", &q);
    for(int a0 = 0; a0 < q; a0++){
        int n; 
        scanf("%d", &n);
        int *a = malloc(sizeof(int) * n);
        for(int a_i = 0; a_i < n; a_i++){
           scanf("%d",&a[a_i]);
        }
        // Write Your Code Here
        int flag=0,temp;
        for(int i=0;i<n-1;i++){
            if(abs(a[i]-a[i+1])==1 && a[i]>a[i+1]){
                temp = a[i];
                a[i] = a[i+1];
                a[i+1] = temp;
            }
            if(a[i]>a[i+1]){
                flag=1;
                break;
            }
        }
        if(flag==0){
            printf("Yes\n");
        }else{
            printf("No\n");
        }
    }
    return 0;
}

