#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, A[100],i, temp=0,j,k=0;

    cout<<"size of array? :";
    cin>>n;

    for(i=1; i<=n; i++){
        cin>>A[i];
    }

    for(i=1; i<=n; i++){
        for(j=i; j<=n; j++){
        if(A[i] < A[2*j] && n>=2*j){
            temp=A[i];
            A[i] = A[2*j];
            A[2*j]=temp;
        }
         if(A[i] < A[2*j+1] && n>=(2*j+1)){
            temp=A[i];
            A[i] = A[2*j+1];
            A[2*j+1]=temp;
        }
        }
    }
    cout<<"Enter k: ";
    cin>>k;
    for(i=1; i<=k; i++){
        cout<<A[i]<< " ";
    }

    cout<<endl;
}
