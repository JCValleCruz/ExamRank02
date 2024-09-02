
#include <unistd.h>

void    ft_hide (char *s1, char *s2)
{
    int c;
    int i;

    c = 0;
    i = 0;
    while (s2[i] != '\0')
    {
        if (s1[c] == s2[i])
        {
            c++;
        }
        i++;
    }

    if (s1[c] == '\0')
        {
            write (1,"1",1);
            write (1, "\n",1);
            //return (1);
        }
    else
    {
        write (1,"0",1);
        write (1, "\n",1);
    }
    //return (0);
 
    
}

int main (int argc, char **argv)
{
    if (argc!= 3)
    {
        write(1,"\n",1);
        return (-1);
    }
    ft_hide(argv[1], argv[2]);
    return 0;
}