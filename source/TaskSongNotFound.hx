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

using StringTools;

/**
 * Made by: the V.S impostor v4 team
 * I only remade (some of) the part where the game reads if the info.txt file exists cuz for some reason it was not working
 * Maybe some day I will make a better sytem than my old one XD
 */

class TaskSongNotFound extends FlxSpriteGroup
{
    var meta:Array<Array<String>> = [];
    var size:Float = 0;
    var fontSize:Int = 24;
    public static var icon:HealthIcon;

    public function new(_x:Float, _y:Float, _song:String, ?_numberThing:Int = -1) {
        super(_x, _y);

        var addToPath = "";
        if(_numberThing != -1){
            addToPath = "" + _numberThing;
        }

        var pulledText:String = "Song: " + PlayState.SONG.song + "\n" + "Composer: Probably KwaiiSprite";

        var splitText:Array<String> = [];
        
        splitText = pulledText.split('\n');
        
        //theres literally no reason to have more than 2 lines
        //cry
        splitText.resize(2);

        trace(splitText.length);

        var text = new FlxText(0, 0, 0, "", fontSize);
        text.setFormat(Paths.font("vcr.ttf"), fontSize, FlxColor.WHITE, FlxTextAlign.LEFT, FlxTextBorderStyle.OUTLINE, FlxColor.BLACK);

        var text2 = new FlxText(0, 30, 0, "", fontSize);
        text2.setFormat(Paths.font("vcr.ttf"), fontSize, FlxColor.WHITE, FlxTextAlign.LEFT, FlxTextBorderStyle.OUTLINE, FlxColor.BLACK);


        text.text = splitText[0];
        text2.text = splitText[1];

        text.updateHitbox();
        text2.updateHitbox();

        size = text2.fieldWidth;
        
        var bg = new FlxSprite(fontSize/-2, fontSize/-2).makeGraphic(Math.floor(size + fontSize), Std.int(text.height + text2.height + 20));
        bg.color = FlxColor.fromRGB(PlayState.instance.dad.healthColorArray[0], PlayState.instance.dad.healthColorArray[1], PlayState.instance.dad.healthColorArray[2]);
        bg.height = text.height + text2.height;
        bg.alpha = 0.47;

        icon = new HealthIcon(PlayState.instance.dad.healthIcon, false);
        icon.y = text.y - 60;
        icon.x = text.x + 100;
        icon.animation.curAnim.curFrame = 0;
        icon.scale.x = 0.25; icon.scale.y = 0.25;

        text.text += "\n";

        add(bg);
        add(text);
        add(text2);
        //yknow what? i will make this next line as compact as possible
        if(text2.fieldWidth>text.fieldWidth)add(icon);

        x -= size;
        visible = false;
        
    }

    public function start()
    {
        visible = true;

        FlxTween.tween(this, {x: x + size + (fontSize/2)}, 1, {ease: FlxEase.quintInOut,
        onComplete: function(twn:FlxTween)
        {
            FlxTween.tween(this, {x: x - size - 50}, 1, {ease: FlxEase.quintInOut, startDelay: 2,
            onComplete: function(twn:FlxTween)
            {
                this.destroy();
            }});
        }});
    }
}