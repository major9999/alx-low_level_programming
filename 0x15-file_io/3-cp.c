#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * activeproch - opqwfjguiqwnfowqjfoqiwfjioqwjgio
 * @mypwor: opiqwfioqwgioqwjgioqjwgi
 * @thhandler: powekjhoiejkfoiqwiodfjfdw
 * @startfrom: ioasjcizjclknmxcncwq
 * @starttoe: bnbvnpodwoqijioqwndw
 * Return: Just Nothing.
 */

void activeproch(ssize_t mypwor, char *thhandler, int startfrom, int starttoe)
{
	if (mypwor == -1)

	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", thhandler);

		if (startfrom != -1)

		{
			close(startfrom);
		}

		if (starttoe != -1)

		{
			close(starttoe);
		}

		exit(98);
	}
}

/**
 * theatgcheck - lkiqjfiowqfijwqofjiqowfjjwq.
 * @myargc: poiqwfiodqjiowgjqiwfqw.
 * Return: Just Nothing.
 */

void theatgcheck(int myargc)
{
	if (myargc != 3)

	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
}

/**
 * justanofuc - poifwqoinqweoingioqwngoiwnq
 * @fpork: oiqdwjiqwdjqwodj
 * @twoq: opiqiogqjgiojwqofqw
 * @startfrom: poiqwfjiojwfiqwofjqwfji
 * @starttoe: lokiqowdjioqwniofdwqd
 * Return: Just Nothing.
 */

void justanofuc(ssize_t fpork, char *twoq, int startfrom, int starttoe)
{
	if (fpork == -1)

	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", twoq);
		if (startfrom != -1)
		{
			close(startfrom);
		}

		if (starttoe != -1)
		{
			close(starttoe);
		}

		exit(99);
	}
}

/**
 * thefinalche - qwopdjfoipqwjoiqjweigojoqwfgqw
 * @myhcoqj: olkiqwnfjioqwiofjqwiofioqw
 * @fstartp: poqfkwjgopiqwpofqwkpofdqw.
 * Return: Just Nothing.
 */

void thefinalche(int myhcoqj, int fstartp)
{
	if (myhcoqj == -1)

	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fstartp);
		exit(100);
	}
}

/**
 * main - qpowfjkoiqwfjoiqwfjioqw.
 * @argc: poqwjfgopiqwdopqwd.
 * @argv: oiqdwjioqiwojqifq.
 * Return: 0 and exiut the program.
 */

int main(int argc, char *argv[])

{
	ssize_t myflnr, mylenode;
	int thefroiq, thestartto;
	int finalclose, close_from;
	mode_t fileperms;
	char buffer[1024];

	theatgcheck(argc);
	thefroiq = open(argv[1], O_RDONLY);
	activeproch((ssize_t)thefroiq, argv[1], -1, -1);
	fileperms = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	thestartto = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, fileperms);
	justanofuc((ssize_t)thestartto, argv[2], thefroiq, -1);
	myflnr = 1024;

	while (myflnr == 1024)
	{
		myflnr = read(thefroiq, buffer, 1024);
		activeproch(myflnr, argv[1], thefroiq, thestartto);
		mylenode = write(thestartto, buffer, myflnr);
		if (mylenode != myflnr)
		{
			mylenode = -1;
		}

		justanofuc(mylenode, argv[2], thefroiq, thestartto);
	}

	finalclose = close(thestartto);
	close_from = close(thefroiq);
	thefinalche(finalclose, thestartto);
	thefinalche(close_from, thefroiq);
	return (0);
}
