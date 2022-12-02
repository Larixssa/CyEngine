// CyEngine.cpp : Defines the entry point for the application.

#include<iostream>
#include "Init.h"

int main(int argc, char **argv)
{
	// Smart way to not use main to re-initialize. :sunglasses:
	Init::initClient(false, true, true);
	return 0;
}
