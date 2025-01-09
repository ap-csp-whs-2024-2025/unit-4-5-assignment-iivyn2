#include <iostream>  // std::cin, std::cout
#include <string>    // std::string, std::getline
#include <vector>    // std::vector

template <typename T>    // no need to worry about this; Mr. Vu is using this to make teaching easier
void displayList(std::vector<T> const &v);

int main()
{
    // task 1
std::vector<int> jennys = {8,6,7,5,3,0,9};
std::vector<double> foo = {3.14,2.5,4.3,1.3,6.7};
std::vector<std::string> bar = {"hello", "darkness", "my", "old", "friend"};

// task 2
std::cout << jennys[0];
std::cout << jennys[2];
std::cout << jennys[4];

std::cout << foo[0];
std::cout << foo[2];
std::cout << foo[4];

std::cout << bar[0];
std::cout << bar[2];
std::cout << bar[4] << std::endl;

// task 3 

    return 0;
}





// ignore everything down here
template <typename T>
void displayList(std::vector<T> const &v)
{
    if (v.empty())
    {
        std::cout << "[]\n";
        return;
    }

    std::cout << "[";
    for (int i = 0; i < v.size()-1; ++i)
    {
        std::cout << v[i] << ", ";
    }
    std::cout << v.back() << "]\n";
}