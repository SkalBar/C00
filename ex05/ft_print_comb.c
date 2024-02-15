#include <unistd.h>

void	ft_print_comb(void)
{
	int a;
    int b;
    int c;
   	
    a = '0';
    while(a <= '7')
    {
    	b = a + 1;
        while(b <= '8')
        {
        	c = b + 1;
            while(c <= '9')
            {
            	write(1, &a, 2);
                write(1, &b, 2);
                write(1, &c, 2);
                if(a != '7')
                	write(1, ", ", 2);
           		c++;
            }
       	b++;
        }
   	a++;    
    }
}

int	main(void)
{
	ft_print_comb();
}