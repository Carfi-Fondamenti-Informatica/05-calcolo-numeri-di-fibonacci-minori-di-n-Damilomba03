#include <iostream>
using namespace std;

int main(){
    int n;
    int p=1,s=1;
    cin>>n;
    cout<<p<<endl<<s<<endl;
    int i=3;
    while((i++<=n)&&((p+s)<=n))
        {
            cout<<p+s<<endl;
            if(p<s)
            {
                p=s+p;
            }
            else
            {
               s=p+s;
            }
        }
    return 0;
}
