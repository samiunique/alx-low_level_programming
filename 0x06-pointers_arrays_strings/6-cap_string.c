/**
 * cap_string - a function that capitalizes
 *              all words of a string
 *
 * @s: pointer to char input array
 *
 * Return: @s
*/

char *cap_string(char *s)
{
	int i;
	bool capitalize_next = true;

    for (i = 0; str[i] != '\0'; i++)
    {
        if (capitalize_next && (str[i] >= 'a' && str[i] <= 'z'))
        {
            str[i] = str[i] - 'a' + 'A';
        }

        capitalize_next = false;

        if (is_separator(str[i]))
        {
            capitalize_next = true;
        }
    }

    return str;
}
