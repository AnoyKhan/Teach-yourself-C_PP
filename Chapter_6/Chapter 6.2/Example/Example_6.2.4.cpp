// Overload + relative to coord class using references .
coord coord :: operator +( coord &ob2)
{
    coord temp ;
    temp .x = x + ob2 .x;
    temp .y = y + ob2 .y;
    return temp ;
}