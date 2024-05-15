#include "Player.h"
#include <iostream>
#include <ctime>
#include <stdlib.h>
#include <iomanip>

Player::Player(){

	//char* ptrPlayer1 = &player1[5];
	this->ptrScore = &score[0];
	this->counter = &i;
	std::cout << "initialized successfully" << std::endl;

	srand(time(NULL));

//	while(ptrPlayer1[4] == ' ' && ptrPlayer2[4] == ' '){

//	}	
}

void Player::Take_Shot(int n){


	int shot = (rand()%10) + 1;

	if(shot <= 5){

		scored = true;
		std::cout << "Player #" << n << ": Hit shot!" << std::endl;

	}

	else{

		scored = false;
		std::cout << "Player #" << n << ": Missed Shot!" << std::endl;

	}
}

void Player::Add_Letter(int n){

	std::string Horse = "HORSE";

	if(n == 1){

	//	std::cout << *ptri << "<--- ptri" << std::endl;
		*(this->ptrScore + *this->counter) = Horse[*this->counter];
	//	ptrPlayer1[*ptri] = Horse[*ptri];
//		std::cout << "Player #1: Added an \'" + Horse[*ptri] << std::endl;
		std::cout << "Player #1: Added an \'";
		std::cout << Horse[*this->counter];
		std::cout << "\'" << std::endl;
		*this->counter = *this->counter + 1;
	}

	if(n == 2){

		*(this->score + *this->counter) = Horse[*this->counter];
	//	ptrPlayer2[*ptrx] = Horse[*ptrx];
		//std::cout << "Player #2: Added an \'" + Horse[*ptrx] << std::endl;
		std::cout << "Player #2: Added an \'";
		std::cout << Horse[*this->counter];
		std::cout << "\'" << std::endl;
		*this->counter = *this->counter + 1;
	}
}

Player::~Player(){


}

int main(){

	Player* p1 = new Player();
	Player* p2 = new Player();
	
	//std::cout << p1->ptrScore+4 << "testing score 1 postition 4" << std::endl;

	while(*(p1->ptrScore + 4) != 'E' && *(p2->ptrScore + 4) != 'E'){

		p1->Take_Shot(1);
		if(!p1->scored){

			p1->Add_Letter(1);

			//std::cout << p1->ptrScore << std::endl;
		}
		p2->Take_Shot(2);
		if(!p2->scored){

			p2->Add_Letter(2);
		}
		
	}

	if(*(p1->ptrScore + 4) == 'E'){

		std::cout << "Player 2 wins!" << std::endl;
	}

	else{

		std::cout << "Player 1 wins!" << std::endl;
	}
}


