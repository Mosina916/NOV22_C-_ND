#include <iostream>
using namespace std;
void mergetwosortedarray(int a[7],int b[3],int m ,int n){
    int i=m-1;
    int j=n-1;
    int k=m+n-1;

    // loop
    while(i>=0 and j>=0){
         if(a[i]>b[j]){
        a[k]=a[i];
        i--;
        k--;
    }
    else{
        a[k]=b[j];
        j--;
        k--;
    }

    }
    // dusri array ko copy
    while(j>=0){
        a[k]=b[j];
        j--;
        k--;
    }
}
int main() {
    int a[7]={2,6,9,11};
    int b[3]={3,5,7};
    // int a[10]={2,2,2,2,6,9,11};
    // int a[6]={5,6,7};
    //  int b[3]={1,2,3};


    int m=4;
    int n=3;

    mergetwosortedarray(a,b,m,n);
    // a=2,3,5,6,7,9,11
    // b=3 5 7
    for(int i=0;i<=m+n-1;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;



    return  0;

}
