#include <stdio.h>
#include "libft.h"
#include <unistd.h>

int ft_invalid(const char *str)
{
    int i;

    i = 0;
    printf("Zashel\n");
    while (str[i])
    {
        if (str[i] != ' ' && (str[i] < '0' || str[i] > '9'))
            return (1);
        i++;
    }
    return (0);
}


int ft_count_numbers(const char *str)
{
    int i;
    int numbers;

    i = 0;
    numbers = 0;

    while (str[i]) {
        while (str[i] == ' ') {
            i++;
        }
        if (str[i] >= '0' && str[i] <= '9') {
            numbers++;
            while (str[i] >= '0' && str[i] <= '9') {
                i++;
            }
        }
    }
    return (numbers);
}

int some_func(char *argv[]) {

    int i;
    int length;
    int arg_amount;

    i = 1;
    length = 0;
    arg_amount = 0;
    // пробелы, табы и \n игнорим
    // остальные символы невалидны
//    char *stack_1;
//    stack_1 = (char *)malloc(sizeof(char) * ft_strlen());

    while (argv[i]) {
        if (ft_invalid(argv[i])) {
            write(1, "Invalid argument\n", 17);
            exit(1);
        } else {
            arg_amount += ft_count_numbers(argv[i]);
        }
        ++i;
    }
    printf("Vot eta arg_amount: %d\n", arg_amount);
    return (0);
}

int main(int argc, char *argv[]) {
    printf("Hello, World!\n");
    some_func(argv);
    argc = 1;
    return 0;
}
