#include <bass.h>
#include <iostream>
#include <chrono>
#include <thread>
using namespace std;
int main()
{
    BOOL bool_init = BASS_Init(-1, 44800, 0, 0, 0);
    if(!bool_init){
        cout << "Failed to Init This Function!!!" << endl;
        exit(3321)
    }
    else{
        BASS_Start();
        HSTREAM streamfunc = BASS_StreamCreateFile(0, (const void*)"Example.mp3", 0, 0, 0x4);
        if(!streamfunc){
            cout << "Failed to Init Music!!!" << endl;
            exit(3375)
        }
        BASS_ChannelPlay((DWORD)streamfunc, 0);
        while(true){
            std::this_thread::sleep_for(std::chrono::milliseconds(800000));
        }
        exit(322);
    }
    return 0;
}
