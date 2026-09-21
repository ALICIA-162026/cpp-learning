#include<iostream> 
using namespace std; 

int main()
{ 
    int n ; 
    float number,sum=0,avg=0; 
    
    cout << "Enter the number of values to find the average of: "; 
    cin >> n; 
    
    if(n<=0) 
        cout << "Please enter a value greater than 0."; 
    else 
        cout << "Enter " << n << " numbers: "; 
        
    for(int i=0;i<n;i++)
    { 
        cin >> number; 
        sum += number; 
    } 
    
    avg = sum / n; 
    cout << "The average of the " << n << " numbers is " << avg; 
    
    return 0; 
}
