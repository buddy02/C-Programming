#include<iostream>
using namespace std;
int main()
{
    int n,temp;
    cin >> n;
    int a[n][n];
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++)
            cin >> a[i][j];
    }
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            if(i>j) {
                temp=a[i][j];
                a[i][j]=a[j][i];
                a[j][i]=temp;
            }
        }        
    }
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++)
            cout << a[i][j] << " ";
        cout << "\n";
    }
}