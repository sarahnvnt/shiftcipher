#include <iostream>

using namespace std;

void encrypth(){
    string plaintext,ciphertext;
    int s,i;
    char p,text;
    cout << "Masukan Kalimat atau plaintext  : ";
    cin.ignore(); getline (cin, plaintext);
    cout << "Masukan jumlah pergeseran : "; cin >> s;
    ciphertext = " ";

    for(i=0;i<plaintext.length();i++){
        p = plaintext[i];
        if(isalpha(plaintext[i])){
            if(isupper(p))
                p = (p+s-65)%26 + 65;
            else
                p = (p+s-97)%26 + 97;
        }
        ciphertext = ciphertext + p;
    }

    cout << "cipherteks setelah didekripsi : " << ciphertext <<endl;
    cout << "===============================================" <<endl;
}

void descrypth(){
    string plaintext,ciphertext;
    int s,i;
    char c,text;
    cout << "Ketikan Cipherteks : ";
    cin.ignore(); getline (cin, ciphertext);
    cout << "Masukan jumlah pergeseran : "; cin >> s;
    plaintext = " ";

    for(i=0;i<ciphertext.length();i++){
        c = ciphertext[i];
        if(isalpha(ciphertext[i])){
            if(isupper(c))
                c = (c-s-65)%26 + 65;
            else
                c = (c-s-97)%26 + 97;
        }
        plaintext = plaintext+ c;
    }

    cout << "plaintext setelah dienkripsi : " << plaintext<<endl;
    cout << "================================"<<endl;
}

int main()
{
    int pil;
    bool stop;
    stop = false;

    while (!stop)
    {
    	cout << "\n===============================================" <<endl;
        cout << "========Menu Shift Cipher========: " <<endl;
        cout << "1. Encrypth " <<endl;
        cout << "2. Descrypth " <<endl;
        cout << "3. Exit " <<endl;
        cout << "Pilih menu : "; cin >> pil;
        switch(pil){
            case 1 :
			encrypth();
			break;
            case 2 :
			descrypth();
			break;
            case 3 :
			stop = true;
			break;
        }
    }
    return 0;
}
