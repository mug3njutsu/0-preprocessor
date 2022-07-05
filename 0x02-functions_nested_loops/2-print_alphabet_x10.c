/**
 * print_alphabet - print alphabets "a..z"
 *
 * Return: Always 0 -> (Success)
 */

void print_alphabet_x10(void)
{
    int a, i;

    for (a = 0; a < 10; a++)
    {
        for (i = 'a'; i <= 'z'; i++)
        {
            _putchar(i);
        }
        _putchar('\n');
    }
}
