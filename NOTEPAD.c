/*
     ________  _____ ______   _________   
    |\   __  \|\   _ \  _   \|\___   ___\ 
    \ \  \|\  \ \  \\\__\ \  \|___ \  \_| 
    \ \   __  \ \  \\|__| \  \   \ \  \  
    \ \  \ \  \ \  \    \ \  \   \ \  \ 
    \ \__\ \__\ \__\    \ \__\   \ \__\
     \|__|\|__|\|__|     \|__|    \|__|

    


    This is a bad but good Text Edtior in terminal!

    This thing is completely free to use (Please Download it!) and totally modificable (if it's a little buggy do something :D)

    Yes, you probably see that you need Ctrl+c to save, that's because you need to "kill" the terminal to save, and that's called "Automatic Save"
    If you have an issue with the executable, re-compile it with your compiler (for windows there's Visual Studio build tools and MinGW, these are the most popular) 
    
    Another Thing to know, difference with add mode and write mode are:
    in add mode you add text
    and in write mode fo re-write all the text
*/

#include <stdio.h>
#include <conio.h>

int main()
{
    FILE *fp;
    char in,fn[35],cho;

    printf("\n\t\t\t\tAmT (A Microscopic TextEdtior)\n");
    printf("\n\t\t\t Enter File Name: ");
    gets(fn);
    printf("\n\n Command (write:w / read:r / add:a): ");
    scanf("%c",&cho);

    if(cho=='r')
    {
        fp=fopen(fn, "r");

        printf("\n\n\n\t\t Mode: READ");
        printf("\n\t\t To save Files, use Ctrl+s\n\n");

        while((in=getc(fp)) != EOF)
        {
            printf("%c",in);
        }

        fclose(fp);
    }
    else if(cho=='w')
    {
        fp=fopen(fn, "w");

        printf("\n\n\n\t\tMode: WRITE\n");
        printf("\n\t\t To save Files, use Ctrl+c\n\n");

        while((in=getchar()) !=EOF)
        {
            putc(in,fp);
        }

        fclose(fp);
    }
        else if(cho=='a')
    {
        fp=fopen(fn, "a");

        printf("\n\n\n\t\tMode: Add\n\n");
        printf("\n\t\t To save Files, use Ctrl+s\n\n");

        while((in=getchar()) !=EOF)
        {
            putc(in,fp);
        }

        fclose(fp);
    }

    getch();

    return 0;
}
