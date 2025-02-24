#include <iostream>

int main(){
	int shape[3][2][4] = {
							{
								{2,4,3,6},
								{1,5,7,8}
							},
							{
								{5,2,1,7},
								{5,2,4,3}
							},
							{
								{6,3,2,4},
								{9,0,6,8}
							}
						};
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 2; j++) { 
			for (int k = 0; k < 4; k++) {
				std::cout << shape[i][j][k];
			}
			std::cout << std::endl;
		}
		std::cout << std::endl << std::endl;
	}		
}