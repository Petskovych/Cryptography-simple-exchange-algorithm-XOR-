# Cryptography-simple-exchange-algorithm-XOR-
XOR-exchange (English Xor swap algorithm) is an algorithm that uses a bitwise XOR operation (exclusive "or") to exchange values ​​between variables containing data of the same type, without using an additional (temporary) variable. The solution to the problem is provided by the self-reversibility property of XOR: A XOR A = 0 for all A.

Основні кроки роботи алгоритму:

Шифрування: Кожен символ відкритого тексту комбінується за допомогою операції XOR з відповідним символом ключа. Якщо довжина ключа коротша за довжину тексту, ключ циклічно повторюється.

Дешифрування: Зашифрований текст знову комбінується з ключем за допомогою операції XOR, щоб відновити вихідний відкритий текст. Той самий ключ використовується для розшифрування.
