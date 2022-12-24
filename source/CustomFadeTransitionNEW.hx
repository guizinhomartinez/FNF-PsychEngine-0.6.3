package;

import Conductor.BPMChangeEvent;
import flixel.FlxG;
import flixel.addons.ui.FlxUIState;
import flixel.math.FlxRect;
import flixel.util.FlxTimer;
import flixel.addons.transition.FlxTransitionableState;
import flixel.tweens.FlxEase;
import flixel.tweens.FlxTween;
import flixel.util.FlxColor;
import flixel.util.FlxGradient;
import flixel.FlxSubState;
import flixel.FlxSprite;
import flixel.FlxCamera;
import flixel.addons.transition.FlxTransitionSprite;

/**
 * @author Shadow_Mario_ and DiogoTV
 * got it from the yunglixo rework mod
 * just had to fix some stuff that wasn't compatible with psych engine lol
 * huge shout out to the yung lixo devs
 */

class CustomFadeTransitionNEW extends MusicBeatSubstate {
	public static var finishCallback:Void->Void;
	private var leTween:FlxTween = null;
	public static var nextCamera:FlxCamera;
	var isTransIn:Bool = false;
	var daBlack:FlxSprite;
	var squares:TransSquare;

	public function new(duration:Float, isTransIn:Bool)
	{
		super();

		this.isTransIn = isTransIn;
		var width:Int = Std.int(FlxG.width);
		var height:Int = Std.int(FlxG.height);

		daBlack = new FlxSprite().makeGraphic(width, height + 400, FlxColor.BLACK);
		daBlack.scrollFactor.set();
		//daBlack.x -= (width - FlxG.width) / 2;
		add(daBlack);
		daBlack.visible = false;
		
		squares = new TransSquare(isTransIn);
		squares.scrollFactor.set();
		add(squares);
		
		if (isTransIn)
		{
			daBlack.alpha = 1;
			FlxTween.tween(daBlack, {alpha: 0}, duration + 0.1, {
				onComplete: function(twn:FlxTween)
				{
					close();
				},
				ease: FlxEase.linear});
		}
		else
		{
			daBlack.alpha = 0;
			FlxTween.tween(daBlack, {alpha: 1}, duration + 0.1, {
				onComplete: function(twn:FlxTween)
				{
					if (finishCallback != null)
					{
						finishCallback();
					}
				},
				ease: FlxEase.linear});
		}

		if(nextCamera != null) {
			daBlack.cameras = [nextCamera];
			squares.cameras = [nextCamera];
		}
		nextCamera = null;
	}

	override function destroy()
	{
		if (leTween != null)
		{
			finishCallback();
			leTween.cancel();
		}
		super.destroy();
	}
}