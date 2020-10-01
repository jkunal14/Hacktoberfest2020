#include <stdio.h>

int maximum(int A[], int n){
    int mx = A[0];           
    for (int i = 1; i < n; i++)
        if(mx < A[i])
            mx = A[i];
    return mx;
}

int minimum(int A[], int n){
    int mn = A[0];
    for (int i = 1; i < n; i++)
        if(mn > A[i])
            mn = A[i];
    return mn;
}

int main(){
    int n;
    cin>>n;
    int A[n]={};                //If one wishes to input his/her array
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    
    int min = minimum(A, size);
    // printf("%d\n",min);
    int max = maximum(A, size);
    // printf("%d\n",max);
    int sum = min + max;
    printf("%d",sum);
    return 0;
}
