#include <iostream>
#include <string>

using namespace std;

int main() {
	const string alphabet{ "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ" };
	const string key{ "zyxwvutsrqponmlkjihgfedcbaZYXWVUTSRQPONMLKJIHGFEDCBA" };
	
	string sent_message{};
	string encrypted_message{};
	int alpha_location{};
	string decrypted_message{};
	int key_location{};

	// message sending
	cout << "\nEnter a message to send: ";
	getline(cin, sent_message);

	// encryption
	for (size_t i = 0; i < sent_message.length(); i++) {
		alpha_location = alphabet.find(sent_message.at(i));
		if (alpha_location != string::npos)
		{
			encrypted_message += key.at(alpha_location);
		}
		else
		{
			encrypted_message += sent_message.at(i);
		}
	}

	cout << endl << encrypted_message << endl;

	// decryption
	for (size_t i = 0; i < encrypted_message.length(); i++) {
		key_location = key.find(encrypted_message.at(i));
		if (key_location != string::npos)
		{
			decrypted_message += alphabet.at(key_location);
		}
		else
		{
			decrypted_message += encrypted_message.at(i);
		}
	}

	cout << endl << decrypted_message << endl;
}