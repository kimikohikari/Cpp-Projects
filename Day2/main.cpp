#include  <iostream>
int main(){
    //Part 1 
    int a;
    std::cout << "Choose a number"<< std::endl;
    std::cin >> a;
    if(a > 0){
        std::cout << "Positive" << std::endl;
    }
    else if( a < 0){
        std::cout << "Negative" << std::endl;
    }
    else std::cout << "Zero" << std::endl;

    //Part 2 
    int grade;
    std::cout << "Enter your grade" << std::endl;
    std::cin >> grade;
    if ( grade >= 0 and grade <=100 ){
        if ( grade < 50 ){
            std::cout << "Unsatisfactory!" << std::endl;
        }
        if ( grade >= 50 and grade <= 69 ){
            std::cout << "Satisfactory!" << std::endl;
        }
        if ( grade >= 70 and grade <= 89 ){
            std::cout << "Good!" << std::endl;
        }
        if ( grade >= 90 and grade <= 100 ){
            std::cout << "Excellent!" << std::endl;
        }
    }
    else std::cout << "Wrong grade" << std::endl;

    //Part 3
    for(int i = 10; i > 0; i--){
        std::cout << i << "..." << std::endl;
        if( i == 1 ){
            std::cout << "Start!" << std::endl;
        }
    }

    //Part 4 
    int number = 9; 
    int k;
    while  (k != number){
        std::cout << "Guess the number" << std::endl;
        std::cin >> k;
        if ( k > number ){
            std::cout << "Less" << std::endl;
        }
        if ( k < number ){
            std::cout << "More" << std::endl;
        }
        if ( k == number ){ 
            std::cout << "Congratulations, you guessed it!" << std::endl;
        }
    }

    //Part 5

    int x = 0;
    while(x < 50){
        x++;
        if (x % 7 == 0)
            continue;
        std::cout << x << std::endl;
    }

}