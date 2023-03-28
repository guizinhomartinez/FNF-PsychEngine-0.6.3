package;

#if sys
import sys.FileSystem;
import sys.io.File;
#end

import lime.utils.Assets;
import flixel.tweens.FlxEase;
import flixel.tweens.FlxTween;
import flixel.FlxSprite;
import flixel.group.FlxSpriteGroup;
import flixel.text.FlxText;
import flixel.util.FlxColor;
import flixel.util.FlxTimer;

using StringTools;

/**
 * Original script from Project MSG (I don't know if they made the script or not)
 */

class SongIntro extends FlxSpriteGroup
{
    var jukeBoxTag:FlxSprite;
    var jukeBox:FlxSprite;
    var jukeBoxText:FlxText;
    var jukeBoxSubText:FlxText;

    public function new(?introTextSize:Int = 25, ?introSubTextSize:Int = 30, ?songName:Dynamic = "", ?introTagWidth:Int = 15)
    {
        super();
        songName = PlayState.SONG.song;

        var introTagColor:FlxColor = FlxColor.fromRGB(PlayState.instance.dad.healthColorArray[0], 
            PlayState.instance.dad.healthColorArray[1], PlayState.instance.dad.healthColorArray[2]);

        jukeBoxTag = new FlxSprite(-305 - introTagWidth, 15);
        jukeBoxTag.makeGraphic(300 + introTagWidth, 100, introTagColor);
        jukeBoxTag.cameras = [PlayState.instance.camOther];
        add(jukeBoxTag);

        jukeBox = new FlxSprite(-305 - introTagWidth, 15);
        jukeBox.makeGraphic(300, 100, FlxColor.BLACK);
        jukeBox.cameras = [PlayState.instance.camOther];
        add(jukeBox);

        jukeBoxText = new FlxText(-305 - introTagWidth, 30, 300, "Now Playing:", introTextSize);
        jukeBoxText.setFormat(Paths.font("vcr.ttf"), introTextSize, FlxColor.WHITE, LEFT, FlxTextBorderStyle.OUTLINE, FlxColor.BLACK);
        jukeBoxText.scrollFactor.set();
		jukeBoxText.borderSize = 1.25;
		jukeBoxText.antialiasing = ClientPrefs.globalAntialiasing;
        add(jukeBoxText);

        jukeBoxSubText = new FlxText(-305 - introTagWidth, 60, 300, songName, introTextSize);
        jukeBoxSubText.setFormat(Paths.font("vcr.ttf"), introTextSize, FlxColor.WHITE, LEFT, FlxTextBorderStyle.OUTLINE, FlxColor.BLACK);
        jukeBoxSubText.scrollFactor.set();
		jukeBoxSubText.borderSize = 1.25;
		jukeBoxSubText.antialiasing = ClientPrefs.globalAntialiasing;
        add(jukeBoxSubText);
    }
}