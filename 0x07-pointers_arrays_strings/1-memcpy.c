/**
 * *_memcpy - returns a pointer to dest
 * @dest: the address of memory to print
 * @src: address of source character
 * @n: the size of the memory to print
 *
 * Return: dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{

        for(int i = 0; i <= n; i++)
        {
            *(dest+ i) = *(src + i);
        }
        return dest;
}
