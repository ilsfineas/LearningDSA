#include <iostream>
#include <vector>
#include <random>
#include <limits>


using namespace std;

int main()
{
	bool isRunning = true;
	int option;
	int nrOfelements;
	vector<int> Nums;
	cout << "------------------------------------" << endl;
	cout << "---------------MENU-----------------" << endl;
	cout << "1. Enter Numbers Manually" << endl;
	cout << "2. Enter Random Numbers" << endl;
	cout << "3. Display Numbers" << endl;
	cout << "4. Exit" << endl;
	

	while (isRunning) {
		cout << "\nOption: ";
		cin >> option;
		switch (option)
		{
		case 1: {
			cout << "You have selected option 1" << endl;
			cout << "Enter # of elements: ";
			cin >> nrOfelements;

			Nums.resize(nrOfelements);
			for (int i = 0; i < nrOfelements; i++)
			{
				cout << "Enter element [" << i + 1 << "]: ";
				cin >> Nums[i];
			}
			cout << endl;
			break;
		}

		case 2: {
			random_device rd;
			mt19937 gen(rd());
			uniform_int_distribution<int> distInt(1, 10);
			nrOfelements = 10;
			Nums.resize(nrOfelements);
			cout << "Random integers numbers: ";
			for (int i = 0; i < nrOfelements; ++i) {
				Nums[i] = distInt(gen);
				cout << Nums[i]<< " ";
			}
			cout << endl;
			break;
		}

		case 3: {
			cout << "You have selected option 3" << endl;
			cout << "Numbers: [";
			for (int i = 0; i < Nums.size(); i++)
			{
				cout << Nums[i];
				if(Nums.size() -1 != i) {
					cout << ", ";
				}
			}
			cout << "]" << endl;
			cout << endl;
			break;
		}

		case 4: {
			cout << "Exiting the program..." << endl;
			isRunning = false;
			break;
		}

		default: {
			cout << "Invalid Option......." << endl;
			break;
		}
		}
	}
	
}	