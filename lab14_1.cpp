#include <iostream>
#include <cmath>
using namespace std;

void stat(const double[],int,double[]);

int main(){
    double A[] = {1.2,3.5,6.9,7.8,12.5,0.5};
    int N = sizeof(A)/sizeof(A[0]);
    double B[6];
    stat(A,N,B);
    cout << "Arithmetic Mean = " << B[0];
    cout << "\nStandard Deviation = " << B[1];
    cout << "\nGeometric Mean = " << B[2];
    cout << "\nHarmonic Mean = " << B[3];
    cout << "\nMax = " << B[4];
    cout << "\nMin = " << B[5];
    return 0;
}

void stat(const double A[], int N, double B[]){
    
    double summ;
    for(int i=0;i<N;i++){
        summ += A[i];
        B[0] = summ / N;
    } 
  
    double sum;
    for(int i=0;i<N;i++){
        sum += pow(A[i]-B[0],2);
        B[1] = pow(sum/N,0.5);
    }
    
    double geo =1;
    for(int i=0;i<N;i++){
        geo *= A[i];
        B[2] = pow(geo,(1.00/N));
    }

    double har;
    for(int i=0;i<N;i++){
        har += 1/A[i]; 
        B[3] = N / har;
    }
    
    double max = A[0],min = A[0];
    for(int i=1;i<N;i++){
        if(A[i]>max)  max=A[i];
        B[4] = max;
        
        if(A[i]<min)  min=A[i];
        B[5] = min;
    }
     
    
}