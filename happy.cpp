#include <iostream>
#include <cstdlib>
#include<exception>
using namespace std;
void myhandler()
{
    cout<<"\n New terminator function defined by user";
    exit(0);
}
int main ()
{
    set_terminate(myhandler);
    try 
    {
        cout<<"inside try block";
        throw 200;
    }
    catch (char c)
    {
        cout<<"Inside the caught block";
    }
    return 0;
}