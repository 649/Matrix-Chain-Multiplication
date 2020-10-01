#include<bits/stdc++.h>
using namespace std;
void printParenthesis(int i, int j, int n, 
                      int *bracket, char &name) 
{ 
    if (i == j) 
    { 
        cout << name++; 
        return; 
    } 
  
    cout << "(";  
    printParenthesis(i, *((bracket+j*n)+i), n, 
                     bracket, name); 
    printParenthesis(*((bracket+j*n)+i) + 1, j, 
                     n, bracket, name); 
    cout << ")"; 
} 
void matrixChain(int p[],int n)
{
    int m[n][n]={0};
    for(int L=1;L<n-1;L++)
    {
        for(int i=1;i<n-L;i++)
        {
            int j=i+L;
            int min=INT_MAX;
            for(int k=i;k<=j-1;k++)
            {
                int q=m[i][k]+m[k+1][j]+p[i-1]*p[j]*p[k];
                if(q<min)
                {
                    min=q;
                    m[j][i]=k;
                }
                
            }
            m[i][j]=min;
        }
    }
    char name = 'A'; 
  
    cout << "Optimal Parenthesization is: "; 
    printParenthesis(1, n-1, n, (int *)m, name); 
    cout<<"\nOptimal Cost is :"<<m[1][n-1];
}

#include<bits/stdc++.h>
using namespace std;
void matrix(int p[],int n)
{int m[n][n]={0};
    for(int d=1;d<n-1;d++)
    {
        for(int i=1;i<n-d;i++)
        {
            int j=i+d;
            int min=INT_MAX;
            for(int k=i;k<=j-1;k++)
            {
                int q=m[i][k]+m[k+1][j]+p[i-1]*p[j]*p[k];
                if(q<min)
                {
                    min=q;
                }
            }
            m[i][j]=min;
        }
    }
    cout<<m[1][n-1];
}
int main()
{
    int arr[]={40,20,30,10,30};
    int n=sizeof(arr)/sizeof(arr[0]);
    matrix(arr,n);
    return 0;
}