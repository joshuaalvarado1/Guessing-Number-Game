#include <iostream>
#include<string>

int main() {
	std::cout << "enter day of the week" ;
	std::string day;
	std::cin >> day;
	for (char a: day){
	
}
	if (day == "monday") {
		
			std::cout << "It's the start of the week. Time for a fresh start! Maybe do some morning exercise" << std::endl;

		}else if (day == "tuesday") {
				std::cout << "How about reading a chapter of a book today" << std::endl;
			} else if (day == "wendnesday") {
					std::cout << "Midweek already! Take a short walk during your break" << std::endl;
				} else if (day == "thursday") {
						std::cout << "Perhaps try a new hobby today" << std::endl;
					} else if (day == "friday") {
							std::cout << "The weekend is near! Listen to some music to relax." << std::endl;
						} else if  (day == "saturday") {
								std::cout << "Weekends are great for outdoor activities. Consider going to a park." << std::endl;
							} else if (day == "sunday") {
									std::cout << "Take a moment to plan your upcoming week. It helps in staying organized!" << std::endl;
							}else{
								std::cout << "not a day genius" << std::endl;
								}
								
	}