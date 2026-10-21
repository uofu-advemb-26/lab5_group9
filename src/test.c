int main()
{
    for (volatile int i = 0; i < 10000; i++);
    return 0;
}