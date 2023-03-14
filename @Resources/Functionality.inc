   [Variables]
	BlankProfilePath=#ROOTCONFIGPATH#@Resources\DefaultProfileStorage
	NewProfilePath=#ROOTCONFIGPATH#Settings\Profiles
	DefaultProfileName=DefaultProfile

	[TextStyle2]
		FontSize                = (#FontSizeKey#*((#Width#)/500))
;		ColorScheme				= 7,234,250,255
        FontFace                =Montserrat
        StringAlign             = centercenter
        clipString              = 2
        H                       =#ButtonSize#
        W                       =#ButtonSize#
        FontColor               =255,255,255,255
        AntiAlias               =1
        DynamicVariables        =1
        Group                   = MeterKeys
        MouseScrollDownAction   =[!UnpauseMeasure DynamicFontSizeMinus][!UpdateMeasure DynamicFontSizeMinus][!UpdateMeterGroup MeterKeys][!Redraw]
        MouseScrollUpAction     =[!UnpauseMeasure DynamicFontSizePlus][!UpdateMeasure DynamicFontSizePlus][!UpdateMeterGroup MeterKeys][!Redraw]
		

	[ImageStyle]
		ImageName          =#[#CURRENTSECTION]Path#
        X                  =[#CURRENTSECTION#:r]
        Y                  =[#CURRENTSECTION#:r]
        W                  =#ButtonSize#
        H                  =#ButtonSize#
        PreserveAspectRatio=1
        DynamicVariables=1
	
;	[EditModeStyle]
;	Meter=String
;	UpdateDivider=-1
;	UpdateAction=
;	LeftMouseUpAction=[!WriteKeyValue Variables [#[#CurrentSection]Color] "#CurrentPath#Settings\Profiles\#CurrentProfile#\Colors"]
;	RightMouseUpAction=[]
;	MiddleMouseUpAction=[]
	[MeasureEditModeValue]
	Measure=Calc
Formula=#EditMode#
IfCondition=(#CurrentSection#=1)

IfTrueAction=[!SetOptionGroup MeterKeys LeftMouseUpAction """[!WriteKeyValue Variables #*CurrentSection*#ColorScheme "#CurrentColor#" "#CURRENTPATH#\Settings\Profiles\#CurrentProfile#\Colors.inc"][!Refresh]"""]     [!SetOptionGroup MeterKeys RightMouseUpAction """[!WriteKeyValue Variables #*CurrentSection*#ColorScheme #**BaseColor**# "#CURRENTPATH#\Settings\Profiles\#CurrentProfile#\Colors.inc"][!Refresh]"""]     [!SetOptionGroup MeterKeys MiddleMouseUpAction """[!WriteKeyValue Variables #*CurrentSection*#Font #CurrentColor# "#CurrentPath\Settings\Profiles\#CurrentProfile#\Colors.inc"][!Refresh]"""]     [!SetOptionGroup MeterKeys MiddleMouseDoubleClick """[!WriteKeyValue Variables #*CurrentSection*#Font #**BaseColorFont***# "#CurrentPath\Settings\Profiles\#CurrentProfile#\Colors.inc"][!Refresh]"""]    [!SetOptionGroup MeterKeys LeftMouseDoubleClickAction """[!WriteKeyValue Variables #*CurrentSection*#Fill 0,0,0,1 "#CurrentPath#Settings\Profiles\#CurrentProfile#\Colors.inc"][!Refresh]"""]     [!SetOptionGroup MeterKeys RightMouseDoubleClickAction """[!WriteKeyValue Variables #*CurrentSection*#Fill #*CurrentSection*#ColorScheme"#CurrentPath#Settings\profiles\#CurrentProfile#\Colors.inc"][!Refresh]"""]






IfFalseAction=[!SetOptionGroup MeterKeys LeftMouseUpAction """[!SetVariable "INPUT-Var" #*CurrentSection*# ][!CommandMeasure "MeasureInput" "ExecuteBatch ALL"]"""][!SetOptionGroup MeterKeys RightMouseUpAction ""][!SetOptionGroup MeterKeys MiddleMouseUpAction ""]






DynamicVariables=1

	
	[DynamicFontSizePlus]
        Measure         =Calc
        Paused          =1
        OnUpdateAction  =[Play "#@#Sounds\Scroll.wav"][!WriteKeyValue Variables FontSizeKey "((#FontSizeKey#)+1)"][!SetVariable FontSizeKey "((#FontSizeKey#)+1)"]
        DynamicVariables=1
    [DynamicFontSizeMinus]
        Measure         =Calc
        Paused          =1
        IfConditionMode =1
        IfCondition     =(#FontSizeKey#>1)
        IfTrueAction    =[Play "#@#Sounds\Scroll.wav"][!WriteKeyValue Variables FontSizeKey "((#FontSizeKey#)-1)"][!SetVariable FontSizeKey "((#FontSizeKey#)-1)"]
        DynamicVariables=1
    ; Inputbox for entering a new Keystorage
    [MeasureInput]
        Measure     =Plugin
        Plugin      =InputText
        SolidColor  =002366FF
        FontColor   =255,255,255,255
        FontFace    =Montserrat
        FontSize    =18
        X           =((#Width#/2)-240)
        Y           =(-30)
        H           =35
        W           =480
        ; These following lines are the heart of the skins functionality
        DefaultValue="[#[#INPUT-Var]Text]"
        Command1    =Play #@#Sounds\Input.wav
        Command2    =[!WriteKeyValue Variables """#INPUT-Var#Text""" """$UserInput$""" "#CURRENTPATH#Settings\Profiles\#CurrentProfile#\Values.inc"]
        Command3    =[!Refresh]
        
    ; Inputbox for changing the skin size and global font size
    [MeasureInput2]
        Measure    =Plugin
        Plugin     =InputText
        SolidColor =002366FF
        FontColor  =255,255,255,255
        FontFace   =Montserrat
        FontSize   =18
        X          =((#Width#/2)-240/2)
        Y          =(-30)
        H          =40
        W          =240
        InputNumber=1
        Command1   =[!WriteKeyValue Variables  "$UserInput$"] X="0"  W="700"  DefaultValue="1. Width | 2.FontSize Scale | PRESS ENTER to continue" InputLimit="0" stringStyle="bold" FontColor=FFFF08FF StringAlign="center"    
        Command2   =[!WriteKeyValue Variables Width "$UserInput$"] DefaultValue="#Width#"
        Command3   =[!WriteKeyValue Variables FontSizeKey "$UserInput$"] DefaultValue="#FontSizeKey#"
        Command4   =!Refresh #CURRENTCONFIG#
		
	[MeasureSkinPosition]
Measure=Calc
Formula=(#CURRENTCONFIGX#+#CURRENTCONFIGY#)
OnChangeAction=[!Move (#CURRENTCONFIGX#) (#CURRENTCONFIGY#) "SkinFolder\Skin SubFolder (if exists)" "SecondSkin.ini"]
DynamicVariables=1
UpdateDivider=-1

	[FileBrowser]
Measure=Plugin
Plugin=FileChoose
UseNewStyle=0
GetTarget=1
AllowNonstorageFolder=1
CopyLink=1
LinkCache=#CurrentPath#
GetIcon=1
IconCache=#CurrentPath#
IconSize=3
ReturnValue=Path
FileInitialDirectory=
ImageInitialDirectory=


Command1=[!WriteKeyValue Variables #Input-Var#ImagePath "$Path$" "#CURRENTPATH#\Settings\Profiles\#CurrentProfile#\Images.inc"][!Update]
Command2=[!Refresh]

[MeasureNewProfileInput]
        Measure    =Plugin
        Plugin     =InputText
		DefaultValue=NewProfile
        SolidColor =002366FF
        FontColor  =255,255,255,255
        FontFace   =Montserrat
        FontSize   =18
        X          =((#Width#/2)-240/2)
        Y          =(-30)
        H          =40
        W          =240 
		Command1	=[!WriteKeyValue Variables CurrentProfile "$UserInput$" "#CURRENTPATH#\Settings\Settings.inc"]
		Command2	=[!CommandMeasure "MeasureNewProfile" "Run"]
		
[MeasureNewProfile]
Measure=Plugin
Plugin=RunCommand
Parameter="Xcopy "#BlankProfilePath#" "#NewProfilePath#" /E /I /Y /Q " 
;Currently copies files inside the folder, but not the parent folder :(
FinishAction=[!CommandMeasure "MeasureNewProfileRename" "Run"]

[MeasureNewProfileRename]
Measure=Plugin
Plugin=RunCommand
Parameter=Rename "#NewProfilePath#\#DefaultProfileName#" "#CurrentProfile#"