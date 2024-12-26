#include <iostream>
using namespace std;
int max(int x,int y){
if(x>y){
    return x;
}
else{
    return y;
}
}
int knap(int c,int n,int p[],int wt[]){

int k[n+1][c+1];

for(int item=0;item<=n;item++){
    for(int weight=0;weight<=c;weight++){

        if(item==0 || weight==0){
            k[item][weight]=0;
        }
        else if(wt[item]<=weight){
k[item][weight]=max(k[item-1][weight],p[item]+k[item-1][weight-wt[item]]);
        }
        else{
            k[item][weight]=k[item-1][weight];//ager velur man
        }
    }
}
 return k[n][c];
}

int main(){

    int capacity;
    cout<<"Insert the capacity of the bag: ";
    cin>>capacity;

    int n;
    cout<<"Insert the number of item: ";
    cin>>n;
    int p[]={0,2,3,1,4};
    int w[]={0,3,4,6,5};

    int maxprofit=knap(capacity,n,p,w);
    cout<<"\n-------------------------------------------------------------\n";
    cout<<"Maximum profit :"<<maxprofit;
}
