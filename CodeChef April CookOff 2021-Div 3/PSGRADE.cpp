#include <iostream>
using namespace std;
bool check(int amin, int bmin, int cmin, int tmin, int a, int b, int c){
    int sum = a + b + c;
    if(a>=amin && b>=bmin && c>=cmin && sum>=tmin){
        return 1;
    }
    else{
        return 0;
    }
}
int main(){
    int t;
    cin>>t;
    int amin, bmin, cmin, tmin, a, b, c;
    while(t--){
        cin>>amin>>bmin>>cmin>>tmin>>a>>b>>c;
        if (check(amin, bmin, cmin, tmin, a, b, c)){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
}
