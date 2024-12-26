#include <bits/stdc++.h>
using namespace std;


int main(){
int n;
cout<<"Enter array size :";
cin>>n;
int arra[n];

for(int i=0;i<n;i++){
cout<<"enter array element :";
cin>>arra[i];
}
cout<<"Enterd array eliment\n";
for(int i=0;i<n;i++){
    cout<<arra[i];
}

int s;
cout<<"search value :";
cin>>s;
int h=n,l=0;
while(l<=h){
int mid=(l+h)/2;
if(s==arra[mid]){
cout<<"found";
break;
}
if(s< arra[mid]){
h=mid-1;
}
if(s> arra[mid]){
l=mid+1;
if(l>h){
    cout<<"not found";
}

}
}
}
