#include<iostream>

class CppPointers{

	public:

		void play(){

			int num = 64; /** Interger Variable Called: (Num); **/

			int *num_address = &num; /** Pointer Variable called (num_address); **/

			std::cout << "Num variable value: " << num << std::endl;
			std::cout << "Num Variable Memory Address: " << &num << std::endl;

			std::cout << "Num Address variable value: " << *num_address << std::endl;
			std::cout << "Num Address Variable Address: " << &num_address << std::endl;

			std::cout << "\n" << std::endl;

			num = 46; /** Num Usual Update; **/

			std::cout << "Simple Update: (" << num << " = " << &num <<  ")" << std::endl;

			*num_address = 78; /** Num update through pointer; **/

			std::cout << "Variable Update through Pointer Address: (" << &num << " = " << num << ")" << std::endl;

			std::cout << "\n" << std::endl;
		}
};

int main(){

	CppPointers ptr;

	ptr.play();

	return 0;

}

