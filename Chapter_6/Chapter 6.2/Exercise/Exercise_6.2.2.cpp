/*
 2. Why would the following be an inappropriate use of an overloaded operator?
*/
coord coord :: operator %( coord ob)
{
double i;
cout << " Enter a number : ";
cin >> i;
cout << " root of " << i << " is ";
cout << sqrt (i);
}
 /*The overloading of the % operator is inappropriate because its operation is unrelated to
the traditional use.*/