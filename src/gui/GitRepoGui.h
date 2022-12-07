#ifndef GITREPOGUI_H
#define GITREPOGUI_H

#include "guiutils/BaseGui.h"

class GitRepoGui : public BaseGui
{
public:
	static void create(bool requireInput);
	static void update(int status);
	static void load(bool requireInput);
};

#endif // GitRepoGui.h