// CyEngine.cpp : Defines the entry point for the application.

#include<iostream>
#include "Init.h"
#include "browser/Link.h"

int main(int argc, char **argv)
{
	Link::openLink("github.com");
	Init::initClient(false, true, true);
	return 0;
}
