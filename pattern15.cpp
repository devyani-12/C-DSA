#include <iostream>

using namespace std;

int main()
{
    
    int n;
    cin>>n;
    
   // char ch='A';
    
    for(int i=0;i<=n;i++){
          int ch=65+i;
        for(int j=1;j<=n;j++){
            cout<<(char)ch;
            ch++;
        }
         
        cout<<endl;
    }

    return 0;
}
