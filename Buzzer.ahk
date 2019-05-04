#SingleInstance force

#^b::
SoundSet, 0, MASTER, MUTE
SoundGet, loudness, MASTER, VOLUME
if loudness < 20
	SoundSet, 20, MASTER, VOLUME
Process, Close, vlc.exe
Run, %A_ProgramFiles% (x86)\VideoLAN\VLC\vlc.exe -Idummy Buzzer.ogg, %A_WorkingDir%, Hide
return

#^!b::
Process, Close, vlc.exe
return