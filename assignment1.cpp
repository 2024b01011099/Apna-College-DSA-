#include <iostream>
using namespace std;
int main() {
    //Area of square
    int n; //n=side
    cout<<"Enter the side: "<<endl;
    cin>>n;
    cout<<"The Area of square= "<<n*n<<endl;

    //simple interest
    int p,r,t;
    cout<<"enter  the principal:";
    cin>>p;
    cout<<"enter the rate:";
    cin>>r;
    cout<<"enter the time: ";
    cin>>t;
    cout<<(p*r*t)/100<<endl;

    //Area of the circle
    int R;
    cout<<"enter the radius:";
    cin>>R;
    cout<<"Area of the circle:"<<3.14*R*R;

    return 0;
}