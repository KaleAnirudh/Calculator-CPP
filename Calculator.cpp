#include <iostream>

using namespace std;

int main(){
    int n1,n2;
    char op;
    while(1){
        cout<<"Enter operator from (+, -, *, /, %)"<<endl;
        cin>>n1>>op>>n2;
        switch(op){
            case '+': cout<<n1 + n2<<endl;
                break;
        
            case '-': cout<<n1 - n2<<endl;
                break;

            case '*': cout<<n1 * n2<<endl;
                break;
        
            case '/': cout<<n1/n2<<endl;
                break;
        
            case '%': cout<<n1 % n2<<endl;
                break;
        
            default: cout<<"Invalid Operator\n";
                break;
        }
        int option;
        cout<<"\n\n1. Go to next operation\n2. Exit\n";
        cin>>option;
        cout<<"\n\n";
        if(option == 2) break;
    }
    return 0;
}