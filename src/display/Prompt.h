#ifndef PROMPT_H
#define PROMPT_H

#include<string>

class Prompt
{
public:
	static std::string DEFAULT_INPUT_TEXT;
	static std::string DEFAULT_YX_INPUT_TEXT;
	static std::string DEFAULT_YXCONTENT_TEXT;
	static std::string DEFAULT_YX_PROMPT_TYPE;
	static std::string YX_CUSTOM_SURROUND_L;
	static std::string YX_CUSTOM_SURROUND_R;
	static std::string DEFAULT_SHELL_PROMPT_TEXT;
	static std::string createInputPrompt(std::string inputText);
	static std::string createYxOptionPrompt(std::string text,  std::string yxContent, std::string promptType);
	static std::string createShellPrompt(std::string shellPromptText);
	static void displayInputPrompt();
	static void displayYxOptionPrompt();
	static void displayShellPrompt();
};

#endif // Prompt.h