#include<iostream>
#include<memory>
#include"Enemy2.h"

int main(void)
{
	std::shared_ptr<Enemy2> enemy1 = std::make_shared<Enemy2>("ƒXƒ‰ƒCƒ€‚Ìˆä‘º‚³‚ñ");
	enemy1->Draw();

	std::shared_ptr<Enemy2> enemy2 = enemy1;
	enemy2->Draw();

	std::shared_ptr<Enemy2> enemy3 = enemy1;
	enemy3->Draw();

	std::cout << "Š—LŽÒ‚Ì”" << enemy1.use_count() << "\n";

	{
		

		{
			
		}

	}

	return 0;
}