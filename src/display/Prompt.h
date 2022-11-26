#ifndef PROMPT_H
#define PROMPT_H

#include<string>

class Prompt
{
public:
	static std::string DEFAULT_INPUT_TEXT;
	static std::string DEFAULT_YXCONTENT_TEXT;
	static std::string createInputPrompt(std::string inputText);
	static void displayInputPrompt();
	static std::string createYxOptionPrompt(std::string yxContent);
	static void displayYxOptionPrompt();
};

#endif // Prompt.h