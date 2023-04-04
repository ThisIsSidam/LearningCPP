#include <iostream>
#include <vector>

int main() {

    std::vector<int> nums {1, 2, 5, 4};

    int target;
    std::cout << "Enter: ";
    std::cin >> target;

    int i {0}, j {0};



    std::cout << i << " " << nums.size() << '\n';
    while ( i < nums.size() ) 
    {
        std::cout << i << " " << j << '\n';
        if ( target == nums.at(i) + nums.at(j) ) 
        {   
            std::vector<int> vec {i, j};
            std::cout << vec.at(i) << " " << vec.at(j);
        }
        else 
        {
            if ( j == nums.size() -1 )
            {
               j = 0;
               i++;
           }
           else 
           {
               j++;
           }
       }
    }

    return 0;
}