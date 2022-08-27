#include<iostream>
using namespace std;
//function for saydigit
void sayDigit(int n,string arr[])
{  
    if(n==0){           //base case
        return;
    }

    int digit = n%10; //to find remainder
    n=n/10;             //to remove last digit
    sayDigit(n,arr);
    cout<< arr[digit]<<" ";
}
int main(){
    string arr[10]={"zero","one","two","three","four","five", 
                    "six","seven","eight","nine"};
    int n;
    // cout<<"enter the value of n\n";
    cin>>n;
    
    sayDigit(n,arr);

    return 0;
}