// READ: this is not finished - im still working on it :/

#include <iostream>
#include <list>
#include <windows.h>


using namespace std;

void clear() {
    cout << "\x1B[2J\x1B[H";
}

void print(const std::string& message) {
    std::cout << message << "\n";
}

void printInt(const std::int& message) {
    std::cout << message << "\n";
}

string q;
string q1;
string q2;
string q3;
string q4;
string q4_2;
string dogeFightInput1;
string dogeFightInput2;
bool runGame = true;
list<string> credits{"Creator -- @Oliver134", "Assistant Boss -- [REDACTED]", "Testers -- [REDACTED] and [REDACTED]", "Ideas -- @Sophistacited and [REDACTED]", "Assistant in Everything -- Also @Sophistacited ", "5 -- 4th number in code"};
list<string> endings;

void fightKingDoge() {
    print("1) Fight");
    print("2) Dodge");
    cin >> dogeFightInput1;
    if (dogeFightInput1 == "1") {
        print("You die.");
        addEnding("king doge rules");
    } else if (dogeFightInput1 == "2") {
        print("You dodge the attack.");
        print("Now what do you do?");
        print("1) Attack!");
        print("2) dodge the doge");
        cin >> dogeFightInput2;
        if (dogeFightInput2 == "1") {
            print("You hit the doge and he disappears, swearing vengeance.");
            addEnding("angry doge")
        } else if (dogeFightInput2 == "2") {
          print("You dodge the doge but as you turn around to run the doge attacks you");
          addEnding("never turn your back")
        }

    }
}

void addEnding(const string& ending) {
    bool foundEnding = false;
    for (auto& e : endings) {
        if (e == ending) {
            foundEnding = true;
            break;
        }
    }
    if (!foundEnding) {
        endings.push_back(ending);
    }
}

int main() {
    while (runGame) {
        print(rand());
        print("Carl is your friend.");
        print("-28.E3.23400-29) Ask Carl to reverse reality");
        print("0) See Endings");
        print("1) Ok.");
        print("2) No.");
        print("3) Grab Water Gun");
        print("4) Walk away");
        print("5) Run away");
        print("6) Go on the chromebook to distract you from reality of life");
        print("7) Crawl away");
        print("8) Play uno");
        print("9) Leave game");
        print("10) Check inventory");
        print("11) Change hub");
        print("12) Go to school");

        cin >> q;

        if (q == "-28.E3.23400-29") {
            print("Wait... How did you know I have this power?!");
            Sleep(2000);
            print("REVERSING REALITY...");
            Sleep(10000);
            print("Ytilaer desrever. hO on! DC becomes CD! Dna Marvel becomes Levram! Dna Carl becomes Lrac 1 + 1 = window becomes wodniw = 1 + 1");

            addEnding("ytilaer desrever");

            Sleep(3000);
        } else if (q == "0") {
            for (auto& ending : endings) {
                cout << ending << "\n";
            }
            Sleep(5000);
        } else if (q == "1") {
            print("Are you sure?");
            print("1) No");
            print("2) Yes");
            cin >> q1;
            if (q1 == "1") {
                print("no.");
                abort();
            } else {
                print("Ok!");
            }
            addEnding("yes no maybe so");
        } else if (q == "2") {
            print("Bro you got a problem?");
            cin >> q2;
            if (q2 == "no") {
                print("Well i think you do!");
                addEnding("EMOTIONAL DAMAGE");
                Sleep(2000);
            } else {
                addEnding("you have been banned");
                print("Well I don't care! Just get out of this world!");
                print("You have been banned.");
                Sleep(2000);
            }
        } else if (q == "3") {
            print("1) Shoot Carl with Water Gun");
            print("2) Give Carl Water Gun");
            print("3) Throw gun away");
            cin >> q3;
            if (q3 == "1") {
                print("I like yo cut g");
                addEnding("sukuchi");
                Sleep(2000);
            } else {
                print("well you gave the gun to the wrong npc");
                print("carl shoots you");
                addEnding("betrayul");
                Sleep(2000);
            }
// *********************************************************************************************************************************************************
        } else if (q == "4") {
            print("Hey come back!");
            print("1) Eggdog house");
            print("2) Eggdog doghouse");
            cin >> q4;
            if (q4 == "1") {
                print("hey who are you?");
                print("AGGRESIVELY SLAPS YOU.");
                addEnding("RAGE MODE");
                Sleep(2000);
            } else {
                print("Do you have an invitation");
                cin >> q4_2;
                if (q4_2 == "maybe") {
                  print("ah");
                  addEnding("snapped");
                  Sleep(2000);
                } else {
                    print("i dont beleef it");
                    print("get out");
                    addEnding("denied by a dog");
                    Sleep(2000);
                }

            }
// *********************************************************************************************************************************************************
        } else if (q == "5") {

        }
        clear();
    }
    return 0;
}
