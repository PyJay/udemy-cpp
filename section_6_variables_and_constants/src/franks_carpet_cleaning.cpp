#include <iostream>

int main()
{
    const int small_room_price{25};
    const int large_room_price{35};
    const int valid_days{30};
    int n_small_rooms;
    int n_large_rooms;
    std::cout << "Frank's carpet cleaning service" << std::endl;
    std::cout << "How many small rooms?" << std::endl;
    std::cin >> n_small_rooms;
    std::cout << "How many large rooms?" << std::endl;
    std::cin >> n_large_rooms;
    std::cout << "\n";
    std::cout << "Estimate for carpet clearning service:\n";
    std::cout << "Number of small rooms:" << n_small_rooms << std::endl;
    std::cout << "Number of large rooms:" << n_large_rooms << std::endl;
    std::cout << "Price per small room: $" << small_room_price << std::endl;
    std::cout << "Price per large room: $" << large_room_price << std::endl;
    int base_cost {(n_small_rooms * small_room_price) + (n_large_rooms * large_room_price)};
    std::cout << "Cost: $" << base_cost << std::endl;
    std::cout << "Tax: $" << base_cost * 0.06 << std::endl;
    std::cout << "==========================================" << std::endl;
    std::cout << "Total estimate: $" << base_cost + (base_cost * 0.06) << std::endl;
    std::cout << "This estimate is valid for " << valid_days << " days" << std::endl;
    return 0;
}
