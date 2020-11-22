#include <stdio.h>
#include <iostream>
using namespace std;


const char FileName[] = "test3.txt";
const int BufSize = 256;

int CalculeteStrSize(char* str);

int main()
{
    setlocale(LC_ALL, "rus");
    char buf[BufSize];
    FILE* in;
    size_t line_count = 0;
    char longest_str[BufSize] = "";
    int longest_str_size = 0;
    in = fopen(FileName, "rt");
    if (in == NULL) {
        printf("Error .File '%s' isn`t open.\n", FileName);
        return 1;
    }
    while (fgets(buf, BufSize, in) != NULL) {
        ++line_count;
        int str_size = CalculeteStrSize(buf);
        if (str_size > longest_str_size) {
            longest_str_size = str_size;
            strcpy(longest_str, buf);
        }

    }
    fclose(in);
    printf("Number of lines: %i\n", line_count);
    printf("Longest line is: %s\n", longest_str);
    return 0;
}



int CalculeteStrSize(char* str)
{
    int size;
    for (size = 0; str[size]; size++) {

    }
    return size;
}

