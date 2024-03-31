#include <bits/stdc++.h>

using namespace std;

const char* ranks[] = {"2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K", "A"};
const char* suits[] = {"\xe2\x99\xa5", "\xe2\x99\xa6", "\xe2\x99\xa3", "\xe2\x99\xa0"};

void initializeDeck(vector<int>& deck){
    for(int i = 0; i < 52; ++i){
        deck.push_back(i);
    }
}

void shuffleDeck(vector<int>& deck){
    random_device rd;
    shuffle(deck.begin(), deck.end(), default_random_engine(rd()));
}

void printCard(int card){
    int __rank = card % 13;
    int __suit = card / 13;

    cout << ranks[__rank] << suits[__suit] << endl;
}

int main() {
    vector<int> csmDeck;

    initializeDeck(csmDeck);
    shuffleDeck(csmDeck);

    cout << "Your hand: \n";
    for(int i = 0; i < 5; ++i){
        printCard(csmDeck[i]);
    }

    return 0;
}
