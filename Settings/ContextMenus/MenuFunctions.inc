[Rainmeter]

[Variables]



[MeasureProfileList]
Measure=Plugin
Plugin=FileView
Path=#ROOTCONFIGPATH#Settings\Profiles
ShowDotDot=0
ShowFile=0
ShowFolder=1
Count=15

[Profile01Measure]
Measure=Plugin
Plugin=FileView
Path=[MeasureProfileList]
Type=FileName
Index=1
OnUpdateAction=[!WriteKeyValue Variables Profile01 "[Profile01Measure]" "#ROOTCONFIGPATH#Settings\Settings.inc"]


[Profile02Measure]
Measure=Plugin
Plugin=FileView
Path=[MeasureProfileList]
Type=FileName
Index=2

[Profile03Measure]
Measure=Plugin
Plugin=FileView
Path=[MeasureProfileList]
Type=FileName
Index=3

[Profile04Measure]
Measure=Plugin
Plugin=FileView
Path=[MeasureProfileList]
Type=FileName
Index=4

[Profile05Measure]
Measure=Plugin
Plugin=FileView
Path=[MeasureProfileList]
Type=FileName
Index=5

[Profile06Measure]
Measure=Plugin
Plugin=FileView
Path=[MeasureProfileList]
Type=FileName
Index=6

[Profile07Measure]
Measure=Plugin
Plugin=FileView
Path=[MeasureProfileList]
Type=FileName
Index=7

[Profile08Measure]
Measure=Plugin
Plugin=FileView
Path=[MeasureProfileList]
Type=FileName
Index=8

[Profile09Measure]
Measure=Plugin
Plugin=FileView
Path=[MeasureProfileList]
Type=FileName
Index=9

[Profile10Measure]
Measure=Plugin
Plugin=FileView
Path=[MeasureProfileList]
Type=FileName
Index=10



[TextMeterStyle]
Meter=String
Measure=#*CurrentSection*#Measure
Text=[#*CurrentSection*#Measure:%1]

[Profile01]
Meter=String
Measure=Profile01Measure 
OnRefreshAction=[!WriteKeyValue Variables Profile01 "%1" "#ROOTCONFIG#Settings\Settings.inc"]


[ProfileSetMeasure]
Measure=String
String=Cring
