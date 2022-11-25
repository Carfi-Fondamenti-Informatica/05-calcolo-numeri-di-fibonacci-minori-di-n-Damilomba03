#include <iostream>
using namespace std;
int main(){
    int n=0;
    int p=1;
    int s=1;
    cin>>n;
        cout<<p<<endl<<s<<endl;
        int i=3;
        while(i++ <=(n-1)){
            cout<<p+s<<endl;
            if(p<s){
                p+=s;
            }
            else {
                s+=p;
            }
        }

    return 0;
}
