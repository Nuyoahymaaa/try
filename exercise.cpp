#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

double len(double x1,double y1,double x2,double y2){
    return sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
}//

double dis(double x1,double y1,double x2,double y2,double a1,double b1){
    if(len(x1,y1,x2,y2)==0) return sqrt((x1-a1)*(x1-a1)+(y1-b1)*(y1-b1));
    double t=((a1-x1)*(x2-x1)+(b1-y1)*(y2-y1))/(len(x1,y1,x2,y2)*len(x1,y1,x2,y2));
    if(t<0) return len(x1,y1,a1,b1);
    if(t>1) return len(x2,y2,a1,b1);
    if(t>=0 && t<=1){
        return len(a1,b1,x1+(x2-x1)*t,y1+(y2-y1)*t);
    }
}
int main(){
    double x1,y1,x2,y2,a1,b1;
    cin>>x1>>y1>>x2>>y2>>a1>>b1;
    cout<<dis(x1,y1,x2,y2,a1,b1)<<endl;
}