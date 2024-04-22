#include <string>
#include<cstdlib>
#include<ctime>
#include <iostream>

void play_game()
{
	int random = rand() % 51;
	std::cout << "guess a number please";
	while (true)
	{
		int guess;
		std::cin >> guess;
		if (guess == random)
		{
			std::cout << "you win";
			break;
		}
		else if (guess < random)
		{
			std::cout << " too low";
		}
		else
		{
			std::cout << "too high";
		}
	}
}
		int main()
		{
			int choice;
			do
			{
				srand(time(0));
				std::cout << "0.quit" << std::endl << "1.play game";
				std::cin >> choice;

				switch (choice)
				{
				case 0:
					std::cout << "bye loser";
					return 0;
				case 1:
					play_game();
					break;
				}

			} while (choice != 0);
		}
	