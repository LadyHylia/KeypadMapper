[StyleKey]
DynamicVariables=1
UpdateDivider=-1
x=r
y=r
Shape	=Rectangle 0,0,#ButtonSize#,#ButtonSize# | Fill Color 0,0,0,1 | StrokeWidth 1 | StrokeColor #CurrentSection##ColorScheme#
;Hidden=(#Rows#<#CURRENTSECTION#)?

[StyleKey_Wide]

[StyleKey_Tall]

[StyleScrollWheel]

[StyleThumbStick]

[StyleArrow_Up]

[StyleArrow_Down]

[StyleArrow_Left]

[StyleArrow_Right]

[StyleArrow_UpRight]

[StyleArrow_UpLeft]

[StyleArrow_DownRight]

[StyleArrow_DownLeft]










;[ThumbStick]
;		Meter				=String
;		MeterStyle			=TextStyle2
;		
;
;		X                  =#4X#
 ;       Y                  =#5Y# + #ButtonSize# * 3
  ;    
	;	
	;	[ThumbStickShape]
;		Meter				= Shape
;		Shape				= Ellipse ([ThumbStick:X] + #ButtonSize#/2), ([ThumbStick:Y] + #ButtonSize#/2), #ButtonSize# * 1.7 | Fill Color 0,0,0,1 | StrokeWidth 1 | StrokeColor #ThumbStickColorScheme#
;		Shape2				= Ellipse ([ThumbStick:X] + #ButtonSize#/2), ([ThumbStick:Y] + #ButtonSize#/2), #ButtonSize#/2 | Fill Color 0,0,0,1 | StrokeWidth 1 | StrokeColor #ThumbStickColorScheme#
;	[ThumbStickUp]
;			Meter				=String
;		MeterStyle			=TextStyle2
;		
 ;       Text               =#ThumbStickUpText#
;	;	X                  =([ThumbStick:X]+ #ButtonSize#/2)
 ;       Y                  =([ThumbStick:Y]- #ButtonSize# + #Gap#/4)
 ;    
		
;		[ThumbStickUpShape]
;		Meter				= Shape
;		Shape				= Rectangle ([ThumbStick:X]+ #ButtonSize#/3), ([ThumbStick:Y]- #ButtonSize# + #Gap#/4), #ButtonSize#/3, #ButtonSize#/3  | Rotate 45 | Fill Color #ThumbUp0,0,0,1# | StrokeWidth 1 | StrokeColor #ThumbUpColorScheme#
;		Shape2				= Rectangle ([ThumbStick:X]+ #ButtonSize#/3), ([ThumbStick:Y]- #ButtonSize# - #Gap#/2 + #Gap#/4), #ButtonSize#/3, #ButtonSize#/3  | Rotate 45 | Fill Color #ThumbUp0,0,0,1# | StrokeWidth 1 | StrokeColor #ThumbUpColorScheme#
;		Shape3				= Combine Shape2 | Exclude Shape
;	[ThumbStickDown]
;		Meter				=String
;		MeterStyle			=TextStyle2
;		
 ;       Text               =#ThumbStickDownText#
;	;	X                  =([ThumbStick:X]+ #ButtonSize#/2)
;        Y                  =([ThumbStick:Y]+ #ButtonSize#*1.6+ #Gap#)
;     
;		
;		[ThumbStickDownShape]
;		Meter				= Shape
;		Shape				= Rectangle ([ThumbStick:X]+ #ButtonSize#/3), ([ThumbStick:Y]+ #ButtonSize#*1.7), #ButtonSize#/3, #ButtonSize#/3  | Rotate 45 | Fill Color 0,0,0,1 | StrokeWidth 1 | StrokeColor #ThumbDownColorScheme#
;		Shape2				= Rectangle ([ThumbStick:X]+ #ButtonSize#/3), ([ThumbStick:Y]+ #ButtonSize#*1.7 - #Gap#/2), #ButtonSize#/3, #ButtonSize#/3  | Rotate 45 | Fill Color 0,0,0,1 | StrokeWidth 1 | StrokeColor #ThumbDownColorScheme#
;		Shape3				= Combine Shape | Exclude Shape2
;	[ThumbStickLeft]
;		Meter				=String
;		MeterStyle			=TextStyle2
;		
 ;       Text               =#ThumbStickLeftText#
	;	X                  =([ThumbStick:X]+ #ButtonSize#*2)
;        Y                  =([ThumbStick:Y] + #Gap#*2)
 ;    
	;	
;		[ThumbStickLeftShape]
;		Meter				= Shape
;		Shape				= Rectangle ([ThumbStick:X]+ #ButtonSize#*1.7), ([ThumbStick:Y] + #Gap#*1.5), #ButtonSize#/3, #ButtonSize#/3  | Rotate 45 | Fill Color 0,0,0,1 | StrokeWidth 1 | StrokeColor #ThumbLeftColorScheme#
;		Shape2				= Rectangle ([ThumbStick:X]+ #ButtonSize#*1.7 - #Gap#/2), ([ThumbStick:Y] + #Gap#*1.5), #ButtonSize#/3, #ButtonSize#/3  | Rotate 45 | Fill Color 0,0,0,1 | StrokeWidth 1 | StrokeColor #ThumbLeftColorScheme#
;		Shape3				= Combine Shape | Exclude Shape2
;	[ThumbStickRight]	
;		Meter				=String
;		MeterStyle			=TextStyle2
;		
 ;       Text               =#ThumbStickRightText#
	;	X                  =([ThumbStick:X]- #ButtonSize#)
     ;   Y                  =([ThumbStick:Y] + #Gap#*2)
      ;
		;
;		[ThumbStickRightShape]
;		Meter				= Shape
;		Shape				= Rectangle ([ThumbStick:X]-#ButtonSize#), ([ThumbStick:Y] + #Gap#*1.5), #ButtonSize#/3, #ButtonSize#/3  | Rotate 45 | Fill Color 0,0,0,1 | StrokeWidth 1 | StrokeColor #ThumbRightColorScheme#
;		Shape2				= Rectangle ([ThumbStick:X]-#ButtonSize#- #Gap#/2), ([ThumbStick:Y] + #Gap#*1.5), #ButtonSize#/3, #ButtonSize#/3  | Rotate 45 | Fill Color 0,0,0,1 | StrokeWidth 1 | StrokeColor #ThumbRightColorScheme#
;		Shape3				= Combine Shape2 | Exclude Shape
;	[ThumbStickNorthWest]
;			Meter				=String
;		MeterStyle			=TextStyle2
;		
 ;       Text               =#ThumbStickNorthWestText#
;	;	X                  =([ThumbStick:X]-#ButtonSize#/2+ #Gap#/2)
 ;       Y                  =([ThumbStick:Y]- #ButtonSize# + #Gap#*1.5)
  ;    
	;	
;		[ThumbStickNorthWestShape]
;		Meter				= Shape
	;	X					=	([ThumbStick:Y]- #ButtonSize# + #Gap#/4)
	;	Y					=([ThumbStick:Y]- #ButtonSize# + #Gap#/4)
;		Shape				= Rectangle ([ThumbStick:X] - #ButtonSize#/2 - #Gap#/8), ([ThumbStick:Y]- #ButtonSize# + #Gap#*1.9), #ButtonSize#/3, #ButtonSize#/3  | Fill Color 0,0,0,1 | StrokeWidth 3 | StrokeColor #ThumbUpLeftColorScheme#
;		Shape2				= Rectangle ([ThumbStick:X]-#ButtonSize#/2- #Gap#/2), ([ThumbStick:Y]- #ButtonSize# + #Gap#*1.5), #ButtonSize#/3, #ButtonSize#/3 | Fill Color 0,0,0,1 | StrokeWidth 1 | StrokeColor #ThumbUpLeftColorScheme#
;		Shape3				= Combine Shape2 | Exclude Shape
;	[ThumbStickNorthEast]
;
;		Meter				=String
;		MeterStyle			=TextStyle2
;		
 ;       Text               =#ThumbStickNorthEastText#
	;	X                  =([ThumbStick:X]+#ButtonSize#+ #Gap#*2)
     ;   Y                  =([ThumbStick:Y]- #ButtonSize# + #Gap#*1.5)
		
		
;		[ThumbStickNorthEastShape]
;		Meter				= Shape
;	;	X					=	([ThumbStick:Y]- #ButtonSize# + #Gap#/4)
;	;	Y					=([ThumbStick:Y]- #ButtonSize# + #Gap#/4)
;		Shape				= Rectangle ([ThumbStick:X] + #ButtonSize# - #ArrowDelta#+ #Gap#), ([ThumbStick:Y]- #ButtonSize# + #Gap#*1.5 + #ArrowDelta#), #ButtonSize#/3, #ButtonSize#/3  | Fill Color 0,0,0,1 | StrokeWidth 3 | StrokeColor #ThumbUpRightColorScheme#
;		Shape2				= Rectangle ([ThumbStick:X]+#ButtonSize#+ #Gap#), ([ThumbStick:Y]- #ButtonSize# + #Gap#*1.5), #ButtonSize#/3, #ButtonSize#/3 | Fill Color 0,0,0,1 | StrokeWidth 1 | StrokeColor #ThumbUpRightColorScheme#
;		Shape3				= Combine Shape2 | Exclude Shape
;	[ThumbStickSouthWest]
;				Meter				=String
;		MeterStyle			=TextStyle2
;		
 ;       Text               =#ThumbStickSouthWestText#
	;	X                  =([ThumbStick:X]-#ButtonSize#/2+ #Gap#/2)
     ;   Y                  =([ThumbStick:Y]+ #ButtonSize# + #Gap#*2)
      
		
;		[ThumbStickSouthWestShape]
;		Meter				= Shape
;		Shape				= Rectangle ([ThumbStick:X] - #ButtonSize#/2), ([ThumbStick:Y]+ #ButtonSize# + #Gap#), #ButtonSize#/3, #ButtonSize#/3  | Fill Color 0,0,0,1 | StrokeWidth 3 | StrokeColor #ThumbDownLeftColorScheme#
;		Shape2				= Rectangle ([ThumbStick:X]-#ButtonSize#/2 - #ArrowDelta#), ([ThumbStick:Y]+ #ButtonSize# + #Gap# + #ArrowDelta#), #ButtonSize#/3, #ButtonSize#/3 | Fill Color 0,0,0,1 | StrokeWidth 1 | StrokeColor #ThumbDownLeftColorScheme#
;		Shape3				= Combine Shape2 | Exclude Shape
;	[ThumbStickSouthEast]
;		Meter				=String
;		MeterStyle			=TextStyle2
;		
 ;       Text               =#ThumbStickSouthEastText#
	;	X                  =([ThumbStick:X]+#ButtonSize#+ #Gap#*2)
     ;   Y                  =([ThumbStick:Y]+ #ButtonSize# + #Gap#*2)
		;LeftMouseUpAction  =[!SetVariable "INPUT-Var" "ThumbStickSouthEast--#Mod-State]" ][!CommandMeasure "MeasureInput" "ExecuteBatch ALL"]
		
;		[ThumbStickSouthEastShape]
;		Meter				= Shape
;		Shape				= Rectangle ([ThumbStick:X] + #ButtonSize# - #ArrowDelta# + #Gap#), ([ThumbStick:Y]+ #ButtonSize# + #Gap#), #ButtonSize#/3, #ButtonSize#/3  | Fill Color 0,0,0,1 | StrokeWidth 3 | StrokeColor #ThumbDownRightColorScheme#
;		Shape2				= Rectangle ([ThumbStick:X]+#ButtonSize#+ #Gap#), ([ThumbStick:Y]+ #ButtonSize# + #Gap# + #ArrowDelta#), #ButtonSize#/3, #ButtonSize#/3 | Fill Color 0,0,0,1 | StrokeWidth 1 | StrokeColor #ThumbDownRightColorScheme#
;		Shape3				= Combine Shape2 | Exclude Shape
		