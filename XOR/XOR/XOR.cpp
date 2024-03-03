#include <iostream>
#include <string>

std::string XOR(const std::string& text, const std::string& key) 
{
    std::string result = "" ;
    for (size_t i = 0; i < text.length(); ++i)
    {
        result += text[i] ^ key[i % key.length()];
    }
    return result;
}

int main() {
    std::string plaintext;
    std::string key;

    std::cout << "Enter text to encrypt: ";
    std::getline(std::cin, plaintext);
    std::cout << "Enter encryption key: ";
    std::getline(std::cin, key);

    std::string ciphertext = XOR(plaintext, key);
    std::cout << "Ciphertext: " << ciphertext << std::endl;

  
    std::string decrypted_text = XOR(ciphertext, key);
    std::cout << "Decrypted text: " << decrypted_text << std::endl;

    return 0;
}
