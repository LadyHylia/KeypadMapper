[StyleKey]
DynamicVariables=1
UpdateDivider=-1
Group=GrpCell
X=((#CURRENTSECTION# * #gap#))
;Y=R
Shape = Rectangle [#CURRENTSECTION#:X],[#CURRENTSECTION#:Y],#ButtonSize#,#ButtonSize# | Fill Color 0,0,0,1 | StrokeWidth 1 | StrokeColor #01ColorScheme#
Hidden=(#Rows#<#CURRENTSECTION#)?

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