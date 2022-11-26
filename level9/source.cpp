#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <iostream>
#include <string.h>

class N
{
	public: 
	char buf[100];
	int	a;
	N()
	{
		a = 0;
	}
	N(int);
	void setAnnotation(char *);
	virtual void operator+(N*);
	virtual void operator-(N*);
};

N::N(int n)
{
	a = n;
}

void N::operator+(N *beta)
{
	beta->a += a;
}

void N::operator-(N *beta)
{
	beta->a -= a;
}

void N::setAnnotation(char *s)
{
	memcpy(buf, s, strlen(s));
}

int		main(int argc, char **argv)
{
	N *a;
	N *b;
	N *c;
	N *d;

	if (argc == 1)
		_exit(1);
	a = new N(5);
	b = new N(6);
	c = a;
	d = b;
	c->setAnnotation(argv[1]);
	d->operator+(c);
	//N k(5);
	//t->add();
}
