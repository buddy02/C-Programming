#include<iostream>
using namespace std;
int main() {
    int a,b,n,i;
    cin>>a>>b;
    for(n=a;n<b;n++) {
        for(i=2;i<=n;i++) {
            if(n%i==0) {
                break;
            }             
        }
        if(i==n)
            cout<<n<<endl;
    }

}