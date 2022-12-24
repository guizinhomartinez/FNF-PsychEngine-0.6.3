package;

#if windows
@:buildXml('
<target id="haxe">
    <lib name="dwmapi.lib" if="windows" />
</target>
')
@:headerCode('
#include <Windows.h>
#include <cstdio>
#include <iostream>
#include <tchar.h>
#include <dwmapi.h>
#include <winuser.h>
')
#elseif linux
@:headerCode("#include <stdio.h>")
#end

class CaptionBarData
{
    #if windows
    @:functionCode("
        HWND window = GetActiveWindow();

        int captionType = mode

        //COLORREF DARK_COLOR = 0x00FF0000;
        //BOOL SET_CAPTION_COLOR = SUCCEEDED(DwmSetWindowAttribute(WINhWnd, DWMWINDOWATTRIBUTE::DWMWA_CAPTION_COLOR,
        //&DARK_COLOR, sizeof(DARK_COLOR)))


        if (S_OK != DwmSetWindowAttribute(WINhWnd, DWMWINDOWATTRIBUTE::DWMWA_CAPTION_COLOR)) {
            DwmSetWindowAttribute(caption, 20, &captionType, sizeof(captionType));
        }
    ")
    //@:noCompletion
	public static function _setCaptionBar(mode:Int)
	{
	}

    public static function setCaptionBar(mode:CaptionType)
    {
        var captionType = cast(mode, Int);

        if (captionType > 1 || captionType < 0) {
            Sys.println("sorry, it doesn't exist buddy");

            return;
        }
        _setCaptionBar(captionType);
    }
    #end
}

@:enum abstract CaptionType(Int)
{
	var RED:CaptionType = 1;
	var NORMAL:CaptionType = 0;
}