#include <bits/stdc++.h>

using namespace std;

struct Card{
    string __rank;
    string __suit;
};

class Blackjack{
private:
    vector<Card> deck;
    vector<Card> playerHand;
    vector<Card> dealerHand;

    int __pm;
    int __bet;

public:
    Blackjack(int money, int bet){
        __pm = money;
        __bet = bet;
    }

    void create_deck(int nd){ // numdeck
        string ranks[] = {"2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K", "A"};
        string suits[] = {"Hearts", "Diamonds", "Clubs", "Spades"};

        for(int i = 0; i < nd; ++i){
            for(auto& suit : suits){
                for(auto& __rank : ranks){
                    deck.push_back({__rank, suit});
                }
            }
        }

        random_shuffle(deck.begin(), deck.end());
    }

    int calculate_hand(vector<Card>& hand){}

    void display_hand(vector<Card>& hand){

    }

    void play(){

        while(true){
            cout << "\n Welcome to BJ! \n";
            cout << "Balance: $" << __pm;

            // bet taking and checking
            while(true){
                    // taking a bet from the user, and checking in case he bets over his amount of money or he's broke
                cout << "Bet: ";
                cin >> __bet;

                if(bet < 0 || bet > __pm) cout << "Invalid bet money.";
                else break;
            }

            // if no bet -> quit the game
            if(bet==0) {
                cout << "Bye!\n";
                break;
            }

            create_deck(8);

            playerHand = {deck.back(), deck[deck.size() - 2]};
            dealerHand = {deck[deck.size() - 3], deck[deck.size() - 4]};

            bool pb = false; // player busted

            while(true){
                cout << "\nyou: ";
                display_hand(playerHand);

                cout << "dealer: ";
            }


        }


    }
        bool sc = false; // show all cards
        for(auto& card : hand){
            if(sc || &card == &hand.front()) cout << card.__rank << " of " << card.__suit << ".";
            else cout << "Unknown card, ";
        }

        cout << "\n";
    }
        int val = 0;
        int na = 0;

        // getting a value of the hand
        for(auto& card : hand){
            if(card.__rank == "J" ||
               card.__rank == "Q" ||
               card.__rank == "K")
                    val+=10;
            else if(card.__rank == "A"){
                val += 11;
                na++;
            }else val += stoi(card.__rank);
        }

        // if overload with hand - decreasing aces, so while we have overload and aces in hand - decrease
        while(val>21 && na) {
            val-=10;
            na--;
        }

        return val;
    }
};


int main(){
    return 0;
}
