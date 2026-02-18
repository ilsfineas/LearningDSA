#include <iostream>
#include <vector>
#include <random>
#include <limits>


using namespace std;

void manual_elements(int& nrOfelements, vector<int>& Nums)
{
	cout << "You have selected option 1" << endl;
	cout << "Enter # of elements: ";
	cin >> nrOfelements;
	Nums.resize(nrOfelements);
	for (int i = 0; i < nrOfelements; i++)
	{
		cout << "Enter element [" << i + 1 << "]: ";
		cin >> Nums[i];
	}
}

void random_elements(int& nrOfelements, vector<int>& Nums)
{
	random_device rd;
	mt19937 gen(rd());
	uniform_int_distribution<int> distInt(1, 10);
	nrOfelements = 10;
	Nums.resize(nrOfelements);
	cout << "Random integers numbers: ";
	for (int i = 0; i < nrOfelements; ++i) {
		Nums[i] = distInt(gen);
		cout << Nums[i] << " ";
	}
}

void afisare_elemente(const vector<int>& Nums)
{
	cout << "You have selected option 3" << endl;
	cout << "Numbers: [";
	for (int i = 0; i < Nums.size(); i++)
	{
		cout << Nums[i];
		if (Nums.size() - 1 != i) {
			cout << ", ";
		}
	}
	cout << "]" << endl;
}

void bubble_sort(vector<int>& Nums)
{
	for (int i = 0; i < Nums.size() - 1; i++)
	{
		for (int j = 0; j < Nums.size() - i - 1; j++)
		{
			if (Nums[j] > Nums[j + 1])
			{
				swap(Nums[j], Nums[j + 1]);
				for (int x : Nums) {
					cout << x << " ";
				}
				cout << endl;
			}
		}
	}
}

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
	cout << "------------------------------------" << endl;
	cout << "----------SORTING ALGORITHMS--------" << endl;
	cout << "4. Bubble Sort" << endl;

	cout << "\n\n-------------------------------------" << endl;
	cout << "0. Exit" << endl;
	

	while (isRunning) {
		cout << "\nOption: ";
		cin >> option;
		switch (option)
		{
		case 1: {
			manual_elements(nrOfelements, Nums);
			cout << endl;
			break;
		}

		case 2: {
			random_elements(nrOfelements, Nums);
			cout << endl;
			break;
		}

		case 3: {
			afisare_elemente(Nums);
			cout << endl;
			break;
		}

		case 4: {
			bubble_sort(Nums);
			cout << "S-a efectuat sortarea cu Bubble Sort" << endl;
			cout << endl;
			break;
		}

		case 0: {
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