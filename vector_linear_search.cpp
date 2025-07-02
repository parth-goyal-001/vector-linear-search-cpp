//linear_linear_search:
#include<iostream>
#include<vector>
using namespace std;
int main(){
    cout<<"enter the size of the vector : ";
    int n,m;
    bool flag = false;
    cin>>n;   //taking input of the size of the vector
     vector<int>vec(n);
     for(int i = 0;i<n;i++){
         cin>>vec[i];  // taking input of every vector element
     }
     cout<<"enter the number : "; // which number we find
     cin>>m;
     for(int j = 0;j<n;j++){
         if(m==vec[j]){ // check the condition whether number in the vector or not 
             flag = true;
             cout<<"value of "<<m<<" at "<<j<<" indexing "<<"\n";
         }
     }
     if(flag == false){
         cout<<"-1";  // if number not present in the vector
     }
     return 0;
}
