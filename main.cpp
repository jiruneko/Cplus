#include <stdio.h>

int main()
{
    if (FILE* fp = fopen("test.txt", "w")) {
        for (int i = 1; i < 11; ++i)
        {
            fprintf(fp, "%d\n", i);
        }
        fclose(fp);
    }
}
