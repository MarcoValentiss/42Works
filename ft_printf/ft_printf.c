#include <stdarg.h>
#include <unistd.h>

int   ft_print_char(int a)
{
    write(1, &a, 1);
}

void    ft_formats(va_list args, const char form)
{
    int length;
    length = 0;

    if(form == 'c')
        length += ft_print_char(va_arg(args, char));
    else if(form == 's')
       // length += ft_putstr()??
    else if(form == 'p')
        // length += putnbr_base??
    else if(form == 'd')
        //length += ft_putnbr??
    else if(form == 'i')
        //length += ft_putnbr??
    else if(form == 'u')
        //length += ft_putnbr??
    else if(form == 'x' || 'X')
        //length += ft_putnbr_base??
    else if(form == '%')
        length += ft_print_char('%');
    
    
    

}

int ft_printf(const char *str, ...)
{
    int i;
    int length;
    va_list args;

    i = 0;
    length = 0;

    va_start(args, str);

    while(str[i])
    {
        if(str[i] == '%')
        {
            // Format ne ise onu yazdıracak(i+1 = %den sonra gelen kararter) ve argumanlarda sonuna ilerletecek. ve i+
        }
        else
        {
             length += ft_print_char(str[i]);
             i++;
        } 
    }
    va_end(args);

}