#include <iostream>

void receptionistmethod()
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
