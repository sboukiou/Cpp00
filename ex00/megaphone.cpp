#include <iostream>
#include <string>

#define SUCCESS 0
#define FAILURE 1
#define LOUD_NOISE "* LOUD AND UNBEARABLE FEEDBACK NOISE *"

static int	printFeedBackNoise(void) {
	std::cerr << LOUD_NOISE << std::endl;
	return (SUCCESS);
}

static std::string	toUpper(char *str) {
	std::string var;

	if (str == NULL)
		return (var);
	for (int i = 0; str[i]; i += 1) {
		if (std::islower(str[i]) != false)
			var.push_back(std::toupper(str[i]));
		else
			var.push_back(str[i]);
	}
	return (var);
}

static int	printMessage(char **av) {
	std::string	message;

	if (av == NULL)
		return (FAILURE);
	for (int i = 1; av[i]; i += 1) {
		message = toUpper(av[i]);
		if (message.empty() == false)
			std::cout << message;
		if (av[i + 1])
			std::cout << " ";
	}
	std::cout << std::endl;
	return (SUCCESS);
}

int main(int ac, char **av) {

	if (ac == 1) {
		printFeedBackNoise();
		return (SUCCESS);
	}
	printMessage(av);
	return (SUCCESS);
}
