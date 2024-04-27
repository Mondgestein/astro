/*

   Copyright 1994, 1995, 1996, 1997, 1998, 1999, 2000 Jim Hall
   Copyright 2018, 2019, 2024 Ricardo Hanke


   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110, USA

   See the file 'license.txt' in the main directory for details.

*/

#include <conio.h>
#include <dos.h>
#include <io.h>


#define DEFAULTWIDTH  80
#define DEFAULTHEIGHT 25
#define TABSIZE       8
#define STDIN         0
#define STDERR        2

static char buffer[4096];




void display_help(void)
{
    cputs("Displays output one screen at a time.\r\n");
    cputs("\r\n");
    cputs("MORE < [drive:][path]filename\r\n");
    cputs("command-name | MORE\r\n");
    cputs("\r\n");
    cputs("  [drive:][path]filename  Specifies a file to display one screen at a time.\r\n");
    cputs("  command-name            Specifies a command whose output will be displayed.\r\n");

    return;
}



int check_options_help(int argc, char *argv[])
{
    int i;

    for (i = 1; i < argc; i++)
    {
        if ((argv[i][0] == '/') && (argv[i][1] == '?'))
        {
            return -1;
        }
    }

    return 0;
}



int wait_for_keystroke(void)
{
    int key;

    if ((key = _getch()) == 0)
    {
        key = _getch();
    }

    return key;
}



void display_file(int pfile)
{
    int nchars = 0;
    int nlines = 0;
    unsigned linecount = 0;
    unsigned count;
    int i;


    while (_dos_read(pfile, &buffer, sizeof(buffer), &count) == 0 && count > 0)
    {
        for (i = 0; i < count; i++)
        {
            if (buffer[i] != '\t')
            {
                putch(buffer[i]);
                nchars++;
            }
            else
            {
                do
                {
                    putch(' ');
                    nchars++;
                } while (nchars < DEFAULTWIDTH && nchars % TABSIZE);
            }

            if (buffer[i] == '\n')
            {
                linecount++;
            }

            if ((buffer[i] == '\n') || (nchars >= DEFAULTWIDTH))
            {
                nlines++;
                nchars = 0;

                if (nlines == (DEFAULTHEIGHT - 1))
                {
                    cputs("-- More --");
                    wait_for_keystroke();
                    cputs("\r          \r");
                    nlines = 0;
                }
            }
        }
    }

    return;
}



int main(int argc, char *argv[])
{
    int stdinhandle;

    if (argc > 1)
    {
        if (check_options_help(argc, argv))
        {
            display_help();
            return 0;
        }

        cputs("Too many arguments in command line\r\n");
        return 0;
    }

    stdinhandle = dup(STDIN);

    close(STDIN);

    dup2(STDERR, STDIN);

    display_file(stdinhandle);

    return 0;
}
