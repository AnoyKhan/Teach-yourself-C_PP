// Stopwatch emulator
# include <iostream>
# include <ctime>
using namespace std;
class stopwatch
{
    double begin , end;
    public :
    stopwatch ();
    ~ stopwatch ();
    void start ();
    void stop ();
    void show ();
};
stopwatch :: stopwatch ()
{
    begin = end = 0.0;
}
stopwatch ::~ stopwatch ()
{
    cout << " Stopwatch object being destroyed ... ";
    show ();
}
void stopwatch :: start ()
{
    begin = ( double ) clock () / CLOCKS_PER_SEC ;
}
void stopwatch :: stop ()
{
    end = ( double ) clock () / CLOCKS_PER_SEC ;
}
void stopwatch :: show ()
{
    cout << " Elapsed time : " << end - begin ;
    cout << "\n";
}
int main ()
{
    stopwatch watch ;
    long i;
    watch . start ();
    for (i=0; i <320000; i++); // time a for loop
    watch . stop ();
    watch . show ();
    return 0;
}