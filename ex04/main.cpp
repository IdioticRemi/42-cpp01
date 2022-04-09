#include <iostream>
#include <fstream>

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cerr << "\033[1;31m[ ERROR ] \033[0;0mUsage: ./executable <filename> <to_replace> <replacement>" << std::endl;
		return 1;
	}

	std::string filename	= argv[1];
	std::string s1			= argv[2];
	std::string s2			= argv[3];

	if (filename == "")
	{
		std::cerr << "\033[1;31m[ ERROR ] \033[0;0mfilename must not be an empty string" << std::endl;
		return 1;
	}
	if (s1 == "")
	{
		std::cerr << "\033[1;31m[ ERROR ] \033[0;0mto_replace must not be an empty string" << std::endl;
		return 1;
	}
	if (s2 == "")
	{
		std::cerr << "\033[1;31m[ ERROR ] \033[0;0mreplacement must not be an empty string" << std::endl;
		return 1;
	}

	std::ifstream input(filename.c_str());

	if (!input.is_open())
	{
		std::cerr << "\033[1;31m[ ERROR ] \033[0;0mcould not open input file" << std::endl;
		return 1;
	}

	std::ofstream output((filename + ".replace").c_str());

	if (!output.is_open())
	{
		std::cerr << "\033[1;31m[ ERROR ] \033[0;0mcould not open output file" << std::endl;
		input.close();
		return 1;
	}

	std::string content((std::istreambuf_iterator<char>(input)), std::istreambuf_iterator<char>());
	std::string new_content = "";

	input.open(filename.c_str());

	for (size_t i = 0; i < content.length();)
	{
		if (content.compare(i, s1.length(), s1) == 0)
		{
			content.erase(i, s1.length());
			new_content.append(s2);
			continue;
		}
		new_content.append(sizeof(char), content[i++]);
	}

	output << new_content;

	std::cerr << "\033[1;32m[ SUCCESS ] \033[0;0mReplaced every occurence of '" << s1 << "' with '"
		<< s2 << "' (output file: '" << filename << ".replace')" << std::endl;
}
