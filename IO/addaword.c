/*
 * @Author: zjj 
 * @Date: 2017-10-16 18:06:30 
 * @Last Modified by: zjj
 * @Last Modified time: 2017-10-16 18:56:08
 * @Description: use fprintf(),fscanf(),rewind()  /
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    const int MAX = 41;
    FILE *fp;
    char words[MAX];

    if ((fp = fopen("wordy", "a+")) == NULL)
    {
        fprintf(stdout, "Can't open \"wordy\" file .\n ");
        exit(EXIT_FAILURE);
    }

    puts("Enter words to add to the file; press the #");
    puts("key at the beginning of a line to terminate.");
    /*往文件中输入从stdin中获得的字符*/
    while ((fscanf(stdin, "%40s", words) == 1) && (words[0] != '#')) // 从键盘输入且判断第一个字符是否是#
        fprintf(fp, "%s\n", words);

    puts("file contents:");
    rewind(fp); // 返回文件开头
    while (fscanf(fp, "%s", words) == 1)
        puts(words);

    puts("Done!");
    if (fclose(fp) != 0)
        fprintf(stderr, "Error closing file.\n");

    return 0;
}
