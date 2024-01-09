
#include <iostream>


int SimultaneousFunction(int a, int b, int c, int d, int e, int f) {
    int x=0,y=0;
    y = (a*f-d*c)/(a*e - b*d);
    if(a != 0){
        x = (c-b*y)/a;
    }
    else{
        x = (f-e*y)/d;
    }
    std::cout<<x<<" "<<y;

    return 0;
}
int main() {
    int a,b,c,d,e,f;
    std::cin >> a>>b>>c>>d>>e>>f;
    SimultaneousFunction(a, b, c, d, e, f);
    return 0;
}
