void f1 ()
{
    int i;
    for (i=0; i <10; i++)
        cout << i;
}
/*The function might not be able to be in-lined because it contains a for loop. Some
compilers will not in-line functions containing loops.*/