#include <iostream>
using namespace std;
int main()
{
    int seconds=5000, Hours, Minutes, Seconds;
    
    Hours=seconds/3600;
    Minutes=seconds/60;
    Seconds=seconds%60;
    
    cout<<"TOTAL HOURS = "<<Hours<<endl;
    cout<<"TOTAL MINUTES = "<<Minutes<<endl;
    cout<<"TOTAL SECONDS = "<<Seconds<<endl;
    
    return 0;
}
