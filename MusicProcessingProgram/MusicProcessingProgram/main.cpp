#include "menu.h"

int main()
{
	std::vector<std::string> main_menu_strings
	{
		" Create new sounds!",
		" Play music from a file",
		" Quit :("
	};

	Menu main_menu(main_menu_strings);
	main_menu.show();

    return 0;
}

