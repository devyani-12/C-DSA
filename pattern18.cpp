
#include <iostream>

using namespace std;

int main()
{
    char ch='A';
    int n ;
    cin>>n;
    
    for(int i=0;i<n;i++){
        ch=65+i;
        for(int j=0;j<=i;j++){
            cout<<(char)ch<<" ";
            ch++;
        }
        cout<<endl;
    }
    
    
    
    return 0;
}