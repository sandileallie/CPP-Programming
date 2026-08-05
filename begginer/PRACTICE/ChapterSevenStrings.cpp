#include <iostream>
#include <string>

//String function I will be practicing on:
//      <identifier>.at(index) --> Returns the element at the position specified by the index.
//      <identifier>[index] --> the same as <identifier>.at(index
//      <identifier>.append(nOfcopies, <characters>) --> append nOfcopies of <character> to <identifier>, it add at the end of the string.
//      <idendifier>.append(<string>) --> append a string to <identifier>.
//      <identifier>.clear() --> delete all characters on <identifier>.
//      <identifier>.erase(<position>/Index, noOfCharacters) --> Delet noOfCharacters starting from <position>/Index.
//      <identifier>.find(<character>/<string>) --> Returns the index of the first occurence od <character>/<string>. If not found returns string::npos.
//      <identifier>.find(<character>/<string>, <position>/Index) --> Same as <identifier>.find(<character>/<string>) but now it start searching
//                                                                    from the specified <position>/Index.
//
//
//
//
//
//
//
//
//

int main(){

    std::string Name = "Sandile";

    std::cout << "function --> Name.at(6) print out : " << Name.at(6) << '\n';
    std::cout << "function --> Name[5] print out : " << Name[5] << '\n';

    std::cout << "function --> Name.append(3, 'S') : " << Name.append(3, 'S') << '\n';
    Name = "Sandile";
    std::string str1 = " Mashaba";
    std::cout << "function --> Name.append(str1) : " << Name.append(str1) << '\n';

    Name.clear();
    std::cout << "function --> Name.clear() : " << Name << '\n';

    Name = "Sandile";
    std::cout <<"function --> Name.erase(2, 5) : " << Name.erase(2, 5) << '\n';

    Name = "Sandile Mashaba";
    std::cout <<"function --> Name.find('i') : " << Name.find('i') << '\n';
    std::cout <<"function --> Name.find('a, 5 ) : " << Name.find('a', 5) << '\n';




    return 0;
}
