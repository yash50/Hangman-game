using namespace std;

int main() {

  // Store words for each category in corresponding arrays
  String animals[] = {"Alligator", "Bear, "Cheetah", "Wolf", "Yak", "Zebra"};
  String cars[] = {"Audi", "BMW", "Cadillac", "Tesla", "Toyota", "Volkswagen"};
  String movies[] = {"Aladdin", "Bambi", "Chinatown", "Superbad", "Titanic", "Twilight"};
  String music[] = {"ABBA", "Adele", "Aerosmith", "Sia", "Shakira", "Usher"};
  String sports[] = {"Badminton", "Baseball", "Basketball", "Tennis", "Volleyball", "Wrestling"};


  // Game should continue unless stopped
  while(1){

    // Display the available categories and ask for choice
    cout<<"Select a category:"<<endl;
    cout<<"1 - Animals"<<endl;
    cout<<"2 - Cars"<<endl;
    cout<<"3 - Movies"<<endl;
    cout<<"4 - Music"<<endl;
    cout<<"5 - Sports"<<endl;
    cout<<"Enter you choice: ";

    int ch;
    cin>>ch;

    String word = "";

    switch(ch) {
    case 1:

    break;

    case 2:

    break;

    case 3:

    break;

    case 4:

    break;

    case 5:

    break;

    default:
    cout<<"Please enter a valid choice"<<endl;
    break;

    }

    // If user didn't select a proper category
    if(word == "")
    break;

    // Start guessing

  }

  return 0;
}
