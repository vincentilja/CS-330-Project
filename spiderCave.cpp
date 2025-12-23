#include <iostream>
#include <string>
#include <random>
using namespace std;



class Node
{
  public:
    int num;
    string data;
    Node *prev;
    Node *next;

    Node(int value, string text)
    {
        num = value;
        data = text;
        prev = nullptr;
        next = nullptr;
    }
};

class Node2
{
  public:
    int num;
    string data;
    Node2 *prev;
    Node2 *next;

    Node2(int value, string text)
    {
        num = value;
        data = text;
        prev = nullptr;
        next = nullptr;
    }
};

class Node3
{
  public:
    int num;
    string data;
    Node3 *prev;
    Node3 *next;

    Node3(int value, string text)
    {
        num = value;
        data = text;
        prev = nullptr;
        next = nullptr;
    }
};

class Node4
{
  public:
    int num;
    string data;
    Node4 *prev;
    Node4 *next;

    Node4(int value, string text)
    {
        num = value;
        data = text;
        prev = nullptr;
        next = nullptr;
    }
};

int cave1(int treasure){
    int min = 1;
    int max = 11;
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> distrib(min, max);

    Node4 *head = new Node4(1, "You have encountered...");

    head->next = new Node4(2, "...the friendly dragon!");
    head->next->prev = head;

    head->next->next = new Node4(3, "She has given you treasure!");
    head->next->next->prev = head->next;

    int randomValue = distrib(gen);
    treasure = treasure - randomValue;
    cout << "You now have " + to_string(treasure) + " gold coins." << endl;
    return(treasure);
}

int cave2(int treasure){
    cout << "You have encountered the duck cave!" << endl;
    cout << "The Dragon tells you to answer this question correctly: Can ducklings talk to each other before they are born? (Y/N) " << endl;
    string answer;
    cin >> answer;
    if(answer == "Y" || answer == "y"){
        int min = 5;
        int max = 25;
        random_device rd;
        mt19937 gen(rd());
        uniform_int_distribution<> distrib(min, max);
        int randomValue = distrib(gen);
        treasure = treasure + randomValue;
    }else{
        int min = 1;
        int max = 25;
        random_device rd;
        mt19937 gen(rd());
        uniform_int_distribution<> distrib(min, max);
        int randomValue = distrib(gen);
        treasure = treasure - randomValue;
    }
    cout << "You now have " + to_string(treasure) + " gold coins." << endl;
    return(treasure);
}

int cave3(int treasure){
    cout << "OH NO! You have entered a cave with a huge magnet. Your money has magnefied out of your pockets" << endl;
    treasure = treasure - 20;
    cout << "You now have " + to_string(treasure) + " gold coins." << endl;
    return(treasure);
}

int cave4(int treasure){
    cout << "You have entered bertie's cave. Bertie is hungry. Will you A. give Bertie a strawberry cake, or B. give Bertie a peach pie? (A/B) " << endl;
    string answer;
    cin >> answer;
    if(answer == "A" || answer == "a"){
        cout << "Bertie applauds your baking abilities! She wants to give you a prize!" << endl;
        treasure = treasure + 50;
    }else{
        cout << "Bertie HATES peaches and is so sad (and still hungry)." << endl;
        treasure = treasure - 20;
    }
    cout << "You now have " + to_string(treasure) + " gold coins." << endl;
    return(treasure);
}

int cave5(int treasure){
    cout << "You have encountered the cottagecore dragon!" << endl;
    cout << "Do you want honey in your tea? (Y/N) " << endl;
    string answer;
    cin >> answer;
    if(answer == "Y" || answer == "y"){
        treasure = treasure + 15;
    }else{
        treasure = treasure - 10;
    }
    cout << "You now have " + to_string(treasure) + " gold coins." << endl;
    return(treasure);
}

int cave6(int treasure){
    cout << "You have entered the artist dragon's studio!" << endl;
    cout << "The dragon gives you a self portrait and treasure..." << endl;
    treasure = treasure + 9;
    cout << "You now have " + to_string(treasure) + " gold coins." << endl;
    return(treasure);
}

int cave7(int treasure){
    cout << "You have stumbled into the fashionista dragon, who might be a bit of a hoarder..." << endl;
    cout << "He steals your outfit and takes your coins!" << endl;
    treasure = treasure - 8;
    cout << "You now have " + to_string(treasure) + " gold coins." << endl;
    return(treasure);
}

int cave8(int hp, int treasure){
    Node *head = new Node(1, "When you enter the cave, you encounter a room filled with webs.");

    // Create and link the second node
    head->next = new Node(2, "You draw in a shaky breath, causing some of the finer cobwebs to become lodged in your throat.");
    head->next->prev = head;

    // Create and link the third node
    head->next->next = new Node(3, "You cough...");
    head->next->next->prev = head->next;

    // Create and link the fourth node
    head->next->next->next = new Node(4, "And out of the shadows emerges the spindly legs of a massive spider...");
    head->next->next->next->prev = head->next->next;

    head->next->next->next->next = new Node(5, "In your torchlight, its hulking thorax glistens and its eight crimson eyes gleam, narrowing in on you.");
    head->next->next->next->next->prev = head->next->next->next;

    head->next->next->next->next->next = new Node(6, "\"Why hello, his...\"");
    head->next->next->next->next->next->prev = head->next->next->next->next;

    head->next->next->next->next->next->next = new Node(7, "...*its* voice is uncannily soothing. \"I do not get many visitors, perhaps on account of my frightful appearance.\"");
    head->next->next->next->next->next->next->prev = head->next->next->next->next->next;

    head->next->next->next->next->next->next->next = new Node(8, "\"Tell me, traveler...\"");
    head->next->next->next->next->next->next->next->prev = head->next->next->next->next->next->next;

    head->next->next->next->next->next->next->next->next = new Node(9, "Am I beautiful? (Y/N) ");
    head->next->next->next->next->next->next->next->next->prev = head->next->next->next->next->next->next->next;

    Node *temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << endl;
        temp = temp->next;
    }

    string answer1;
    cin >> answer1;
    if(answer1 == "Y" || answer1 == "y"){
        string report = to_string(treasure);
        cout << "\"I... thank you. No one has described me as beautiful before.\"" << endl;
        treasure = treasure + 100;
        cout << "You now have " + to_string(treasure) + " gold coins." << endl;
        return(treasure);
    }else{
        cout << "\"I thought that you were different... I suppose I was wrong.\"" << endl;
        cout << "\"Very well. Then pay a toll.\"" << endl;
        treasure = treasure - 50;
        cout << "You now have " + to_string(treasure) + " gold coins." << endl;
        return(treasure);
    }
    return 0;
}

int cave9(int hp, int treasure){
    Node2 *front = new Node2(1, "The sickly sweet smell of decay that permeates the cave nearly causes you to keel over.");

    front->next = new Node2(2, "The low drone of a swarm of flies assaults your eardrums.");
    front->next->prev = front;

    front->next->next = new Node2(3, "You clap your hands over your ears, breathe through your mouth, and proceed toward the disturbance.");
    front->next->next->prev = front->next;

    front->next->next->next = new Node2(4, "In the corner of the room lies a man in the fetal position...");
    front->next->next->next->prev = front->next->next;

    front->next->next->next->next = new Node2(5, "Or what used to be a man.");
    front->next->next->next->next->prev = front->next->next->next;

    front->next->next->next->next->next = new Node2(6, "In actuality, what you're looking at is the remains of someone like you... yet another traveler lost in this infinite labyrinth of deception.");
    front->next->next->next->next->next->prev = front->next->next->next->next;

    front->next->next->next->next->next->next = new Node2(6, "In actuality, what you're looking at is the remains of someone like you... yet another traveler lost in this infinite labyrinth of deception.");
    front->next->next->next->next->next->next->prev = front->next->next->next->next->next;

    front->next->next->next->next->next->next->next = new Node2(7, "He looks... husklike. Nothing more than taut skin pulled across a skeleton.");
    front->next->next->next->next->next->next->next->prev = front->next->next->next->next->next->next;

    front->next->next->next->next->next->next->next->next = new Node2(8, "He looks... husklike. Nothing more than taut skin pulled across a skeleton.");
    front->next->next->next->next->next->next->next->next->prev = front->next->next->next->next->next->next->next;

    front->next->next->next->next->next->next->next->next->next = new Node2(9, "You notice odd tattoos on what's left of his shriveled, jaundiced skin and a garnet stone inlaid in his left eye socket.");
    front->next->next->next->next->next->next->next->next->next->prev = front->next->next->next->next->next->next->next->next;

    front->next->next->next->next->next->next->next->next->next->next = new Node2(10, "You wonder if it was placed there before or after he passed.");
    front->next->next->next->next->next->next->next->next->next->next->prev = front->next->next->next->next->next->next->next->next->next;

    front->next->next->next->next->next->next->next->next->next->next->next = new Node2(11, "When you think you've gotten too close, a rattling cough emits from the corpse's mouth and the dead man speaks...");
    front->next->next->next->next->next->next->next->next->next->next->next->prev = front->next->next->next->next->next->next->next->next->next->next;

    front->next->next->next->next->next->next->next->next->next->next->next->next = new Node2(12, "\"Why have you come here, you fool?\"");
    front->next->next->next->next->next->next->next->next->next->next->next->next->prev = front->next->next->next->next->next->next->next->next->next->next->next;

    front->next->next->next->next->next->next->next->next->next->next->next->next->next = new Node2(13, "\"You are surely here to seek fame or boundless riches or any number of frivolous motives that compels a man to pursue such a futile journey.\"");
    front->next->next->next->next->next->next->next->next->next->next->next->next->next->prev = front->next->next->next->next->next->next->next->next->next->next->next->next;

    front->next->next->next->next->next->next->next->next->next->next->next->next->next->next = new Node2(14, "\"If there is morsel of knowledge to take from these dungeons, it is this: \"");
    front->next->next->next->next->next->next->next->next->next->next->next->next->next->next->prev = front->next->next->next->next->next->next->next->next->next->next->next->next->next;

    front->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next = new Node2(15, "\"No matter how much gold you pilfer from this forsaken expanse, each cave more abtruse and foreign than the last...\"");
    front->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->prev = front->next->next->next->next->next->next->next->next->next->next->next->next->next->next;

    front->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next = new Node2(16, "\"You will soon become nothing more than the dust that envelops this desolate barren.\"");
    front->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->prev = front->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next;

    front->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next = new Node2(17, "\"Tell me, traveler...\"");
    front->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->prev = front->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next;

    front->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next = new Node2(18, "\"...If you writhe your way far enough, do you think you have hope of touching the abyss?\" (Y/N) ");
    front->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->prev = front->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next;

    Node2 *temp = front;
    while (temp != nullptr)
    {
        cout << temp->data << endl;
        temp = temp->next;
    }

    string answer2;
    cin >> answer2;
    if(answer2 == "Y" || answer2 == "y"){
        string report2 = to_string(treasure);
        cout << "The dead man releases a rasping sigh, \"You will never learn. But one day you will pay.\"" << endl;
        treasure = treasure - 50;
        cout << "You now have " + to_string(treasure) + " gold coins." << endl;
        return(treasure);
    }else{
        cout << "The dead man chuckles, \"Now then, will you continue to take arms against the tide bound to swallow you whole or will you spend your final breaths with me?\" (Y/N) " << endl;
        string answer3;
        cin >> answer3;
        if(answer3 == "N" || answer3 == "n"){
            cout << "\"Very well. I will resign myself to spending the remainder of perpetuity alone. As will you, traveller.\"" << endl;
            cout << "As you turn away, you catch the glint of the garnet out of your periphery." << endl;
            cout << "Do you take the garnet? (Y/N) " << endl;
            string answer4;
            cin >> answer4;
            if(answer4 == "Y" || answer4 == "y"){
                treasure = treasure + 300;
                cout << "You now have " + to_string(treasure) + " gold coins." << endl;
                return(treasure);
            }else{
                cout << "Right... You'd condemn yourself to damnation if you did something as morally bankrupt as desecrating a corpse." << endl;
                cout << "Best to leave the dead to their slumber..." << endl;
                return(treasure);
            }
        }else{
            cout << "You curl up next to him, close your eyes, and attempt to ignore the constant growling of your stomach." << endl;
            cout << "After centuries, what is left of you adds to infinite number of dust particles filling the dungeon." << endl;
            cout << "The dead man has company at last." << endl;
            treasure = 0;
            hp = 0;
            return(treasure);
        }
        treasure = treasure - 50;
        cout << "You now have " + to_string(treasure) + " gold coins." << endl;
        return(treasure);
    }
    return 0;
}

int cave10(int hp, int treasure){
    int min = 9;
    int max = 18;
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> distrib(min, max);
    Node3 *head = new Node3(1, "You take your first step into the cave, only to find that your boot has been mired.");

    head->next = new Node3(2, "As your eyes focus, you note that the cave you're in is lined with crystals and lichen.");
    head->next->prev = head;

    head->next->next = new Node3(3, "The ground beneath your boots is crusted in peat.");
    head->next->next->prev = head->next;

    head->next->next->next = new Node3(4, "\"Woo-hoo-hoo, wee-hee-hee, you must answer my riddles three!\"");
    head->next->next->next->prev = head->next->next;

    head->next->next->next->next = new Node3(5, "You have encountered dragons, giant spiders, and other monstrous foes here. You steel your nerves and withdraw your mace.");
    head->next->next->next->next->prev = head->next->next->next;

    head->next->next->next->next->next = new Node3(6, "Best to stay on guard.");
    head->next->next->next->next->next->prev = head->next->next->next->next;

    head->next->next->next->next->next->next = new Node3(7, "You feel something knocking against the shinplate of your suit of armor.");
    head->next->next->next->next->next->next->prev = head->next->next->next->next->next;

    head->next->next->next->next->next->next->next = new Node3(8, "\"Look at me, look at me, you must answer my riddles three!\"");
    head->next->next->next->next->next->next->next->prev = head->next->next->next->next->next->next;

    head->next->next->next->next->next->next->next->next = new Node3(9, "Staring up at you is a bearded gnome no more than 2 feet tall. He's cloaked in an emerald robe. A pointy hat of a similar hue sits atop his head.");
    head->next->next->next->next->next->next->next->next->prev = head->next->next->next->next->next->next->next;

    head->next->next->next->next->next->next->next->next->next = new Node3(10, "\"Who are you?\" you ask.");
    head->next->next->next->next->next->next->next->next->next->prev = head->next->next->next->next->next->next->next->next;

    head->next->next->next->next->next->next->next->next->next->next = new Node3(11, "At this query, the gnome does a frenetic sort of jig.");
    head->next->next->next->next->next->next->next->next->next->next->prev = head->next->next->next->next->next->next->next->next->next;

    head->next->next->next->next->next->next->next->next->next->next->next = new Node3(12, "\"I am the Greebler, the Greebler is me! I live amongst all that you see.\"");
    head->next->next->next->next->next->next->next->next->next->next->next->prev = head->next->next->next->next->next->next->next->next->next->next;

    head->next->next->next->next->next->next->next->next->next->next->next->next = new Node3(13, "The Greebler stops his jigging and begins to look at you intently with his violet gaze.");
    head->next->next->next->next->next->next->next->next->next->next->next->next->prev = head->next->next->next->next->next->next->next->next->next->next->next;

    head->next->next->next->next->next->next->next->next->next->next->next->next->next = new Node3(14, "\"Tell me, traveler...\", he says, in a startlingly cool tone.");
    head->next->next->next->next->next->next->next->next->next->next->next->next->next->prev = head->next->next->next->next->next->next->next->next->next->next->next->next;

    head->next->next->next->next->next->next->next->next->next->next->next->next->next->next = new Node3(15, "\"...will you answer my riddles three?\" (Y/N) ");
    head->next->next->next->next->next->next->next->next->next->next->next->next->next->next->prev = head->next->next->next->next->next->next->next->next->next->next->next->next->next;

    Node3 *temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << endl;
        temp = temp->next;
    }

    string answer;
    cin >> answer;
    if(answer == "Y" || answer == "y"){
        cout << "\"Upon my face now sits a grin,\" says the Greebler, \"Righty then, let us begin\"" << endl;
        cout << "\"I have a name upon my spine, my innards are made of leaves of pine.\"" << endl;
        cout << "\"And should you whine 'I known't a bit', look inside to hone your wit.\"" << endl;
        cout << "\"And I seldom sit by myself, I live with friends upon a shelf.\"" << endl;
        cout << "\"Upon this shelf, I call my home. What am I? I am a...\" " << endl;
        string answer2;
        cin >> answer2;
        if(answer2 == "Tome" || answer2 == "tome"){
            cout << "\"Wee-hee-hee, woo-hoo-hoo! Now on to riddle two.\"" << endl;
            cout << "\"I am made up teeth, you hold me in your hands. When I do my job, I work to tame your strands.\"" << endl;
            cout << "\"Once you have me in your hands, use me with ease. I like do many things like smooth, part, or tease.\"" << endl;
            cout << "\"I can do many more jobs than these. Just use me on your mane, I can ensure that your locks are neatly lain.\"" << endl;
            cout << "\"You can even use me to stain or dye your dome from fuschia or to chrome. What am I? I am a...\" " << endl;
            string answer3;
            cin >> answer3;
            if(answer3 == "Comb" || answer3 == "comb"){
                cout << "\"Woo-hoo-hoo, wee-hee-hee! Now on to riddle three.\"" << endl;
                cout << "\"I lived here all my life, I live here all alone. If I find others like me, they all have turned to bone.\"" << endl;
                cout << "\"In these halls of stone, I wander to try to meet a friend, I will wander through these halls until I meet my end.\"" << endl;
                cout << "\"Frail bodies cannot fend against monsters in their rage, and I have no cavalry, no knight, nor no page.\"" << endl;
                cout << "\"Trapped here for many an age, I no longer roam. I no longer know who I am, but I might be a...\"" << endl;
                string answer4;
                cin >> answer4;
                if(answer4 == "Gnome" || answer4 == "gnome"){
                    cout << "\"So now you know my story,\" says the Greebler, a dour smile playing on his lips." << endl;
                    cout << "\"Please traveler, you have no chance of survival in the land\"" << endl;
                    cout << "\"Please traveler, take this gold from the palm of my hand.\"" << endl;
                    cout << "\"Please traveler, use this gold and use it to flee.\"" << endl;
                    cout << "\" Please traveler take this gold to avoid becoming me.\"" << endl;
                    treasure = treasure + 30;
                    cout << "Though it isn't much, the sentiment touches you." << endl;
                    cout << "\"Thank you.\" you say." << endl;
                    cout << "You do an about-face and exit the cave." << endl;
                    cout << "You now have " + to_string(treasure) + " gold coins." << endl;
                    return(treasure);
                }else{
                    cout << "\"Woo-hoo-hoo, wee-hee-hee, now your gold belongs to me!\"" << endl;
                    cout << "Though you had trouble conjuring a solution to the riddle, the riddle was clearly made to be self-referrential." << endl;
                    cout << "\"Here, you need this more than I.\"" << endl;
                    treasure = treasure - 30;
                    cout << "The Greebler stares at the gold pieces. He tries to hide his face, but you notice his eyes welling with tears." << endl;
                    cout << "\"Thank you,\" he says." << endl;
                    cout << "Wordlessly, you exit the cave." << endl;
                    cout << "You now have " + to_string(treasure) + " gold coins." << endl;
                    return(treasure);
                }
            }else{
                cout << "\"Woo-hoo-hoo, wee-hee-hee, now your gold belongs to me.\"" << endl;
                int randomValue = distrib(gen);
                treasure = treasure - randomValue;
                cout << "You now have " + to_string(treasure) + " gold coins." << endl;
                cout << "Merlin's beard. How was I outwitted by the Greebler...?" << endl;
                return(treasure); 
            }
        }else{
            cout << "\"Woo-hoo-hoo, wee-hee-hee, now your gold belongs to me.\"" << endl;
            int randomValue = distrib(gen);
            treasure = treasure - randomValue;
            cout << "You now have " + to_string(treasure) + " gold coins." << endl;
            cout << "Merlin's beard. How was I outwitted by the Greebler...?" << endl;
            return(treasure); 
        }
    }else{
        cout << "\"Woo-hoo-hoo, wee-hee-hee, from this dungeon you will never flee!\"" << endl;
        cout << "You raise your mace against him and land a blow." << endl;
        cout << "He practically explodes into smithereens. There was no reason to use that much force." << endl;
        cout << "Amidst the shreds of clothing and chunks of what used to be the Greebler sit 30 gold pieces." << endl;
        treasure = treasure + 30;
        cout << "You now have " + to_string(treasure) + " gold coins." << endl;
        cout << "Wait..." << endl;
        cout << "You claimed a gnome's life for what? 30 pieces of gold?" << endl;
        cout << "Though he threatened you, he was far too small to do any real damage." << endl;
        cout << "You wipe what remains of the Greebler off of your armor and you continue on, though visibly shaken." << endl;
        return(treasure);
    }

}

int introduction(){
    cout << "Dear player,\n To play the game, choose a cave from 1-10 WISELY! \n For you will be walking into a cave, whose inhabitant may or may not take your money.\n You will die if you lose all of your coins!" << endl;
    cout << "WARNING: Allow messages to fully load before pressing ENTER." << endl;
    return 0;
}

int chooseCave(){
    int cave;
    cout << "There are 10 caves in this dungeon... which would you like to enter first? " << endl;
    cin >> cave;
    return(cave);
}

int report(int treasure){
    cout << "You now have " + to_string(treasure) + " gold coins." << endl;
    if(treasure < 50){
        cout << "You left this game broke. Try again next time." << endl;
    }else if(treasure < 100){
        cout << "You left the game middle class... That makes you exceedingly average. Congratulations?" << endl;
    }else{
        cout << "Baby, you're a rich man! The tale of your heroism will be relayed in oral tradition for generations to come!" << endl;
    }
    return 0;
}

int main()
{
    int hp = 100;
    int treasure = 50;
    introduction();
    //cave9(hp, treasure);
    //cave10(hp, treasure);
    for(int i = 0; i < 5; i++){
        int cave = chooseCave();
        if(treasure > 0 && cave == 1){
            treasure = cave1(treasure);
        }else if(treasure > 0 && cave == 2){
            treasure = cave2(treasure);
        }else if(treasure > 0 && cave == 3){
            treasure = cave3(treasure);
        }else if(treasure > 0 && cave == 4){
            treasure = cave4(treasure);
        }else if(treasure > 0 && cave == 5){
            treasure = cave5(treasure);
        }else if(treasure > 0 && cave == 6){
            treasure = cave6(treasure);
        }else if(treasure > 0 && cave == 7){
            treasure = cave7(treasure);
        }else if(treasure > 0 && cave == 8){
            treasure = cave8(hp, treasure);
        }else if(treasure > 0 && cave == 9){
            treasure = cave9(hp, treasure);
        }else if(treasure > 0 && cave == 10){
            treasure = cave10(hp, treasure);
        }else{
            cout << "Before you can continue your journey, you meet with an unfortunate demise." << endl;
            break;
        }
    }
    
    return 0;
}



