#include <stdio.h>
#include "libft.h"
#include <unistd.h>

int some_func(int argc, char *argv[]) {

    int i;
    int j;
    int length;
    int arg_amount;
    int flag;

    i = 0;
    length = 0;
    arg_amount = 0;
    // пробелы, табы и \n игнорим
    // остальные символы невалидны
//    char *stack_1;
//    stack_1 = (char *)malloc(sizeof(char) * ft_strlen());

    while (argv[++i]) {
        j = 0;
        flag = 0;
        while (argv[i][j]) {

//            if (argv[i][j] == '\t' || argv[i][j] == ' ' || argv[i][j] == '\0')
//            {
//                j++;
//                flag = 1;
//                printf("текущий символ:%c\n", argv[i][j]);
//            }
//            else if (argv[i][j] < 48 || argv[i][j] > 57) {
//                printf("текущий символ2:%c\n", argv[i][j]);
//                write(1, "Huita\n", 6);
//                exit(1);
//            }
            while (argv[i][j] == '\t' || argv[i][j] == ' ')
            {
                j++;
                flag = 1;
                printf("текущий символ:%c\n", argv[i][j]);
            }
            if (argv[i][j] < 48 || argv[i][j] > 57) {
                printf("текущий символ2:%c\n", argv[i][j]);
                write(1, "Huita\n", 6);
                exit(1);
            }
            else if (flag == 1 && (argv[i][j] >= 48 && argv[i][j] <= 57)){
                arg_amount++;
                flag = 0;
            }
            j++;
        }
        arg_amount++;
    }
    printf("Vot eta length: %d\n", length);
    printf("Vot eta argc: %d\n", argc - 1);
    printf("Vot eta arg_amount: %d\n", arg_amount);
    return (0);
}

int main(int argc, char *argv[]) {
    printf("Hello, World!\n");
    some_func(argc, argv);
    return 0;
}
