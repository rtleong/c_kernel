#include <cstdlib>

void lsh_loop(void)
{
    char *line;
    char **args;
    int status;

    do {
        printf("> ");
        line = lsh_read_line();
        args = lsh_split_line(line);
        status = lsh_exectue(args);

        free(line);
        free(args);
    }   while (status);
}

int main(int argc, char **argv)
{
    //Load config files
    
    lsh_loop();

    return EXIT_SUCCESS;
}
