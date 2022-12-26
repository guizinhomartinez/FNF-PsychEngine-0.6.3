package;

import flixel.tweens.FlxEase;
import flixel.tweens.FlxTween;
import flixel.FlxG;
import flixel.util.FlxColor;
import flixel.text.FlxText;
import flixel.group.FlxGroup.FlxTypedGroup;
import haxe.Json;
//import PlayState;
#if desktop
import sys.io.File;
#end

using StringTools;

/**
 * The Lyric system is a little complicated but that's because I wanted to do something neat with it!
 * basically, you'll input the point of steps (1 by default, the starting step), then for each "/" used within the lyrics
 * you can input the step at which that division will be highlighted. If the number of steps exceeds the amount of divisions,
 * then the lyrics will end at the first succeeding step.
*/
typedef LyricMeasure = {
    var steps:Array<Float>; 
    var curString:String;
}

/**
 * author @Yoshubs
 * i might be a little proud of this system LOL
 * maybe copied it from the hypno lullaby's code
 * but i will probably just test some stuff and never use it anymore lol
*/

//if im and idiot who wants everytime there is a lyric in the song to a lot of shit appear in the screen then yes, you ARE an idiota
var imAnIdiot:Bool = false; //technically its true but shut up

class Lyrics extends FlxTypedGroup<FlxText> {
    public var mainColorArray:Array<Int> = [255, 255, 255];
    public var highlightColorArray:Array<Int> = [255, 0, 0];
    public static var newText:FlxText;
    public static var text:FlxText;
    public static var highlightedLyric:FlxText;
    public static var goUp:FlxTween;
    public static var goDown:FlxTween;

    public static function parseLyrics(song:String) {
        var lyricsFile:String = '';
        var foldersToCheck:Array<String>;
        #if MODS_ALLOWED
		foldersToCheck = [Paths.songJson(PlayState.SONG.song.toLowerCase() + '/lyricss')];
		if(Paths.currentModDirectory != null && Paths.currentModDirectory.length > 0) foldersToCheck = [Paths.modsJson(PlayState.SONG.song.toLowerCase() + '/lyricss')];

		for (mod in Paths.getGlobalMods()) foldersToCheck = [Paths.mods(mod + 'data/' + PlayState.SONG.song.toLowerCase() + '/lyricss')];

        for (folder in foldersToCheck) lyricsFile = File.getContent(folder).trim();
        #else
        lyricsFile = File.getContent(Paths.songJson(PlayState.SONG.song.toLowerCase() + '/lyricss')).trim();
        #end

        while (!lyricsFile.endsWith("}"))
            lyricsFile = lyricsFile.substr(0, lyricsFile.length - 1);

        var lyricsList:Array<LyricMeasure> = cast Json.parse(lyricsFile).lyrics;
        trace('lyrics found succesfully');
        return lyricsList;
    }

    public var lyrics:Array<LyricMeasure>;
    public var stepProgression:Float = 0;
    public function new(lyrics:Array<LyricMeasure>) {
        this.lyrics = lyrics;

        lyrics.sort(function(lyric1:LyricMeasure, lyric2:LyricMeasure):Int {
            if (lyric1.steps[0] < lyric2.steps[0])
                return -1;
            else return 1;
        });
        if (imAnIdiot) trace(lyrics);
        super();
    }

    override public function update(elapsed:Float) {
        if (PlayState.instance.curStep > stepProgression) {
            stepProgression = PlayState.instance.curStep;
            updateLyrics();
        }
        super.update(elapsed);
    }

    public var currentFocusedLyric:LyricMeasure;
    public var currentDivisionAmount:Int = 0;
    public function updateLyrics() {
        while (lyrics.length > 0 && lyrics[0] != null && lyrics[0].steps[0] <= stepProgression) {
            clearOldText();
            var myLyrics:LyricMeasure = lyrics[0];
            // add to this lol
            var myLyricArray:Array<String> = myLyrics.curString.split('/');
            currentDivisionAmount = myLyricArray.length;
            for (text in myLyricArray) {
                newText = new FlxText(0, FlxG.height * 0.89 - 45,0,text+"\n");
                newText.setFormat(Paths.font("vcr.ttf"), 32, FlxColor.WHITE, CENTER, FlxTextBorderStyle.OUTLINE, FlxColor.BLACK);
                newText.antialiasing = true;
                newText.scrollFactor.set();
                newText.borderSize = 1.5;
                add(newText);
            }
            if (imAnIdiot) trace(members);

            currentFocusedLyric = myLyrics;
            lyrics.splice(lyrics.indexOf(myLyrics), 1);
        }

        if (currentFocusedLyric != null) {
            var myLyrics:LyricMeasure = lyrics[0];
            var mySteps:Array<Float> = currentFocusedLyric.steps;
            mySteps.sort(function(step:Float, otherStep:Float){
                if (step < otherStep)
                    return -1;
                else return 1;
            });

            // reset all lyrics
            var totalTextLength:Float = 0;
            for (i in 0...members.length) 
                totalTextLength += members[i].width;
            for (i in 0...members.length) {
                text = members[i];
                text.x = FlxG.width / 2;
                text.y = 534;
                text.x -= totalTextLength / 2;
                text.color = FlxColor.WHITE;
                if (i > 0)
                    text.x = (members[i - 1].x + members[i - 1].width);
            }

            // find the current division
            var curDivision:Int = 0;
            for (i in 0...mySteps.length) {
                if (stepProgression >= mySteps[i]) {
                    curDivision = i;
                    // break;
                }
            }

            if (curDivision < currentDivisionAmount && members[curDivision] != null) {
                highlightedLyric = members[curDivision];
                highlightedLyric.color = FlxColor.fromRGB(PlayState.instance.dad.healthColorArray[0], PlayState.instance.dad.healthColorArray[1], PlayState.instance.dad.healthColorArray[2]);
                highlightedLyric.y -= 4;
            }
            else // delete the current lyric if its over the max divisions
            if (curDivision >= currentDivisionAmount)
                clearOldText();
        }

    }

    public function clearOldText() {
        // delete old text
        if (this.members.length > 0) {
            this.forEach(function(textMember:FlxText){
            if (textMember != null) 
                textMember.destroy();
            });
        }
        clear();
        currentFocusedLyric = null;
    }
}

