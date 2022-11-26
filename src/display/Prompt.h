#ifndef PROMPT_H
#define PROMPT_H

#include<string>

class Prompt
{
public:
	static std::string DEFAULT_INPUT_TEXT;
	static std::string DEFAULT_YXCONTENT_TEXT;
	static std::string DEFAULT_YX_PROMPT_TYPE;
	static std::string YX_CUSTOM_SURROUND_L;
	static std::string YX_CUSTOM_SURROUND_R;
	static std::string createInputPrompt(std::string inputText);
	static std::string createYxOptionPrompt(std::string yxContent, std::string promptType);
	static void displayInputPrompt();
	static void displayYxOptionPrompt();
};

#endif // Prompt.h