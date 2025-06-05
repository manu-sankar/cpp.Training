#include <iostream>
#include <forward_list>
#include <string>
#include <algorithm>

int main() {
    std::forward_list<std::string> messages = { "Hi", "Hello", "DELETED: Spam", "How are you?", "DELETED: Abuse" };

    messages.remove_if([](const std::string& msg) {
        return msg.rfind("DELETED:", 0) == 0;
        });


    for (const auto& msg : messages) {
        std::cout << msg << " ";
    }

    return 0;
}