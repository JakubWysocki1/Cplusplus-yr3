#include<iostream>
#include<random>


using namespace std;

int main() {
	default_random_engine defEngine(time(0));
	uniform_int_distribution<int>intDistro(1, 25);

	int winners[4] = {};
	int nummatches = 0;



	for (int i = 0; i < 4; i++) {
		winners[i] = intDistro(defEngine);
		for (int j = 0; j < i; j++) {
			if (winners[i] == winners[j]){
				i--;
				nummatches++;
					
			}
		}

			
			
	}

	
	for (int l = 0; l < 4; l++) {
		cout << winners[l] << " ";
	}
		
	
	return 0;
}

