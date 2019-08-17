// Example program
#include <iostream>
#include <string>
struct vector {
    int x,y,z;
};
struct matrix {
    int a1,a2,a3;
    int b1,b2,b3;
    int c1,c2,c3;
};
matrix m={1,2,3,4,5,6,7,8,9};
vector V={1,2,3};

vector matTimesVec(matrix m,vector v){
    vector w;
    
    w.x=m.a1*v.x+m.a2*v.y+m.a3*v.z;
    w.y=m.b1*v.x+m.b2*v.y+m.b3*v.z;
    w.z=m.a1*v.x+m.a2*v.y+m.a3*v.z;
    return(w);
}
int main(){
    vector u;

    u=matTimesVec(m,V);
    
    printf("u = {%d,%d, %d}",u.x,u.y,u.z);
}
