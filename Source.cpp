#include <iostream>
#include <string.h>
#include <stdlib.h>     
#include <time.h>

//function to convert user's answer to int
int game(std::string);

//Function to determine who wins
std::string fight(int, int);

int main()
{
	
	int comp_answer;          //random number number to determine computer's answer
	int user_answer;          //user's answer as an int
	std::string answer;       //holds answer from user
	std::string play_game;    //holds user answer if they want to play


	//radnom generator to determine computer's answer
	srand(time(NULL));
	comp_answer = rand() % 3 + 1;

	//Ask user if they want to play game
	do
	{
		std::cout << "Would you like to play Rock, Paper, Scissors?" << std::endl;
		std::cin >> play_game;

		if (play_game == "no")   //end program if user selects no
		{
			std::cout << "You choose to not play the game.";
			return 0;
		}
	} 
	while (play_game != "yes");


	//3 2 1 countdown
	for (int i = 3; i > 0; i--)
	{
		std::cout << i << std::endl;
		
	}


	std::cout << "Lets play Rock, Paper, Scissors" << std::endl;
	std::cout << "\n";
	std::cout << "\n";
	std::cout << "Ready?"<< std::endl;
	std::cout << "\n";
	std::cout << "Rock, paper, or Scissors?" << std::endl;
	std::cin >> answer;

	//call function and set int to user_answer
	user_answer = game(answer);

	//Display result to user
	std::cout << fight(user_answer, comp_answer);

}

//cchnage string to int
int game(std::string answer1)
{;

	if (answer1== "rock")
	{
		return 1; //1 represents rock
	
	}
	else if (answer1 == "paper")
	{
		return 2; // 2 represnets paper
		
	}
	else if (answer1== "scissors")
	{
		return 3; // 3 represnets scissors
	}

}

//function to decide winner
std::string fight(int user_answer1, int comp_answer1)
{
	if (user_answer1 == comp_answer1)
	{
		return "Tie";
	}
	else if (user_answer1 == 1 && comp_answer1 == 2)
	{
		return "Paper beats rock\n"; 
	}
	else if (user_answer1 == 1 && comp_answer1 == 3)
	{
		return "Rock beats scissors\n";
	}
	else if (user_answer1 == 2 && comp_answer1 == 1)
	{
		return "Paper beats rock\n";
	}
	else if (user_answer1 == 2 && comp_answer1 == 3)
	{
		return "Scissors beats paper\n";
	}
	else if (user_answer1 == 3 && comp_answer1 == 1)
	{
		return "Rock beats scissors\n";
	}
	else if (user_answer1 == 3 && comp_answer1 == 2)
	{
		return "Scissors beats paper\n";
		
	}
	else
	{
		return "error";
	}
}