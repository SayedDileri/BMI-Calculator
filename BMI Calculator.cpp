//libraries
#include <iostream>
#include <string>

 int main() 
{
	std::string user_name; 
	float weight, height, bmi;
	
		//prompts for user name
	std::cout << "Hello there...\n";
	std::cout << "What is your name: ";
		std::cin >> user_name;
	
		//greetings
	std::cout << "Nice to meet you, " << user_name << '\n';

			//input weight
		std::cout << "Now, to measure your BMI, write down your weight in KILOGRAMS below." << '\n';
		std::cout << "Weight (kg): ";
			std::cin >> weight;

			//input height
		std::cout << "Thank you. PLease state your height in METERS below." << '\n';
		std::cout << "Height (m): ";
			std::cin >> height;

			//formula
		bmi = weight / (height * height);
	
			//conditionals:
		if (bmi < 18.5)
		{
			std::cout << "Your BMI is: ";
			std::cout << bmi << '\n';
				std::cout << "Unfortunatly, your BMI shows that you're underwight."; //Results
		}

			else if (bmi >= 25 && bmi <= 29.9)
			{
				std::cout << "Your BMI is: ";
				std::cout << bmi << '\n';
					std::cout << "Unfortunatly, your BMI shows that you're overweight."; //Results

				if (bmi >= 30)
				std::cout << "Your BMI is: ";
				std::cout << bmi << '\n';
					std::cout << "Your BMI results show that you're overweight."; //Results
			}
		else //If the conditions above are not met, the user is most likely to be healthy.
		{
				std::cout << "Your BMI is: ";
			std::cout << bmi << '\n';
			std::cout << "Your BMI falls under the normal index. You're perfectly healthy." << '\n' << '\n' << "Keep it up!!";
		}
		
	return 0;
}


// Next Iteration is to learn how to convert Kilgrams [KG] into Pounds [LB]...Because of Joe Biden.
// Just continue to perfect it...and in a weird way make it as complex as it can be...considering 
// the small domain of knowledge you have gained. 