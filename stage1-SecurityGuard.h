#include <iostream>

void securityguardmethod()
{

    if (stage1 == 2 && talk_to_guard == 0)
    {

        talk_to_guard++;
        std::cout << "You: Hello Security Guard! My backpack was stolen by somebody in a black hoodie. Did you happen to see where they went?\n";
        std::cout << "Security Guard: I saw somebody run in here wearing a black hoodie and a backpack. They went down the right hallway.\n";
        std::cout << "You: Thank you so much!\n";
        std::cout << "You: Okay. The guard said right hallway.\n";

        std::cin >> stage1;
    }
    else if (stage1 == 2 && talk_to_guard > 0)
    {

        std::cout << "Why would I talk to the guard again? They told me they saw the thief down the right hallway.\n";

        std::cin >> stage1;
    }
}