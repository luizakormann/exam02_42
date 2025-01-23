int is_power_of_2(unsigned int n)
{
    int num;

    num = n;
    if (num % 2 == 0 && num > 0 || num == 1)
        return (1);
    else
        return (0);
}
