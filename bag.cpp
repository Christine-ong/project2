// Christine Ong
// January 28th, 2019
// 8130957
#include "bag.h"
#include<iostream>

// YOU CAN INCLUDE OTHER HEADER FILES HERE IF NEEDED
// DO NOT ADD THE FOLLOWING HEADERS:
// 1. <vector>, 2. <queue>, 3. <deque>, 4. <stack>,
// 5. <map>, 6. <algorithm>, 7. <set>, 8. <utility>
// In summary do not use any built-in data structures
// other than arrays. Also, do not use any built-in
// algorithms related to sorting and searching

// you are allowed to use the header files: <cstring>, <string>
// you can use the string manipulation functions
// provided by those header files if needed

using namespace std;

// implementation of word constructor; you may modify this if required
Word::Word(std::string name){
	word = name;
	
	count = 1;
}
string Word::getWord() const {
	
	return word;

}
void Word::addOne(){
	count++;	
}
int Word::getCount() const {

	return count; 
}

// Implement the print_words function
void Bag::print_words() const {
	for (int i = 0; i < count; i++){
		Word word = container[i];
		cout << word.getWord() << "::" << word.getCount() << endl;
	}
}

void Bag::add_words(string boop) {
	Word boop2(boop);
	for (int i = 0; i < count; i++){
		if (boop == container[i].getWord()){
			container[i].addOne();
			return;
		}
		if (boop < container[i].getWord()){
			for (int j = count-1; j >= i; j--){
				container[j+1]=container[j];
			}
			container[i]=boop2;
			count++;
			return;
		}
		
	}
	container[count]=boop2; 
	count++;
}

// Implement any other memeber functions you may have
// added to the class definitions

