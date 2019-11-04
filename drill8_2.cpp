#include "std_lib_facilities.h"


void swap_v(int a,int b)
{
    int temp; temp = a, a=b; b=temp;

}

void swap_r(int& a, int& b){
     int temp; temp = a; a = b; b = temp;
}
//void swap_cr(const int& a, const int& b)
//{
  //  int temp; temp = a; a = b; b = temp;              nem müködik
//}



int main()
{
int x = 7;
int y =9;
swap_r(x,y);
swap_v(7,9);   //itt kicsereli a kettot
const int cx = 7;
const int cy = 9;
swap_v(cx,cy);  //nem csereli ki mert a függvenyben csak sima int van
swap_v(7.7,9.9);
double dx = 7.7;
double dy = 9.9;
swap_v(dx,dy);    //nem csereli ki
swap_v(7.7,9.9);

cout<<"x= "<<x<<endl;
cout<<"y= "<<y<<endl;
cout<<endl;
cout<<"cx="<<cx<<endl;
cout<<"cy="<<cy<<endl;
cout<<endl;
cout<<"dx="<<dx<<endl;
cout<<"dy="<<dy<<endl;

}
