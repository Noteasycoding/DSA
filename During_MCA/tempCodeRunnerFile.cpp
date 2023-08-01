void swap_values(int *x, int *y)
{
    int t = 0;
    cout << "X=" << *x << " Y=" << *y << endl;
    t = *x;
    *x = *y;
    *y = t;
    cout << "Now X=" << *x << " Y=" << *y << endl;
}
