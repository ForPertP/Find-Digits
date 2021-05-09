int findDigits(int n)
 {
    int number = n;
    int number_of_digits = 0;

    while (n != 0)
    {
        int digit = n % 10;
        n = n / 10;

        if (digit != 0)
        {
            if ((number % digit) == 0)
            {
                ++number_of_digits;
            }
        }
    }

    return number_of_digits;
}
