#ifndef Player_H
#define Player_H

class Player{

	private:
		char score[5];
		int i;

	public:
		Player();

		~Player();

		void Add_Letter(int n);

		void Take_Shot(int n);

		bool scored;

		char* ptrScore;

		int* counter;

};

#endif
