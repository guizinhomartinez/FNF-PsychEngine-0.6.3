package;

import flixel.system.FlxSound;
import flixel.group.FlxGroup.FlxTypedGroup;
import flixel.FlxG;
import flixel.FlxSprite;
import flixel.tweens.FlxTween;
import flixel.text.FlxText;
import flixel.util.FlxTimer;
import flixel.util.FlxColor;
import flixel.effects.FlxFlicker;
import flixel.group.FlxGroup.FlxTypedGroup;

class ClickState extends MusicBeatState
{
    var bg:FlxSprite;
    var numbers:FlxText;
    var pressSpace:FlxText;
    var numbersTween:FlxTween;
	public var curNumber:Int = 0;
    var sound:FlxSound;
    public static var backToMain:Bool = false;

    var bf:FlxSprite;

	override public function create()
    {
        ClientPrefs.framerate = 240;

        Paths.clearStoredMemory();
		Paths.clearUnusedMemory();

        bg = new FlxSprite().loadGraphic(Paths.image('menuDesat'));
        bg.antialiasing = ClientPrefs.globalAntialiasing;
        add(bg);
        bg.screenCenter();

        numbers = new FlxText(0, 0, FlxG.width, "", 48);
        numbers.setFormat(Paths.font("vcr.ttf"), 64, FlxColor.BLACK, CENTER, FlxTextBorderStyle.OUTLINE, FlxColor.WHITE);
        numbers.scrollFactor.set();
        numbers.borderSize = 2;
        add(numbers);
        numbers.screenCenter();

        pressSpace = new FlxText(0, numbers.y - 200, FlxG.width, "Press Space", 48);
        pressSpace.setFormat(Paths.font("vcr.ttf"), 32, FlxColor.RED, CENTER, FlxTextBorderStyle.OUTLINE, FlxColor.BLACK);
        pressSpace.scrollFactor.set();
        pressSpace.borderSize = 1.25;
        add(pressSpace);
        pressSpace.screenCenter(X);

        bf = new FlxSprite(800, 300).loadGraphic(Paths.image('characters/BOYFRIEND', 'shared'));
        bf.frames = Paths.getSparrowAtlas('characters/BOYFRIEND', 'shared');
        bf.animation.addByPrefix('idle', 'BF idle dance', 24, true);
        bf.animation.addByPrefix('hey', 'BF HEY!!', 24, true);
        bf.animation.play('idle');
        add(bf);

        sound = new FlxSound().loadEmbedded(Paths.sound('yipee', 'preload'));
        FlxG.sound.list.add(sound);

        FlxG.sound.playMusic(Paths.music('offsetSong'), 1, true);

        super.create();
    }

	override public function update(elapsed:Float)
    {
        numbers.text = "" + curNumber;

        #if desktop
        if (FlxG.keys.justPressed.SPACE)
        {
            curNumber++;
            FlxG.sound.play(Paths.sound('tick', 'preload'), 1);
			if(numbersTween != null) {
				numbersTween.cancel();
			}
			numbers.scale.x = 3;
			numbers.scale.y = 3;
			numbersTween = FlxTween.tween(numbers.scale, {x: 1, y: 1}, 0.2, {
				onComplete: function(twn:FlxTween) {
					numbersTween = null;
				}
			});
        }
        #end

		if(controls.BACK)
        {
            MusicBeatState.switchState(new MainMenuState());
            backToMain = true;
            FlxG.sound.music.fadeOut(4, 0);
        }

        if (curNumber == 99)
        {
            sound.play(true);
        }
        else if (curNumber == 100)
        {
            bf.animation.play('hey');
        }
        else
        {
            bf.animation.play('idle');
        }

        super.update(elapsed);
    }
}