#include <iostream>
#include "stage1-Left_Hallway.h" // This is the link to stage1_hallways which will have the functions for stage 1 left hallway
#include "stage1_variables.h" // link to stage1_variables which will have the variables for all stage 1 variables and declarations

int main()
{

    int stage1;
    int talk_to_receptionist = 0;
    int talk_to_guard = 0;

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
            if (stage1 == 1 && talk_to_receptionist > 0 && talk_to_guard > 0)
            {

                std::cout << "The guard just told me they saw the thief running down the right hallway. Why would I try to ask the receptionist again?\n";

                std::cin >> stage1;
            }
            else if (stage1 == 1 && talk_to_receptionist == 0 && talk_to_guard > 0)
            {

                std::cout << "There is no point in talking to the receptionist if the thief is down the right hallway.\n";

                std::cin >> stage1;
            }
            else if (stage1 == 1 && talk_to_receptionist == 0)
            {
                talk_to_receptionist++;
                std::cout << "You rush to the front desk receptionist hoping to get an answer.\n";
                std::cout << "You: Excuse me! Have you seen someone wearing a black hoodie run in here? They stole my backpack with my laptop and schoolwork.\n";
                std::cout << "Receptionist: I am really sorry. As you can see, we are absolutely slammed. You could try asking the security guard.\n";
                std::cout << "You: Okay. They told me to try asking the security guard. Maybe they saw something. Lets try it.\n";

                std::cin >> stage1;
            }
            else if (stage1 == 1 && talk_to_receptionist > 0)
            {

                std::cout << "Why would I ask the receptionist again? They are just going to tell me to ask the security guard...\n";

                std::cin >> stage1;
            }
        }
        while (stage1 == 2)
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
        while (stage1 == 3)
        {

            Stage1Hallway hallway;
            hallway.hallwaymethod();

            /* if (stage1 == 3)
             {

                 std::cout << "You: Left hallway it is. Lets hope I am right.\n";
             } */
        }
        while (stage1 == 4)
        {
            if (stage1 == 4)
            {

                std::cout << "You: Right hallway. 50/50.\n";
            }
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

// All variables in stage1_variables. Global. clean.
// ALl logic inside stage1-hallway.h keeping main function clean