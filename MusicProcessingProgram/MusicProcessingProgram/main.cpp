#include "menu.h"
#include "menu_vectors.h"
#include "bass.h"
int main()
{
	int device = -1; // Default Sounddevice
	int freq = 44100; // Sample rate (Hz)
	HSTREAM streamHandle; // Handle for open stream


						  /* Initialize output device */
	BASS_Init(device, freq, 0, 0, NULL);


	/* Load your soundfile and play it */
	streamHandle = BASS_StreamCreateFile(FALSE, "your_file.mp3", 0, 0, 0);
	BASS_ChannelPlay(streamHandle, FALSE);



	/* As very last, close Bass */
	BASS_Free(); 
	Menu main_menu(main_menu_strings);
	main_menu.show();

    return 0;
}

