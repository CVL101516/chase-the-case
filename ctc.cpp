#include <iostream>
#include "stage1_variables.h"
#include "stage1-Receptionist.h" // This is the link to stage1_hallways which will have the functions for stage 1 left hallway
#include "stage1-SecurityGuard.h"
#include "stage1-LeftHallway.h"
#include "stage1-RightHallway.h"

int main()
{

    std::cout << "\n";
    std::cout << "You: Great. They ran into the hospital. One of the busiest buildings that they could have chosen.\n\n";
    std::cout << "As you rush inside you are overwhelemed by the sights and noises from the multitude doctors, nurses, and patients. But, you do not see the thief.\n\n";

    std::cout << "What do you do?\n\n";
    std::cout << "1) Ask the front desk receptionist if they have seen the perpetrator.\n";
    std::cout << "2) Ask the security guard if they have seen the person that stole your backpack.\n";
    std::cout << "3) Run down the left hallway in hopes you catch a glimpse of the thief.\n";
    std::cout << "4) Run down the right hallway knowing you could be wrong.\n";
    std::cin >> stage1;

    while (stage1 == 1 || 2 || 3 || 4)
    {
        while (stage1 == 1)
        {
            receptionistmethod();
        }
        while (stage1 == 2)
        {
            securityguardmethod();
        }
        while (stage1 == 3)
        {
            lefthallwaymethod();
        }
        while (stage1 == 4)
        {
            righthallwaymethod();
        }
        /*   else
           {

               std::cout << "Come on...I have got to make a choice. Now is not the time for indecision.\n";

               std::cin >> stage1;

               if (stage1 == 1 && talk_to_receptionist > 0)
               {

                   std::cout << "Why would I ask the receptionist again? They are just going to tell me to ask the security guard...\n";

                   std::cin >> stage1;
               }
               else if (stage1 == 2 && talk_to_guard > 16)
               {

                   std::cout << "Why would I talk to the guard again? They told me the thief was down the right hallway...\n";

                   std::cin >> stage1;
               }
           } */
    }
}

// Figure out how to stop the loop for option 3 and option 4.
// Even though the count of talk_to_receptionist and talk_to_guard goes up. still sometimes triggers as if you are talking to them for the very first time.
