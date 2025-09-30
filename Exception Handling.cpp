// Tanmay Ambudkar
#include<iostream>
using namespace std;

int main()
{
    float a, b, result;
    cout<<"Enter values of the first and second number : ";
    cin>>a>>b;
    try{
        if(b==0){
            throw  b;
        }
        else{
            result=a/b;
            cout<<"Answer = "<<result<<endl;
        }
    }
    catch(float n){
        cout<<"ERROR: Division by "<<n<<endl;
    }
}