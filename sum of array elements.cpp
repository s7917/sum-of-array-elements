//--------------------------Sum of Array elements-------------------

#include<iostream>
using namespace std;

int main(){
    int A[7]={4,8,6,9,5,2,7};
    int sum=0;
    for(int i=0 ; i<7 ;i++){
        sum=sum+A[i];
    }
       
     cout<<sum<<endl;
    
    return 0;
}
