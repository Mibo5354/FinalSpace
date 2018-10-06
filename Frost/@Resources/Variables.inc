[Variables]

Bands=40
; Number of peaks - Activate Frost\GenerateMeasures skin after changing this value

Color=50,227,255

Width=350	
Height=90
; "Real" spectrum dimensions - Activate Frost\GenerateMeters skin after changing these values

Scale=2
; Increases viewing size and performance at the expense of quality

SmoothEnds=1
; Prevents the waveform from clipping at the edges

AverageSize=1
; Average sound levels over time to provide continuity

LoudnessEqualization=1
; Increases visibility for quiet audio sources when applicable

FFTSize=256
FFTOverlap="(#FFTSize#-512)"
FFTAttack=30
FFTDecay=295
FreqMin=30
FreqMax=14640
Sensitivity=28
; http://docs.rainmeter.net/manual-beta/plugins/audiolevel

MusicPlayer=None
; Music player process name, such as "VLC" (not "VLC.exe")

FirstBandIndex=1
; "0" band should be skipped for aesthetic purpose

IdleAudioTimeout=1
; How long before hiding the visualizer when no sound is playing

; Environment variables for settings window
SkinGroup=Frost
Config=Frost
ConfigPath=C:\Users\ryanl\OneDrive\Documents\Rainmeter\Skins\Frost\Frost.ini
WriteVariable=Color
Flip=1
Horizontal=0
Invert=1
Channel=Avg
Port=Output
ID=
