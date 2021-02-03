#include <string>

using namespace std;

void swap(int &x,int &y)
{   
    int s = x;
    x = y;
    y = s;
}

int main()
{
 int x = 10;
 int& y = x;
 int c = 20;
 cout << x << c << endl;
 swap (x,y);
 cout << x << c<< endl;
 return 0;
}
