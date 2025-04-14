/* Write a program that inputs the number of hours that an employee works and the em-
ployee’s wage. Then display the employee’s gross pay. (Be sure to prompt for input.)
*/
#include <iostream>
using namespace std;
int main()
{
    int hours, wage, total;
    cout << "Please enter the numbers of hours you have work: " << endl;
    cin>>hours;
    cout << "Please enter the wage: " << endl;
    cin>>wage;
    total = hours * wage;
    cout << "The total wage is: " << total << endl;

}