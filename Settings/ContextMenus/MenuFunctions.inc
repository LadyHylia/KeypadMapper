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
OnUpdateAction=[!WriteKeyValue Variables Profile02 "[Profile02Measure]" "#ROOTCONFIGPATH#Settings\Settings.inc"]

[Profile03Measure]
Measure=Plugin
Plugin=FileView
Path=[MeasureProfileList]
Type=FileName
Index=3
OnUpdateAction=[!WriteKeyValue Variables Profile03 "[Profile03Measure]" "#ROOTCONFIGPATH#Settings\Settings.inc"]

[Profile04Measure]
Measure=Plugin
Plugin=FileView
Path=[MeasureProfileList]
Type=FileName
Index=4
OnUpdateAction=[!WriteKeyValue Variables Profile04 "[Profile04Measure]" "#ROOTCONFIGPATH#Settings\Settings.inc"]

[Profile05Measure]
Measure=Plugin
Plugin=FileView
Path=[MeasureProfileList]
Type=FileName
Index=5
OnUpdateAction=[!WriteKeyValue Variables Profile05 "[Profile05Measure]" "#ROOTCONFIGPATH#Settings\Settings.inc"]

[Profile06Measure]
Measure=Plugin
Plugin=FileView
Path=[MeasureProfileList]
Type=FileName
Index=6
OnUpdateAction=[!WriteKeyValue Variables Profile06 "[Profile06Measure]" "#ROOTCONFIGPATH#Settings\Settings.inc"]

[Profile07Measure]
Measure=Plugin
Plugin=FileView
Path=[MeasureProfileList]
Type=FileName
Index=7
OnUpdateAction=[!WriteKeyValue Variables Profile07 "[Profile07Measure]" "#ROOTCONFIGPATH#Settings\Settings.inc"]

[Profile08Measure]
Measure=Plugin
Plugin=FileView
Path=[MeasureProfileList]
Type=FileName
Index=8
OnUpdateAction=[!WriteKeyValue Variables Profile08 "[Profile08Measure]" "#ROOTCONFIGPATH#Settings\Settings.inc"]

[Profile09Measure]
Measure=Plugin
Plugin=FileView
Path=[MeasureProfileList]
Type=FileName
Index=9
OnUpdateAction=[!WriteKeyValue Variables Profile09 "[Profile09Measure]" "#ROOTCONFIGPATH#Settings\Settings.inc"]

[Profile10Measure]
Measure=Plugin
Plugin=FileView
Path=[MeasureProfileList]
Type=FileName
Index=10
OnUpdateAction=[!WriteKeyValue Variables Profile10 "[Profile10Measure]" "#ROOTCONFIGPATH#Settings\Settings.inc"]



