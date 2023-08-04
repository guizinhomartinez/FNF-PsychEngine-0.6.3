package;

import flixel.graphics.FlxGraphic;
#if desktop
import Discord.DiscordClient;
#end
import Section.SwagSection;
import Song.SwagSong;
import WiggleEffect.WiggleEffectType;
import flixel.FlxBasic;
import flixel.FlxCamera;
import flixel.FlxG;
import flixel.FlxGame;
import flixel.FlxObject;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.FlxSubState;
import flixel.addons.display.FlxGridOverlay;
import flixel.addons.effects.FlxTrail;
import flixel.addons.effects.FlxTrailArea;
import flixel.addons.effects.chainable.FlxEffectSprite;
import flixel.addons.effects.chainable.FlxWaveEffect;
import flixel.addons.transition.FlxTransitionableState;
import flixel.graphics.atlas.FlxAtlas;
import flixel.graphics.frames.FlxAtlasFrames;
import flixel.group.FlxGroup.FlxTypedGroup;
import flixel.math.FlxMath;
import flixel.math.FlxPoint;
import flixel.math.FlxRect;
import flixel.system.FlxSound;
import flixel.text.FlxText;
import flixel.tweens.FlxEase;
import flixel.tweens.FlxTween;
import flixel.ui.FlxBar;
import flixel.util.FlxCollision;
import flixel.util.FlxColor;
import flixel.util.FlxSort;
import flixel.util.FlxStringUtil;
import flixel.util.FlxTimer;
import motion.Actuate;
import motion.easing.*;
import haxe.Json;
import lime.utils.Assets;
import openfl.Lib;
import openfl.events.Event;
import openfl.display.BlendMode;
import openfl.display.StageQuality;
import openfl.filters.BitmapFilter;
import openfl.utils.Assets as OpenFlAssets;
import editors.ChartingState;
import openfl.Assets;
import editors.CharacterEditorState;
import flixel.group.FlxSpriteGroup;
import flixel.input.keyboard.FlxKey;
import Note.EventNote;
import openfl.events.KeyboardEvent;
import flixel.effects.particles.FlxEmitter;
import flixel.effects.particles.FlxParticle;
import flixel.util.FlxSave;
import flixel.animation.FlxAnimationController;
import animateatlas.AtlasFrameMaker;
import Achievements;
import StageData;
import FunkinLua;
import DialogueBoxPsych;
import Conductor.Rating;
import FreeplayState.SongMetadata;
import Script;
import Lyrics;
import TaskSong.TaskSongNotFound;
import TaskSong.TaskSongModsFolder;

#if !flash 
import flixel.addons.display.FlxRuntimeShader;
import openfl.filters.ShaderFilter;
#end

#if sys
import sys.FileSystem;
import sys.io.File;
#end

#if VIDEOS_ALLOWED
import vlc.MP4Handler;
#end

using StringTools;

typedef StageCamera =
{
	@:optional var bfZoom:Float;
	@:optional var dadZoom:Float;
	@:optional var gfZoom:Float;
}

class PlayState extends MusicBeatState
{
	var noteRows:Array<Array<Array<Note>>> = [[],[]];
	public static var STRUM_X = 42;
	public static var STRUM_X_MIDDLESCROLL = -278;

	public static var ratingStuff:Array<Dynamic> = [
		['You Suck!', 0.2], //From 0% to 19%
		['Shit', 0.4], //From 20% to 39%
		['Bad', 0.5], //From 40% to 49%
		['Bruh', 0.6], //From 50% to 59%
		['Meh', 0.69], //From 60% to 68%
		['Nice', 0.7], //69%
		['Good', 0.8], //From 70% to 79%
		['Great', 0.9], //From 80% to 89%
		['Sick!', 1], //From 90% to 99%
		['Perfect!!', 1] //The value on this one isn't used actually, since Perfect is always "1"
	];

	public static var ratingRankStuff:Array<Dynamic> = [
		['You Suck!', 0.2], //From 0% to 19%
		['Shit', 0.4], //From 20% to 39%
		['Bad', 0.5], //From 40% to 49%
		['Bruh', 0.6], //From 50% to 59%
		['Meh', 0.69], //From 60% to 68%
		['Nice', 0.7], //69%
		['Good', 0.8], //From 70% to 79%
		['Great', 0.9], //From 80% to 89%
		['Sick!', 1], //From 90% to 99%
		['Perfect!!', 1] //The value on this one isn't used actually, since Perfect is always "1"
	];

	//event variables
	public var isCameraOnForcedPos:Bool = false;

	#if (haxe >= "4.0.0")
	public var boyfriendMap:Map<String, Boyfriend> = new Map();
	public var boyfriend2Map:Map<String, Boyfriend> = new Map();
	public var dadMap:Map<String, Character> = new Map();
	public var gfMap:Map<String, Character> = new Map();
	public var variables:Map<String, Dynamic> = new Map();
	public var modchartTweens:Map<String, FlxTween> = new Map<String, FlxTween>();
	public var modchartSprites:Map<String, ModchartSprite> = new Map<String, ModchartSprite>();
	public var modchartBackdrops:Map<String, ModchartBackdrop> = new Map<String, ModchartBackdrop>();
	public var modchartTimers:Map<String, FlxTimer> = new Map<String, FlxTimer>();
	public var modchartSounds:Map<String, FlxSound> = new Map<String, FlxSound>();
	public var modchartTexts:Map<String, ModchartText> = new Map<String, ModchartText>();
	public var modchartSaves:Map<String, FlxSave> = new Map<String, FlxSave>();
	#else
	public var boyfriendMap:Map<String, Boyfriend> = new Map<String, Boyfriend>();
	public var boyfriend2Map:Map<String, Boyfriend> = new Map<String, Boyfriend>();
	public var dadMap:Map<String, Character> = new Map<String, Character>();
	public var gfMap:Map<String, Character> = new Map<String, Character>();
	public var variables:Map<String, Dynamic> = new Map<String, Dynamic>();
	public var modchartTweens:Map<String, FlxTween> = new Map();
	public var modchartSprites:Map<String, ModchartSprite> = new Map();
	public var modchartBackdrops:Map<String, ModchartBackdrop> = new Map();
	public var modchartTimers:Map<String, FlxTimer> = new Map();
	public var modchartSounds:Map<String, FlxSound> = new Map();
	public var modchartTexts:Map<String, ModchartText> = new Map();
	public var modchartSaves:Map<String, FlxSave> = new Map();
	#end

	public var BF_X:Float = 770;
	public var BF_Y:Float = 100;
	public var DAD_X:Float = 100;
	public var DAD_Y:Float = 100;
	public var GF_X:Float = 400;
	public var GF_Y:Float = 130;

	public var songSpeedTween:FlxTween;
	public var hudTween:FlxTween;
	public var hudTween2:FlxTween;
	public var songSpeed(default, set):Float = 1;
	public var songSpeedType:String = "multiplicative";
	public var noteKillOffset:Float = 350;

	public var playbackRate(default, set):Float = 1;

	public var boyfriendGroup:FlxSpriteGroup;
	public var dadGroup:FlxSpriteGroup;
	public var gfGroup:FlxSpriteGroup;
	public static var curStage:String = '';
	public static var isPixelStage:Bool = false;
	public static var SONG:SwagSong = null;
	public static var isStoryMode:Bool = false;
	public static var storyWeek:Int = 0;
	public static var storyPlaylist:Array<String> = [];
	public static var storyDifficulty:Int = 1;

	public var spawnTime:Float = 2000;

	public var vocals:FlxSound;

	public var dadGhostTween:FlxTween = null;
	public var dadGhostTween2:FlxTween = null;
	public var dadGhostTween3:FlxTween = null;

	public var bf2GhostTween:FlxTween = null;
	public var bf2GhostTween2:FlxTween = null;
	public var bf2GhostTween3:FlxTween = null;

	public var bfGhostTween:FlxTween = null;
	public var bfGhostTween2:FlxTween = null;
	public var bfGhostTween3:FlxTween = null;

	public var bf2Ghost:FlxSprite = null;
	public var dadGhost:FlxSprite = null;
	public var bfGhost:FlxSprite = null;
	public var dad:Character = null;
	public var gf:Character = null;
	public var boyfriend:Boyfriend = null;
	public var boyfriend2:Boyfriend = null;

	public var isDad:Bool = false;
	public var isGF:Bool = false;

	public var notes:FlxTypedGroup<Note>;
	public var ratingGroup:FlxTypedGroup<FlxSprite>;
	public var scoreGroup:FlxTypedSpriteGroup<FlxText>;
	public var scoreGroupSpr:FlxTypedSpriteGroup<FlxSprite>;
	public var unspawnNotes:Array<Note> = [];
	public var eventNotes:Array<EventNote> = [];

	public var strumLine:FlxSprite;

	//Handles the new epic mega sexy cam code that i've done
	public var camFollow:FlxPoint;
	public var camFollowPos:FlxObject;
	private static var prevCamFollow:FlxPoint;
	private static var prevCamFollowPos:FlxObject;

	public var laneunderlay:FlxSprite;

	public var strumLineNotes:FlxTypedGroup<StrumNote>;
	public var opponentStrums:FlxTypedGroup<StrumNote>;
	public var playerStrums:FlxTypedGroup<StrumNote>;
	public var grpNoteSplashes:FlxTypedGroup<NoteSplash>;

	public var camZooming:Bool = false;
	public var camZoomingMult:Float = 1;
	public var camZoomingDecay:Float = 1;
	private var curSong:String = "";

	private var camSpeed:Int = 4;
	private var panSpeed:Int = 4;
	private var zoomSpeed:Float = 0.03;

	public var gfSpeed:Int = 1;
	public var health:Float = 1;
	public var combo:Int = 0;

	public var healthBarBG:AttachedSprite;
	public var healthBar:FlxBar;
	public var healthBarOverlay:FlxSprite;
	public var songPercent:Float = 0;
	public var endSongPercent:Float = 0;

	private var timeBarBG:AttachedSprite;
	public var timeBar:FlxBar;

	public var ratingsData:Array<Rating> = [];
	public var sicks:Int = 0;
	public var goods:Int = 0;
	public var bads:Int = 0;
	public var shits:Int = 0;

	private var generatedMusic:Bool = false;
	public var endingSong:Bool = false;
	public var startingSong:Bool = false;
	private var updateTime:Bool = true;
	public static var changedDifficulty:Bool = false;
	public static var chartingMode:Bool = false;

	//Gameplay settings
	public var healthGain:Float = 1;
	public var healthLoss:Float = 1;
	public var healthDrain:Float = 1;
	public var instakillOnMiss:Bool = false;
	public var cpuControlled:Bool = false;
	public var practiceMode:Bool = false;

	public var botplaySine:Float = 0;
	public var songNameHeySine:Float = 0;
	public var botplayTxt:FlxText;
	var songNameHey:FlxText;
	var songText:FlxText;

	public var iconP1:HealthIcon;
	public var iconP2:HealthIcon;
	public var iconP3:HealthIcon;
	public var iconShow:HealthIcon;
	public var songNameDisplay:FlxText;
	var songNameDisplayDown:Bool = false;
	public var camHUD:FlxCamera;
	public var camGame:FlxCamera;
	public var camOther:FlxCamera;
	public var cameraSpeed:Float = 1;

	var notesHitArray:Array<Date> = [];

	var pixelShitPart1:String = "";
	var pixelShitPart2:String = '';

	var dialogue:Array<String> = ['blah blah blah', 'coolswag'];
	var dialogueJson:DialogueFile = null;

	var dadbattleBlack:BGSprite;
	var dadbattleLight:BGSprite;
	var dadbattleLight2:BGSprite;
	var dadbattleSmokes:FlxSpriteGroup;

	var halloweenBG:BGSprite;
	var halloweenWhite:BGSprite;

	var phillyLightsColors:Array<FlxColor>;
	var phillyWindow:BGSprite;
	var phillyStreet:BGSprite;
	var phillyTrain:BGSprite;
	var blammedLightsBlackTween:FlxTween;
	var blammedLightsBlack:FlxSprite;
	var phillyWindowEvent:BGSprite;
	var trainSound:FlxSound;

	var phillyCityLights:FlxTypedGroup<BGSprite>;
	var blammedLightsBlack2:ModchartSprite;
	var blammedLightsBlackTween2:FlxTween;
	var phillyCityLightsEvent:FlxTypedGroup<BGSprite>;
	var phillyCityLightsEventTween:FlxTween;

	var phillyGlowGradient:PhillyGlow.PhillyGlowGradient;
	var phillyGlowParticles:FlxTypedGroup<PhillyGlow.PhillyGlowParticle>;

	var limoKillingState:Int = 0;
	var limo:BGSprite;
	var limoMetalPole:BGSprite;
	var limoLight:BGSprite;
	var limoCorpse:BGSprite;
	var limoCorpseTwo:BGSprite;
	var bgLimo:BGSprite;
	var grpLimoParticles:FlxTypedGroup<BGSprite>;
	var grpLimoDancers:FlxTypedGroup<BackgroundDancer>;
	var fastCar:BGSprite;

	var upperBoppers:BGSprite;
	var bottomBoppers:BGSprite;
	var santa:BGSprite;
	var heyTimer:Float;

	var lightoverlayDK:FlxSprite;
	var mainoverlayDK:FlxSprite;
	var defeatDKoverlay:FlxSprite;

	// defeat
	var defeatthing:FlxSprite;
	var defeatblack:FlxSprite;
	var bodiesfront:FlxSprite;
	var bodies2:FlxSprite;
	var bodies:FlxSprite;
	var lightoverlay:FlxSprite;

	var defeatDark:Bool = false;

	var artists:BGSprite;
	var cerboro:BGSprite;

	var bgGirls:BackgroundGirls;
	var wiggleShit:WiggleEffect = new WiggleEffect();
	var bgGhouls:BGSprite;

	var tankWatchtower:BGSprite;
	var tankGround:BGSprite;
	var tankmanRun:FlxTypedGroup<TankmenBG>;
	var foregroundSprites:FlxTypedGroup<BGSprite>;

	public var songScore:Int = 0;
	public var songHits:Int = 0;
	public var songMisses:Int = 0;
	public var maxCombo:Int = 0;

	public var nps:Int = 0;
	public var maxNps:Int = 0;

	public var scoreTxt:FlxText;

	var timeTxt:FlxText;
	var judgementCounter:FlxText;
	var sonicExeTxt:Bool = false;
	var scoreTxtTween:FlxTween;

	/*var songNameBarTweenIn:FlxTween;
	var songNameDisplayTweenIn:FlxTween;
	var iconShowTweenIn:FlxTween;*/

	var ratingTween:FlxTween;
	var comboTween:FlxTween;
	var numScoreTween:FlxTween;

	/*var songNameBarTweenOut:FlxTween;
	var songNameDisplayTweenOut:FlxTween;
	var iconShowTweenOut:FlxTween;*/

	var daSection:Int = 0;

	public static var campaignScore:Int = 0;
	public static var campaignMisses:Int = 0;
	public static var seenCutscene:Bool = false;
	public static var deathCounter:Int = 0;

	public var defaultCamZoom:Float = 1.05;
	public var defaultHudZoom:Float = 1;

	// how big to stretch the pixel art assets
	public static var daPixelZoom:Float = 6;
	private var singAnimations:Array<String> = ['singLEFT', 'singDOWN', 'singUP', 'singRIGHT'];

	public var inCutscene:Bool = false;
	public var skipCountdown:Bool = false;
	var songLength:Float = 0;

	private var task:TaskSong;
	private var task2:TaskSongNotFound;
	private var task3:TaskSongModsFolder;

	public var boyfriendCameraOffset:Array<Float> = null;
	public var opponentCameraOffset:Array<Float> = null;
	public var girlfriendCameraOffset:Array<Float> = null;

	#if desktop
	// Discord RPC variables
	var storyDifficultyText:String = "";
	var detailsText:String = "";
	var detailsPausedText:String = "";
	#end

	//Achievement shit
	var keysPressed:Array<Bool> = [];
	var boyfriendIdleTime:Float = 0.0;
	var boyfriendIdled:Bool = false;

	// Lua shit
	public static var instance:PlayState;
	public var luaArray:Array<FunkinLua> = [];
	private var luaDebugGroup:FlxTypedGroup<DebugLuaText>;
	private var coolTextGroup:FlxTypedGroup<CoolText>;
	public var introSoundsSuffix:String = '';

	// Debug buttons
	private var debugKeysChart:Array<FlxKey>;
	private var debugKeysCharacter:Array<FlxKey>;

	// Less laggy controls
	private var keysArray:Array<Dynamic>;
	private var controlArray:Array<String>;

	var precacheList:Map<String, String> = new Map<String, String>();

	var stageCameras:Map<String, StageCamera> = [
		"bobux" => {
			bfZoom: 1, // mushitsection == true
			dadZoom: 0.8, // mushitsection == false
			gfZoom: 0.65 // gfsection == true
		}
	];

	var curCamera:StageCamera = {
		bfZoom: null, // mushitsection == true
		dadZoom: null, // mushitsection == false
		gfZoom: null // gfsection == true
	};

	public var ofs:Float = 20;

	var bfsection:Bool = false; // IK MUST HIT SECTION EXIST BUT ITS DELAYED

	var singingTurnsOnCamZoom:Bool = true;

	var changeDadZoom:Bool = false;
	var changeGFZoom:Bool = false;
	var changeBFZoom:Bool = false;

	var cameraStageZoom:Bool = true;
	var shouldChangeHudZoom:Bool = false; // on the script put true and then you put the hud size you want with "defaultHudZoom"

	public var followChars:Bool = true;
	public var script:Script;
	var cinematicBars:Map<String, FlxSprite> = ["top" => null, "bottom" => null,];
	var camBars:FlxCamera;
	// var songNameBar:FlxSprite;
	// stores the last judgement object
	public static var lastRating:FlxSprite;
	// stores the last combo sprite object
	public static var lastCombo:FlxSprite;
	// stores the last combo score objects in an array
	public static var lastScore:Array<FlxSprite> = [];

	public var doNotChangeColors:Bool = true;

	public var doNotChangeBar:Bool = true;
	
	var lula:FlxSprite;

	var blackScreen:FlxSprite;

	var cutsceneTxt:FlxText;

	var blackFuck:FlxSprite;

	var upYes:Bool = true;
	var downYes:Bool = true;
	var leftYes:Bool = true;
	var rightYes:Bool = true;
	
	var upYes2:Bool = true;
	var downYes2:Bool = true;
	var leftYes2:Bool = true;
	var rightYes2:Bool = true;

	var noOpponentStrumOnStart:Bool;

	var focusedCharacter:Character;

	public var gfCameraOffY:Float = 0; public var gfCameraOffX:Float = 0;
	public var dadCameraOffY:Float = 0; public var dadCameraOffX:Float = 0;
	public var bfCameraOffY:Float = 0; public var bfCameraOffX:Float = 0;
	public var bf2CameraOffY:Float = 0; public var bf2CameraOffX:Float = 0;

	public var addBoyfriend2:Bool = false;

	public var boyfriend2OffsetX:Float = 0;
	public var boyfriend2OffsetY:Float = 0;

	public var playerBoy:String = '';

	public var offsetX:Int = 0;
	public var offsetY:Int = 0;

	public var nostalgicSongs:Bool = false;

	var zoomSpeedTrue:Bool = false;

	var noteSkin:Note;

	var showTime:Bool = (ClientPrefs.timeBarType != 'Disabled');

	var totalNotes:Int = 0;

	public var doItBro:Bool = false;

	public var notesHit:Int = 0;

	var lastMustHit:Dynamic;

	public var oldSongsThatUsedCameraFollow:Array<String> = [
		'bitcrush',
		'deep-poems',
		'meta',
		'striked',
		'snowed in',
		'bopeebo erect',
		'feijao',
		'south-erect',
		'dad-battle-erect',
		'promenade',
		'virgin-rage',
		'singularity',
		'super-idol',
		'haxxer',
		'deceiver',
		'talent',
		'worked',
		'tek-it',
		'the cat from ipanema',
		'young-girl-a'
	];

	var healthTweenObj:FlxTween;
	var healthTweenObj2:FlxTween;

	var jukeBoxTag:FlxSprite;
    var jukeBox:FlxSprite;
    var jukeBoxText:FlxText;
    var jukeBoxSubText:FlxText;

	var introTextSize:Int = 25;
	var introSubTextSize:Int = 30;
	var introTagWidth:Int = 15;

	var usedTimeTravel:Bool = false;

	public var songTxt:FlxText;
	public var elapsedTxt:FlxText;
	public var totalTxt:FlxText;

	public var isEventWorking:Bool = false;

	public var scoreZoomOnBeat:Bool = false;

	public var blackFlash:FlxSprite;
	public var whiteFlash:FlxSprite;
	public var redFlash:FlxSprite;
	public var customFlash:FlxSprite;

	override public function create()
	{
		lastMustHit = SONG.notes[curSection].mustHitSection;

		precacheList.set('noteSplashes', 'image');
		precacheList.set('noteSplashOld', 'image');

		if (SONG.song == 'Haxxer' || SONG.song == 'Super Idol') nostalgicSongs = true;

		switch (ClientPrefs.gameHuds)
		{
			case "Sacorg HUD":
				ratingStuff = [
					['You Suck!', 0.2], //From 0% to 19%
					['Shit', 0.4], //From 20% to 39%
					['Bad', 0.5], //From 40% to 49%
					['Bruh', 0.6], //From 50% to 59%
					['Meh', 0.69], //From 60% to 68%
					['Nice', 0.7], //69%
					['Good', 0.8], //From 70% to 79%
					['Great', 0.9], //From 80% to 89%
					['Sick!', 1], //From 90% to 99%
					['Perfect!!', 1] //The value on this one isn't used actually, since Perfect is always "1"
				];
			case "Myth Engine HUD":
				ratingRankStuff = [
					['N/A', 0.1099], //From 0% to 19%
					['D', 0.5999], //From 20% to 39%
					['C', 0.7099], //From 40% to 49%
					['B', 0.7999], //69%
					['A', 0.8099], //From 70% to 79%
					['A.', 0.8599], //From 80% to 89%
					['A:', 0.9], //From 90% to 99%
					['AA', 1] //The value on this one isn't used actually, since Perfect is always "1"
				];

				ratingStuff = [
					['You Suck!', 0.2], //From 0% to 19%
					['Shit', 0.4], //From 20% to 39%
					['Bad', 0.5], //From 40% to 49%
					['Bruh', 0.6], //From 50% to 59%
					['Meh', 0.69], //From 60% to 68%
					['Nice', 0.7], //69%
					['Good', 0.8], //From 70% to 79%
					['Great', 0.9], //From 80% to 89%
					['Sick!', 1], //From 90% to 99%
					['Perfect!!', 1] //The value on this one isn't used actually, since Perfect is always "1"
				];
			case "Blantados HUD":
				ratingStuff = [
					['You Suck!', 0.2], //From 0% to 19%
					['Shit', 0.4], //From 20% to 39%
					['Bad', 0.5], //From 40% to 49%
					['Bruh', 0.6], //From 50% to 59%
					['Meh', 0.69], //From 60% to 68%
					['Nice', 0.7], //69%
					['Good', 0.8], //From 70% to 79%
					['Great', 0.9], //From 80% to 89%
					['Sick!', 1], //From 90% to 99%
					['Perfect!!', 1] //The value on this one isn't used actually, since Perfect is always "1"
				];
			default:
				ratingStuff = [
					['N/A', 0.6499],
					['F', 0.6599], //From 0% to 19%
					['E', 0.7099], //From 20% to 39%
					['D', 0.7599], //From 40% to 49%
					['C', 0.8099], //From 50% to 59%
					['B', 0.8599], //From 60% to 68%
					['A', 0.9099], //From 80% to 89%
					['S', 0.9999], //From 90% to 99%
					['S+', 1] //The value on this one isn't used actually, since Perfect is always "1"
				];
		}

		// for lua
		instance = this;

		healthTweenObj = FlxTween.tween(this, {}, 0);
		healthTweenObj2 = FlxTween.tween(this, {}, 0);

		debugKeysChart = ClientPrefs.copyKey(ClientPrefs.keyBinds.get('debug_1'));
		debugKeysCharacter = ClientPrefs.copyKey(ClientPrefs.keyBinds.get('debug_2'));
		PauseSubState.songName = null; //Reset to default
		playbackRate = ClientPrefs.getGameplaySetting('songspeed', 1);

		keysArray = [
			ClientPrefs.copyKey(ClientPrefs.keyBinds.get('note_left')),
			ClientPrefs.copyKey(ClientPrefs.keyBinds.get('note_down')),
			ClientPrefs.copyKey(ClientPrefs.keyBinds.get('note_up')),
			ClientPrefs.copyKey(ClientPrefs.keyBinds.get('note_right'))
		];

		controlArray = [
			'NOTE_LEFT',
			'NOTE_DOWN',
			'NOTE_UP',
			'NOTE_RIGHT'
		];

		//Ratings
		ratingsData.push(new Rating('sick')); //default rating

		var rating:Rating = new Rating('good');
		rating.ratingMod = 0.7;
		rating.score = 200;
		rating.noteSplash = false;
		ratingsData.push(rating);

		var rating:Rating = new Rating('bad');
		rating.ratingMod = 0.4;
		rating.score = 100;
		rating.noteSplash = false;
		ratingsData.push(rating);

		var rating:Rating = new Rating('shit');
		rating.ratingMod = 0;
		rating.score = 50;
		rating.noteSplash = false;
		ratingsData.push(rating);

		// For the "Just the Two of Us" achievement
		for (i in 0...keysArray.length)
		{
			keysPressed.push(false);
		}

		if (FlxG.sound.music != null)
			FlxG.sound.music.stop();

		// Gameplay settings
		healthGain = ClientPrefs.getGameplaySetting('healthgain', 1);
		healthLoss = ClientPrefs.getGameplaySetting('healthloss', 1);
		healthDrain = ClientPrefs.getGameplaySetting('healthdrain', 0) / -100;
		instakillOnMiss = ClientPrefs.getGameplaySetting('instakill', false);
		practiceMode = ClientPrefs.getGameplaySetting('practice', false);
		cpuControlled = ClientPrefs.getGameplaySetting('botplay', false);

		// var gameCam:FlxCamera = FlxG.camera;
		camGame = new FlxCamera();
		camBars = new FlxCamera();
		camHUD = new FlxCamera();
		camOther = new FlxCamera();
		camBars.bgColor.alpha = 0;
		camHUD.bgColor.alpha = 0;
		camOther.bgColor.alpha = 0;

		FlxG.cameras.reset(camGame);
		FlxG.cameras.add(camBars, false);
		FlxG.cameras.add(camHUD, false);
		FlxG.cameras.add(camOther, false);
		camHUD.zoom = defaultHudZoom;
		grpNoteSplashes = new FlxTypedGroup<NoteSplash>();

		#if MODS_ALLOWED
		if (FileSystem.exists(Paths.modsJson(SONG.song.toLowerCase().replace(" ", "-") + '/lyricss')) || FileSystem.exists(Paths.songJson(SONG.song.toLowerCase().replace(" ", "-") + '/lyricss')))
		{
		#else
		if (OpenFlAssets.exists(Paths.songJson(SONG.song.toLowerCase().replace(" ", "-") + '/lyricss')))
		{
		#end
			trace('found them');
			var myLyrics:Array<LyricMeasure> = Lyrics.parseLyrics(SONG.song.toLowerCase().replace(" ", "-"));
			var lyrics:Lyrics = new Lyrics(myLyrics);
			add(lyrics);
			lyrics.cameras = [camOther];
		}

		FlxG.cameras.setDefaultDrawTarget(camGame, true);
		CustomFadeTransition.nextCamera = camOther;
		CustomFadeTransitionNEW.nextCamera = camOther;

		persistentUpdate = true;
		persistentDraw = true;

		if (SONG == null)
			SONG = Song.loadFromJson('tutorial');

		Conductor.mapBPMChanges(SONG);
		Conductor.changeBPM(SONG.bpm);

		#if desktop
		storyDifficultyText = CoolUtil.difficulties[storyDifficulty];

		// String that contains the mode defined here so it isn't necessary to call changePresence for each mode
		if (isStoryMode)
		{
			detailsText = "Story Mode: " + WeekData.getCurrentWeek().weekName;
		}
		else
		{
			detailsText = "Freeplay";
		}

		// String for when the game is paused
		detailsPausedText = "Paused - " + detailsText;
		#end

		GameOverSubstate.resetVariables();
		var songName:String = Paths.formatToSongPath(SONG.song);

		curStage = SONG.stage;
		//trace('stage is: ' + curStage);
		if(SONG.stage == null || SONG.stage.length < 1) {
			switch (songName)
			{
				case 'spookeez' | 'south' | 'monster':
					curStage = 'spooky';
				case 'pico' | 'blammed' | 'philly' | 'philly-nice':
					curStage = 'philly';
				case 'milf' | 'satin-panties' | 'high':
					curStage = 'limo';
				case 'cocoa' | 'eggnog':
					curStage = 'mall';
				case 'winter-horrorland':
					curStage = 'mallEvil';
				case 'senpai' | 'roses':
					curStage = 'school';
				case 'thorns':
					curStage = 'schoolEvil';
				case 'ugh' | 'guns' | 'stress':
					curStage = 'tank';
				case 'haxxer':
					curStage = 'bfroom';
				default:
					curStage = 'stage';
			}
		}
		SONG.stage = curStage;

		var stageData:StageFile = StageData.getStageFile(curStage);
		if(stageData == null) { //Stage couldn't be found, create a dummy stage for preventing a crash
			stageData = {
				directory: "",
				defaultZoom: 0.9,
				defaultZoomHud: 1,
				isPixelStage: false,

				boyfriend: [770, 100],
				girlfriend: [400, 130],
				opponent: [100, 100],
				hide_girlfriend: false,

				camera_boyfriend: [0, 0],
				camera_opponent: [0, 0],
				camera_girlfriend: [0, 0],
				camera_speed: 1,
				dynamic_camera: true,
				camera_offsets: 20
			};
		}

		defaultCamZoom = stageData.defaultZoom;
		defaultHudZoom = stageData.defaultZoomHud;
		followChars = stageData.dynamic_camera;
		ofs = stageData.camera_offsets;
		isPixelStage = stageData.isPixelStage;
		BF_X = stageData.boyfriend[0];
		BF_Y = stageData.boyfriend[1];
		GF_X = stageData.girlfriend[0];
		GF_Y = stageData.girlfriend[1];
		DAD_X = stageData.opponent[0];
		DAD_Y = stageData.opponent[1];

		if(stageData.camera_speed != null)
			cameraSpeed = stageData.camera_speed;

		boyfriendCameraOffset = stageData.camera_boyfriend;
		if(boyfriendCameraOffset == null) //Fucks sake should have done it since the start :rolling_eyes:
			boyfriendCameraOffset = [0, 0];

		opponentCameraOffset = stageData.camera_opponent;
		if(opponentCameraOffset == null)
			opponentCameraOffset = [0, 0];

		girlfriendCameraOffset = stageData.camera_girlfriend;
		if(girlfriendCameraOffset == null)
			girlfriendCameraOffset = [0, 0];

		boyfriendGroup = new FlxSpriteGroup(BF_X, BF_Y);
		dadGroup = new FlxSpriteGroup(DAD_X, DAD_Y);
		gfGroup = new FlxSpriteGroup(GF_X, GF_Y);

		dadbattleSmokes = new FlxSpriteGroup(); //troll'd

		if (stageCameras.exists(curStage))
			curCamera = stageCameras.get(curStage);

		switch (curStage)
		{
			case 'super-idol':
				SONG.gfVersion = 'gf';
				var floor:BGSprite = new BGSprite('super-idol/floor', -435.05, -86.5, 1, 1);
				floor.updateHitbox();
				add(floor);

				if(!ClientPrefs.lowQuality) {
					artists = new BGSprite('super-idol/the_artist_people', 1229.35, 262.85, 1, 1, ['my buttox']);
					artists.updateHitbox();
					add(artists);

					cerboro = new BGSprite('super-idol/CERBORO', -66.05, 593.75, 1, 1);
					cerboro.updateHitbox();
				}

			case 'bfroom': //Week 1
				var bg:BGSprite = new BGSprite('doxxie/bg', -184.35, -315.45);
				add(bg);

			case 'stage': //Week 1
				var bg:BGSprite = new BGSprite('stageback', -600, -200, 0.9, 0.9);
				add(bg);

				var stageFront:BGSprite = new BGSprite('stagefront', -650, 600, 0.9, 0.9);
				stageFront.setGraphicSize(Std.int(stageFront.width * 1.1));
				stageFront.updateHitbox();
				add(stageFront);
				if(!ClientPrefs.lowQuality) {
					var stageLight:BGSprite = new BGSprite('stage_light', -125, -100, 0.9, 0.9);
					stageLight.setGraphicSize(Std.int(stageLight.width * 1.1));
					stageLight.updateHitbox();
					add(stageLight);
					var stageLight:BGSprite = new BGSprite('stage_light', 1225, -100, 0.9, 0.9);
					stageLight.setGraphicSize(Std.int(stageLight.width * 1.1));
					stageLight.updateHitbox();
					stageLight.flipX = true;
					add(stageLight);

					var stageCurtains:BGSprite = new BGSprite('stagecurtains', -500, -300, 1.3, 1.3);
					stageCurtains.setGraphicSize(Std.int(stageCurtains.width * 0.9));
					stageCurtains.updateHitbox();
					add(stageCurtains);
				}

			case 'spooky': //Week 2
				if(!ClientPrefs.lowQuality) {
					halloweenBG = new BGSprite('halloween_bg', -200, -100, ['halloweem bg0', 'halloweem bg lightning strike']);
				} else {
					halloweenBG = new BGSprite('halloween_bg_low', -200, -100);
				}
				add(halloweenBG);

				halloweenWhite = new BGSprite(null, -800, -400, 0, 0);
				halloweenWhite.makeGraphic(Std.int(FlxG.width * 2), Std.int(FlxG.height * 2), FlxColor.WHITE);
				halloweenWhite.alpha = 0;
				halloweenWhite.blend = ADD;

				//PRECACHE SOUNDS
				precacheList.set('thunder_1', 'sound');
				precacheList.set('thunder_2', 'sound');

			case 'philly': //Week 3
				if(!ClientPrefs.lowQuality) {
					var bg:BGSprite = new BGSprite('philly/sky', -100, 0, 0.1, 0.1);
					add(bg);
				}

				var city:BGSprite = new BGSprite('philly/city', -10, 0, 0.3, 0.3);
				city.setGraphicSize(Std.int(city.width * 0.85));
				city.updateHitbox();
				add(city);

				phillyLightsColors = [0xFF31A2FD, 0xFF31FD8C, 0xFFFB33F5, 0xFFFD4531, 0xFFFBA633];
				phillyWindow = new BGSprite('philly/window', city.x, city.y, 0.3, 0.3);
				phillyWindow.setGraphicSize(Std.int(phillyWindow.width * 0.85));
				phillyWindow.updateHitbox();
				add(phillyWindow);
				phillyWindow.alpha = 0;

				if(!ClientPrefs.lowQuality) {
					var streetBehind:BGSprite = new BGSprite('philly/behindTrain', -40, 50);
					add(streetBehind);
				}

				phillyTrain = new BGSprite('philly/train', 2000, 360);
				add(phillyTrain);

				trainSound = new FlxSound().loadEmbedded(Paths.sound('train_passes'));
				FlxG.sound.list.add(trainSound);

				phillyStreet = new BGSprite('philly/street', -40, 50);
				add(phillyStreet);

			case 'limo': //Week 4
				var skyBG:BGSprite = new BGSprite('limo/limoSunset', -120, -50, 0.1, 0.1);
				add(skyBG);

				if(!ClientPrefs.lowQuality) {
					limoMetalPole = new BGSprite('gore/metalPole', -500, 220, 0.4, 0.4);
					add(limoMetalPole);

					bgLimo = new BGSprite('limo/bgLimo', -150, 480, 0.4, 0.4, ['background limo pink'], true);
					add(bgLimo);

					limoCorpse = new BGSprite('gore/noooooo', -500, limoMetalPole.y - 130, 0.4, 0.4, ['Henchmen on rail'], true);
					add(limoCorpse);

					limoCorpseTwo = new BGSprite('gore/noooooo', -500, limoMetalPole.y, 0.4, 0.4, ['henchmen death'], true);
					add(limoCorpseTwo);

					grpLimoDancers = new FlxTypedGroup<BackgroundDancer>();
					add(grpLimoDancers);

					for (i in 0...5)
					{
						var dancer:BackgroundDancer = new BackgroundDancer((370 * i) + 130, bgLimo.y - 400);
						dancer.scrollFactor.set(0.4, 0.4);
						grpLimoDancers.add(dancer);
					}

					limoLight = new BGSprite('gore/coldHeartKiller', limoMetalPole.x - 180, limoMetalPole.y - 80, 0.4, 0.4);
					add(limoLight);

					grpLimoParticles = new FlxTypedGroup<BGSprite>();
					add(grpLimoParticles);

					//PRECACHE BLOOD
					var particle:BGSprite = new BGSprite('gore/stupidBlood', -400, -400, 0.4, 0.4, ['blood'], false);
					particle.alpha = 0.01;
					grpLimoParticles.add(particle);
					resetLimoKill();

					//PRECACHE SOUND
					precacheList.set('dancerdeath', 'sound');
				}

				limo = new BGSprite('limo/limoDrive', -120, 550, 1, 1, ['Limo stage'], true);

				fastCar = new BGSprite('limo/fastCarLol', -300, 160);
				fastCar.active = true;
				limoKillingState = 0;

			case 'mall': //Week 5 - Cocoa, Eggnog
				var bg:BGSprite = new BGSprite('christmas/bgWalls', -1000, -500, 0.2, 0.2);
				bg.setGraphicSize(Std.int(bg.width * 0.8));
				bg.updateHitbox();
				add(bg);

				if(!ClientPrefs.lowQuality) {
					upperBoppers = new BGSprite('christmas/upperBop', -240, -90, 0.33, 0.33, ['Upper Crowd Bob']);
					upperBoppers.setGraphicSize(Std.int(upperBoppers.width * 0.85));
					upperBoppers.updateHitbox();
					add(upperBoppers);

					var bgEscalator:BGSprite = new BGSprite('christmas/bgEscalator', -1100, -600, 0.3, 0.3);
					bgEscalator.setGraphicSize(Std.int(bgEscalator.width * 0.9));
					bgEscalator.updateHitbox();
					add(bgEscalator);
				}

				var tree:BGSprite = new BGSprite('christmas/christmasTree', 370, -250, 0.40, 0.40);
				add(tree);

				bottomBoppers = new BGSprite('christmas/bottomBop', -300, 140, 0.9, 0.9, ['Bottom Level Boppers Idle']);
				bottomBoppers.animation.addByPrefix('hey', 'Bottom Level Boppers HEY', 24, false);
				bottomBoppers.setGraphicSize(Std.int(bottomBoppers.width * 1));
				bottomBoppers.updateHitbox();
				add(bottomBoppers);

				var fgSnow:BGSprite = new BGSprite('christmas/fgSnow', -600, 700);
				add(fgSnow);

				santa = new BGSprite('christmas/santa', -840, 150, 1, 1, ['santa idle in fear']);
				add(santa);
				precacheList.set('Lights_Shut_off', 'sound');

			case 'mallEvil': //Week 5 - Winter Horrorland
				var bg:BGSprite = new BGSprite('christmas/evilBG', -400, -500, 0.2, 0.2);
				bg.setGraphicSize(Std.int(bg.width * 0.8));
				bg.updateHitbox();
				add(bg);

				var evilTree:BGSprite = new BGSprite('christmas/evilTree', 300, -300, 0.2, 0.2);
				add(evilTree);

				var evilSnow:BGSprite = new BGSprite('christmas/evilSnow', -200, 700);
				add(evilSnow);

			case 'school': //Week 6 - Senpai, Roses
				GameOverSubstate.deathSoundName = 'fnf_loss_sfx-pixel';
				GameOverSubstate.loopSoundName = 'gameOver-pixel';
				GameOverSubstate.endSoundName = 'gameOverEnd-pixel';
				GameOverSubstate.characterName = 'bf-pixel-dead';

				var bgSky:BGSprite = new BGSprite('weeb/weebSky', 0, 0, 0.1, 0.1);
				add(bgSky);
				bgSky.antialiasing = false;

				var repositionShit = -200;

				var bgSchool:BGSprite = new BGSprite('weeb/weebSchool', repositionShit, 0, 0.6, 0.90);
				add(bgSchool);
				bgSchool.antialiasing = false;

				var bgStreet:BGSprite = new BGSprite('weeb/weebStreet', repositionShit, 0, 0.95, 0.95);
				add(bgStreet);
				bgStreet.antialiasing = false;

				var widShit = Std.int(bgSky.width * 6);
				if(!ClientPrefs.lowQuality) {
					var fgTrees:BGSprite = new BGSprite('weeb/weebTreesBack', repositionShit + 170, 130, 0.9, 0.9);
					fgTrees.setGraphicSize(Std.int(widShit * 0.8));
					fgTrees.updateHitbox();
					add(fgTrees);
					fgTrees.antialiasing = false;
				}

				var bgTrees:FlxSprite = new FlxSprite(repositionShit - 380, -800);
				bgTrees.frames = Paths.getPackerAtlas('weeb/weebTrees');
				bgTrees.animation.add('treeLoop', [0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18], 12);
				bgTrees.animation.play('treeLoop');
				bgTrees.scrollFactor.set(0.85, 0.85);
				add(bgTrees);
				bgTrees.antialiasing = false;

				if(!ClientPrefs.lowQuality) {
					var treeLeaves:BGSprite = new BGSprite('weeb/petals', repositionShit, -40, 0.85, 0.85, ['PETALS ALL'], true);
					treeLeaves.setGraphicSize(widShit);
					treeLeaves.updateHitbox();
					add(treeLeaves);
					treeLeaves.antialiasing = false;
				}

				bgSky.setGraphicSize(widShit);
				bgSchool.setGraphicSize(widShit);
				bgStreet.setGraphicSize(widShit);
				bgTrees.setGraphicSize(Std.int(widShit * 1.4));

				bgSky.updateHitbox();
				bgSchool.updateHitbox();
				bgStreet.updateHitbox();
				bgTrees.updateHitbox();

				if(!ClientPrefs.lowQuality) {
					bgGirls = new BackgroundGirls(-100, 190);
					bgGirls.scrollFactor.set(0.9, 0.9);

					bgGirls.setGraphicSize(Std.int(bgGirls.width * daPixelZoom));
					bgGirls.updateHitbox();
					add(bgGirls);
				}

			case 'schoolEvil': //Week 6 - Thorns
				GameOverSubstate.deathSoundName = 'fnf_loss_sfx-pixel';
				GameOverSubstate.loopSoundName = 'gameOver-pixel';
				GameOverSubstate.endSoundName = 'gameOverEnd-pixel';
				GameOverSubstate.characterName = 'bf-pixel-dead';

				/*if(!ClientPrefs.lowQuality) { //Does this even do something?
					var waveEffectBG = new FlxWaveEffect(FlxWaveMode.ALL, 2, -1, 3, 2);
					var waveEffectFG = new FlxWaveEffect(FlxWaveMode.ALL, 2, -1, 5, 2);
				}*/
				var posX = 400;
				var posY = 200;
				if(!ClientPrefs.lowQuality) {
					var bg:BGSprite = new BGSprite('weeb/animatedEvilSchool', posX, posY, 0.8, 0.9, ['background 2'], true);
					bg.scale.set(6, 6);
					bg.antialiasing = false;
					add(bg);

					bgGhouls = new BGSprite('weeb/bgGhouls', -100, 190, 0.9, 0.9, ['BG freaks glitch instance'], false);
					bgGhouls.setGraphicSize(Std.int(bgGhouls.width * daPixelZoom));
					bgGhouls.updateHitbox();
					bgGhouls.visible = false;
					bgGhouls.antialiasing = false;
					add(bgGhouls);
				} else {
					var bg:BGSprite = new BGSprite('weeb/animatedEvilSchool_low', posX, posY, 0.8, 0.9);
					bg.scale.set(6, 6);
					bg.antialiasing = false;
					add(bg);
				}

			case 'tank': //Week 7 - Ugh, Guns, Stress
				var sky:BGSprite = new BGSprite('tankSky', -400, -400, 0, 0);
				add(sky);

				if(!ClientPrefs.lowQuality)
				{
					var clouds:BGSprite = new BGSprite('tankClouds', FlxG.random.int(-700, -100), FlxG.random.int(-20, 20), 0.1, 0.1);
					clouds.active = true;
					clouds.velocity.x = FlxG.random.float(5, 15);
					add(clouds);

					var mountains:BGSprite = new BGSprite('tankMountains', -300, -20, 0.2, 0.2);
					mountains.setGraphicSize(Std.int(1.2 * mountains.width));
					mountains.updateHitbox();
					add(mountains);

					var buildings:BGSprite = new BGSprite('tankBuildings', -200, 0, 0.3, 0.3);
					buildings.setGraphicSize(Std.int(1.1 * buildings.width));
					buildings.updateHitbox();
					add(buildings);
				}

				var ruins:BGSprite = new BGSprite('tankRuins',-200,0,.35,.35);
				ruins.setGraphicSize(Std.int(1.1 * ruins.width));
				ruins.updateHitbox();
				add(ruins);

				if(!ClientPrefs.lowQuality)
				{
					var smokeLeft:BGSprite = new BGSprite('smokeLeft', -200, -100, 0.4, 0.4, ['SmokeBlurLeft'], true);
					add(smokeLeft);
					var smokeRight:BGSprite = new BGSprite('smokeRight', 1100, -100, 0.4, 0.4, ['SmokeRight'], true);
					add(smokeRight);

					tankWatchtower = new BGSprite('tankWatchtower', 100, 50, 0.5, 0.5, ['watchtower gradient color']);
					add(tankWatchtower);
				}

				tankGround = new BGSprite('tankRolling', 300, 300, 0.5, 0.5,['BG tank w lighting'], true);
				add(tankGround);

				tankmanRun = new FlxTypedGroup<TankmenBG>();
				add(tankmanRun);

				var ground:BGSprite = new BGSprite('tankGround', -420, -150);
				ground.setGraphicSize(Std.int(1.15 * ground.width));
				ground.updateHitbox();
				add(ground);
				moveTank();

				foregroundSprites = new FlxTypedGroup<BGSprite>();
				foregroundSprites.add(new BGSprite('tank0', -500, 650, 1.7, 1.5, ['fg']));
				if(!ClientPrefs.lowQuality) foregroundSprites.add(new BGSprite('tank1', -300, 750, 2, 0.2, ['fg']));
				foregroundSprites.add(new BGSprite('tank2', 450, 940, 1.5, 1.5, ['foreground']));
				if(!ClientPrefs.lowQuality) foregroundSprites.add(new BGSprite('tank4', 1300, 900, 1.5, 1.5, ['fg']));
				foregroundSprites.add(new BGSprite('tank5', 1620, 700, 1.5, 1.5, ['fg']));
				if(!ClientPrefs.lowQuality) foregroundSprites.add(new BGSprite('tank3', 1300, 1200, 3.5, 2.5, ['fg']));

			case 'bobux': // Week Suicide
				var nosexi:BGSprite = new BGSprite('backgrounds/Destruido', -600, -200);
				nosexi.antialiasing = ClientPrefs.globalAntialiasing;
				nosexi.updateHitbox();
				add(nosexi);

			case 'defeat':
				defeatthing = new FlxSprite(-400, -150);
				defeatthing.frames = Paths.getSparrowAtlas('defeat');
				defeatthing.animation.addByPrefix('bop', 'defeat', 24, false);
				defeatthing.animation.play('bop');
				defeatthing.setGraphicSize(Std.int(defeatthing.width * 1.3));
				defeatthing.antialiasing = ClientPrefs.globalAntialiasing;
				defeatthing.scrollFactor.set(0.8, 0.8);
				if (!paused) defeatthing.active = true;
				add(defeatthing);

				bodies2 = new FlxSprite(-500, 150).loadGraphic(Paths.image('lol thing'));
				bodies2.antialiasing = ClientPrefs.globalAntialiasing;
				bodies2.setGraphicSize(Std.int(bodies2.width * 1.3));
				bodies2.scrollFactor.set(0.9, 0.9);
				bodies2.active = false;
				bodies2.alpha = 0;
				add(bodies2);

				bodies = new FlxSprite(-2760, 0).loadGraphic(Paths.image('deadBG'));
				bodies.setGraphicSize(Std.int(bodies.width * 0.4));
				bodies.antialiasing = ClientPrefs.globalAntialiasing;
				bodies.scrollFactor.set(0.9, 0.9);
				bodies.active = false;
				bodies.alpha = 0;
				add(bodies);

				defeatblack = new FlxSprite().makeGraphic(FlxG.width * 4, FlxG.height + 700, FlxColor.BLACK);
				defeatblack.alpha = 0;
				defeatblack.screenCenter();
				add(defeatblack);
				
				mainoverlayDK = new FlxSprite(250, 125).loadGraphic(Paths.image('defeatfnf'));
				mainoverlayDK.antialiasing = ClientPrefs.globalAntialiasing;
				mainoverlayDK.scrollFactor.set(1, 1);
				mainoverlayDK.active = false;
				mainoverlayDK.setGraphicSize(Std.int(mainoverlayDK.width * 2));
				mainoverlayDK.alpha = 0;
				add(mainoverlayDK);

				bodiesfront = new FlxSprite(-2830, 0).loadGraphic(Paths.image('deadFG'));
				bodiesfront.setGraphicSize(Std.int(bodiesfront.width * 0.4));
				bodiesfront.antialiasing = ClientPrefs.globalAntialiasing;
				bodiesfront.scrollFactor.set(0.5, 1);
				bodiesfront.active = false;
				bodiesfront.alpha = 0;

				lightoverlay = new FlxSprite(-550, -100).loadGraphic(Paths.image('iluminao omaga'));
				lightoverlay.antialiasing = ClientPrefs.globalAntialiasing;
				lightoverlay.scrollFactor.set(1, 1);
				lightoverlay.active = false;
				lightoverlay.blend = ADD;
		}

		switch(Paths.formatToSongPath(SONG.song))
		{
			case 'stress':
				GameOverSubstate.characterName = 'bf-holding-gf-dead';
		}

		if(isPixelStage) {
			introSoundsSuffix = '-pixel';
		}

		dadGhost = new FlxSprite();
		bf2Ghost = new FlxSprite();
		bfGhost = new FlxSprite();

		add(gfGroup); //Needed for blammed lights
		add(bfGhost);
		add(dadGhost);
		add(bf2Ghost);

		// Shitty layering but whatev it works LOL
		if (curStage == 'limo')
			add(limo);

		add(dadGroup);
		add(boyfriendGroup);

		switch(curStage)
		{
			case 'spooky':
				add(halloweenWhite);
			case 'super-idol':
				add(cerboro);
			case 'tank':
				add(foregroundSprites);
			case 'defeat':
				add(bodiesfront);
				add(lightoverlay);
		}

		#if LUA_ALLOWED
		luaDebugGroup = new FlxTypedGroup<DebugLuaText>();
		luaDebugGroup.cameras = [camOther];
		add(luaDebugGroup);
		#end

		coolTextGroup = new FlxTypedGroup<CoolText>();
		coolTextGroup.cameras = [camOther];
		add(coolTextGroup);

		// "GLOBAL" SCRIPTS
		#if LUA_ALLOWED
		var filesPushed:Array<String> = [];
		var foldersToCheck:Array<String> = [Paths.getPreloadPath('scripts/')];

		#if MODS_ALLOWED
		foldersToCheck.insert(0, Paths.mods('scripts/'));
		if(Paths.currentModDirectory != null && Paths.currentModDirectory.length > 0)
			foldersToCheck.insert(0, Paths.mods(Paths.currentModDirectory + '/scripts/'));

		for(mod in Paths.getGlobalMods())
			foldersToCheck.insert(0, Paths.mods(mod + '/scripts/'));
		#end

		for (folder in foldersToCheck)
		{
			if(FileSystem.exists(folder))
			{
				for (file in FileSystem.readDirectory(folder))
				{
					if(file.endsWith('.lua') && !filesPushed.contains(file))
					{
						luaArray.push(new FunkinLua(folder + file));
						filesPushed.push(file);
					}
				}
			}
		}
		#end

		// STAGE SCRIPTS
		#if (MODS_ALLOWED && LUA_ALLOWED)
		var doPush:Bool = false;
		var luaFile:String = 'stages/' + curStage + '.lua';
		if(FileSystem.exists(Paths.modFolders(luaFile))) {
			luaFile = Paths.modFolders(luaFile);
			doPush = true;
		} else {
			luaFile = Paths.getPreloadPath(luaFile);
			if(FileSystem.exists(luaFile)) {
				doPush = true;
			}
		}

		if(doPush)
			luaArray.push(new FunkinLua(luaFile));

		if(!modchartSprites.exists('blammedLightsBlack2')) { //Creates blammed light black fade in case you didn't make your own
			blammedLightsBlack2 = new ModchartSprite(FlxG.width * -0.5, FlxG.height * -0.5);
			blammedLightsBlack2.makeGraphic(Std.int(FlxG.width * 2), Std.int(FlxG.height * 2), FlxColor.BLACK);
			var position:Int = members.indexOf(gfGroup);
			if(members.indexOf(boyfriendGroup) < position) {
				position = members.indexOf(boyfriendGroup);
			} else if(members.indexOf(dadGroup) < position) {
				position = members.indexOf(dadGroup);
			}

			insert(position, blammedLightsBlack2);

			blammedLightsBlack2.wasAdded = true;
			modchartSprites.set('blammedLightsBlack2', blammedLightsBlack2);
			blammedLightsBlack = modchartSprites.get('blammedLightsBlack2');
			blammedLightsBlack.alpha = 0;
		}
		#end

		var gfVersion:String = SONG.gfVersion;
		if(gfVersion == null || gfVersion.length < 1)
		{
			switch (curStage)
			{
				case 'limo':
					gfVersion = 'gf-car';
				case 'mall' | 'mallEvil':
					gfVersion = 'gf-christmas';
				case 'school' | 'schoolEvil':
					gfVersion = 'gf-pixel';
				case 'tank':
					gfVersion = 'gf-tankmen';
				default:
					gfVersion = 'gf';
			}

			switch(Paths.formatToSongPath(SONG.song))
			{
				case 'stress':
					gfVersion = 'pico-speaker';
			}
			SONG.gfVersion = gfVersion; //Fix for the Chart Editor
		}

		if (!stageData.hide_girlfriend)
		{
			gf = new Character(0, 0, gfVersion);
			startCharacterPos(gf);
			gf.scrollFactor.set(0.95, 0.95);
			gfGroup.add(gf);
			startCharacterLua(gf.curCharacter);

			if(gfVersion == 'pico-speaker')
			{
				if(!ClientPrefs.lowQuality)
				{
					var firstTank:TankmenBG = new TankmenBG(20, 500, true);
					firstTank.resetShit(20, 600, true);
					firstTank.strumTime = 10;
					tankmanRun.add(firstTank);

					for (i in 0...TankmenBG.animationNotes.length)
					{
						if(FlxG.random.bool(16)) {
							var tankBih = tankmanRun.recycle(TankmenBG);
							tankBih.strumTime = TankmenBG.animationNotes[i][0];
							tankBih.resetShit(500, 200 + FlxG.random.int(50, 100), TankmenBG.animationNotes[i][1] < 2);
							tankmanRun.add(tankBih);
						}
					}
				}
			}
		}

		dad = new Character(0, 0, SONG.player2);
		startCharacterPos(dad, true);
		dadGroup.add(dad);
		startCharacterLua(dad.curCharacter);

		boyfriend = new Boyfriend(0, 0, SONG.player1);
		startCharacterPos(boyfriend);
		boyfriendGroup.add(boyfriend);
		startCharacterLua(boyfriend.curCharacter);

		boyfriend2 = new Boyfriend(0, 0, 'bf-encore');
		startCharacterPos(boyfriend2);
		boyfriendGroup.add(boyfriend2);
		boyfriend2.visible = false;
		startCharacterLua(boyfriend2.curCharacter);

		dadGhost.alpha = 0.0001;
		dadGhost.scale.copyFrom(dad.scale);
		dadGhost.updateHitbox();

		bf2Ghost.alpha = 0.0001;
		bf2Ghost.scale.copyFrom(boyfriend2.scale);
		bf2Ghost.updateHitbox();

		bfGhost.alpha = 0.0001;
		bfGhost.scale.copyFrom(boyfriend.scale);
		bfGhost.updateHitbox();

		if(isPixelStage)
		{
			bfGhost.antialiasing = false;
			dadGhost.antialiasing = false;
			bf2Ghost.antialiasing = false;
		}
		else
		{
			bfGhost.antialiasing = ClientPrefs.globalAntialiasing;
			dadGhost.antialiasing = ClientPrefs.globalAntialiasing;
			bf2Ghost.antialiasing = ClientPrefs.globalAntialiasing;
		}

		var camPos:FlxPoint = new FlxPoint(girlfriendCameraOffset[0], girlfriendCameraOffset[1]);
		if(gf != null)
		{
			camPos.x += gf.getGraphicMidpoint().x + gf.cameraPosition[0];
			camPos.y += gf.getGraphicMidpoint().y + gf.cameraPosition[1];
		}

		if(dad.curCharacter.startsWith('gf')) {
			dad.setPosition(GF_X, GF_Y);
			if(gf != null)
				gf.visible = false;
		}
		switch(curStage)
		{
			case 'market':
				boyfriend.x += 340;
				boyfriend.y += 100;
				dad.x += -200;
				dad.y += 400;
				gf.x += 1040;
				gf.y += 430;
			case 'limo':
				resetFastCar();
				addBehindGF(fastCar);

			case 'schoolEvil':
				var evilTrail = new FlxTrail(dad, null, 4, 24, 0.3, 0.069); //nice
				addBehindDad(evilTrail);
		}

		var file:String = Paths.json(songName + '/dialogue'); //Checks for json/Psych Engine dialogue
		if (OpenFlAssets.exists(file)) {
			dialogueJson = DialogueBoxPsych.parseDialogue(file);
		}

		var file:String = Paths.txt(songName + '/' + songName + 'Dialogue'); //Checks for vanilla/Senpai dialogue
		if (OpenFlAssets.exists(file)) {
			dialogue = CoolUtil.coolTextFile(file);
		}
		var doof:DialogueBox = new DialogueBox(false, dialogue);
		// doof.x += 70;
		// doof.y = FlxG.height * 0.5;
		doof.scrollFactor.set();
		doof.finishThing = startCountdown;
		doof.nextDialogueThing = startNextDialogue;
		doof.skipDialogueThing = skipDialogue;

		Conductor.songPosition = -5000;

		strumLine = new FlxSprite(ClientPrefs.middleScroll ? STRUM_X_MIDDLESCROLL : STRUM_X, 50).makeGraphic(FlxG.width, 10);
		if(ClientPrefs.downScroll) strumLine.y = FlxG.height - 150;
		strumLine.scrollFactor.set();

		laneunderlay = new FlxSprite(0, 0).makeGraphic(110 * 4 + 50, FlxG.height * 2);
		laneunderlay.color = FlxColor.BLACK;
		laneunderlay.scrollFactor.set();
        laneunderlay.visible = true;
	  	//add(laneunderlay);

		timeTxt = new FlxText(STRUM_X + (FlxG.width / 2) - 248, 19, 400, "", 32);
		timeTxt.setFormat(Paths.font("vcr.ttf"), 32, FlxColor.WHITE, CENTER, FlxTextBorderStyle.OUTLINE, FlxColor.BLACK);
		timeTxt.scrollFactor.set();
		timeTxt.alpha = 0;
		timeTxt.borderSize = 2;
		timeTxt.visible = showTime;
		if(ClientPrefs.downScroll) timeTxt.y = FlxG.height - 44;

		if(ClientPrefs.timeBarType == 'Song Name')
		{
			timeTxt.text = SONG.song;
		}
		updateTime = showTime;

		timeBarBG = new AttachedSprite('timeBar');
		timeBarBG.x = timeTxt.x;
		timeBarBG.y = timeTxt.y + (timeTxt.height / 4);
		timeBarBG.scrollFactor.set();
		timeBarBG.visible = false;
		timeBarBG.color = FlxColor.BLACK;
		timeBarBG.xAdd = -4;
		timeBarBG.yAdd = -4;
		timeBarBG.screenCenter(X);
		add(timeBarBG);

		timeBar = new FlxBar(timeBarBG.x + 4, timeBarBG.y + 4, LEFT_TO_RIGHT, Std.int(timeBarBG.width - 8), Std.int(timeBarBG.height - 8), this,
			'songPercent', 0, 1);
		timeBar.scrollFactor.set();
		timeBar.numDivisions = 800; //How much lag this causes?? Should i tone it down to idk, 400 or 200?
		timeBarBG.alpha = 0;
		timeBar.alpha = 0;
		timeBar.visible = showTime;
		add(timeBar);
		add(timeTxt);
		timeBarBG.sprTracker = timeBar;
		reloadTimeBarColors();

		strumLineNotes = new FlxTypedGroup<StrumNote>();
		add(strumLineNotes);
		add(grpNoteSplashes);

		if(ClientPrefs.timeBarType == 'Song Name')
		{
			timeTxt.size = 24;
			timeTxt.y += 3;
		}

		var splash:NoteSplash = new NoteSplash(100, 100, 0);
		grpNoteSplashes.add(splash);
		splash.alpha = 0.0;

		opponentStrums = new FlxTypedGroup<StrumNote>();
		playerStrums = new FlxTypedGroup<StrumNote>();

		// startCountdown();

		generateSong(SONG.song);

		startScript();

		#if LUA_ALLOWED
		for (notetype in noteTypeMap.keys())
		{
			#if MODS_ALLOWED
			var luaToLoad:String = Paths.modFolders('custom_notetypes/' + notetype + '.lua');
			if(FileSystem.exists(luaToLoad))
			{
				luaArray.push(new FunkinLua(luaToLoad));
			}
			else
			{
				luaToLoad = Paths.getPreloadPath('custom_notetypes/' + notetype + '.lua');
				if(FileSystem.exists(luaToLoad))
				{
					luaArray.push(new FunkinLua(luaToLoad));
				}
			}
			#elseif sys
			var luaToLoad:String = Paths.getPreloadPath('custom_notetypes/' + notetype + '.lua');
			if(OpenFlAssets.exists(luaToLoad))
			{
				luaArray.push(new FunkinLua(luaToLoad));
			}
			#end
		}
		for (event in eventPushedMap.keys())
		{
			#if MODS_ALLOWED
			var luaToLoad:String = Paths.modFolders('custom_events/' + event + '.lua');
			if(FileSystem.exists(luaToLoad))
			{
				luaArray.push(new FunkinLua(luaToLoad));
			}
			else
			{
				luaToLoad = Paths.getPreloadPath('custom_events/' + event + '.lua');
				if(FileSystem.exists(luaToLoad))
				{
					luaArray.push(new FunkinLua(luaToLoad));
				}
			}
			#elseif sys
			var luaToLoad:String = Paths.getPreloadPath('custom_events/' + event + '.lua');
			if(OpenFlAssets.exists(luaToLoad))
			{
				luaArray.push(new FunkinLua(luaToLoad));
			}
			#end
		}
		#end
		noteTypeMap.clear();
		noteTypeMap = null;
		eventPushedMap.clear();
		eventPushedMap = null;

		// After all characters being loaded, it makes then invisible 0.01s later so that the player won't freeze when you change characters
		// add(strumLine);

		camFollow = new FlxPoint();
		camFollowPos = new FlxObject(0, 0, 1, 1);

		snapCamFollowToPos(camPos.x, camPos.y);
		if (prevCamFollow != null)
		{
			camFollow = prevCamFollow;
			prevCamFollow = null;
		}
		if (prevCamFollowPos != null)
		{
			camFollowPos = prevCamFollowPos;
			prevCamFollowPos = null;
		}
		add(camFollowPos);

		FlxG.camera.follow(camFollowPos, LOCKON, 1);
		// FlxG.camera.setScrollBounds(0, FlxG.width, 0, FlxG.height);
		FlxG.camera.zoom = defaultCamZoom;

		FlxG.camera.focusOn(camFollow);

		FlxG.worldBounds.set(0, 0, FlxG.width, FlxG.height);

		FlxG.fixedTimestep = false;
		moveCameraSection();

		var foldersToCheck:Array<String> = [];

		var songName:String = Paths.formatToSongPath(SONG.song.trim());

		// the worst possible way to make this, but it works i guess lol
		if (FileSystem.exists(Paths.txt(songName + "/" + "info")))
		{
			trace('it exists');
			task = new TaskSong(0, 200, songName);
			task.cameras = [camOther];
			add(task);
		}
		else if (FileSystem.exists(Paths.modTxt(songName + "/" + "info")))
		{
			trace('it exists in the mods folder');
			task3 = new TaskSongModsFolder(0, 200, songName);
			task3.cameras = [camOther];
			add(task3);
		}
		else
		{
			trace('it doesnt');
			task2 = new TaskSongNotFound(0, 200, songName);
			task2.cameras = [camOther];
			add(task2);
		}


		healthBarBG = new AttachedSprite('healthBar');
		healthBarBG.y = FlxG.height * 0.89;
		healthBarBG.screenCenter(X);
		healthBarBG.scrollFactor.set();
		healthBarBG.visible = !ClientPrefs.hideHud;
		healthBarBG.xAdd = -4;
		healthBarBG.yAdd = -4;
		if(ClientPrefs.downScroll) healthBarBG.y = 0.11 * FlxG.height;
		add(healthBarBG);

		healthBar = new FlxBar(healthBarBG.x + 4, healthBarBG.y + 4, RIGHT_TO_LEFT, Std.int(healthBarBG.width - 8), Std.int(healthBarBG.height - 8), this,
			'health', 0, 2);
		healthBar.scrollFactor.set();
		// healthBar
		healthBar.visible = !ClientPrefs.hideHud;
		healthBar.alpha = ClientPrefs.healthBarAlpha;
		add(healthBar);
		healthBarBG.sprTracker = healthBar;

		iconP1 = new HealthIcon(boyfriend.healthIcon, true);
		iconP1.y = healthBar.y - 75;
		iconP1.visible = !ClientPrefs.hideHud;
		iconP1.alpha = ClientPrefs.healthBarAlpha;
		add(iconP1);

		iconP2 = new HealthIcon(dad.healthIcon, false);
		iconP2.y = healthBar.y - 75;
		iconP2.visible = !ClientPrefs.hideHud;
		iconP2.alpha = ClientPrefs.healthBarAlpha;
		add(iconP2);
		add(scoreGroup);
		add(scoreGroupSpr);

		iconP3 = new HealthIcon(boyfriend2.healthIcon, true);
		iconP3.y = iconP1.y - 50;
		iconP3.visible = false;
		if (!ClientPrefs.hideHud)
			iconP3.visible = false;
		else if (!ClientPrefs.hideHud)
			iconP3.visible = true;
		iconP3.alpha = ClientPrefs.healthBarAlpha;
		add(iconP3);
		reloadHealthBarColors();

		scoreTxt = new FlxText(0, healthBarBG.y + 45, FlxG.width, "", 20);
		scoreTxt.setFormat(Paths.font("vcr.ttf"), 20, FlxColor.WHITE, CENTER, FlxTextBorderStyle.OUTLINE, FlxColor.BLACK);
		scoreTxt.scrollFactor.set();
		scoreTxt.borderSize = 1.25;
		scoreTxt.antialiasing = ClientPrefs.globalAntialiasing;
		scoreTxt.visible = !ClientPrefs.hideHud;
		add(scoreTxt);

		judgementCounter = new FlxText(20, 0, 0, "", 20);
		judgementCounter.setFormat(Paths.font("vcr.ttf"), 16, FlxColor.WHITE, FlxTextAlign.LEFT, FlxTextBorderStyle.OUTLINE, FlxColor.BLACK);
		judgementCounter.borderSize = 1.25;
		judgementCounter.scrollFactor.set();
		judgementCounter.cameras = [camHUD];
		judgementCounter.antialiasing = ClientPrefs.globalAntialiasing;
		judgementCounter.visible = !ClientPrefs.hideHud;
		judgementCounter.screenCenter(Y);
		if (ClientPrefs.judgementCounter) add(judgementCounter);

		setupHUD(ClientPrefs.gameHuds);
		if (SONG.song.toLowerCase() == 'defeat')
			setupHUD("Vs Impostor HUD");

		var introTagColor:FlxColor = FlxColor.fromRGB(dad.healthColorArray[0], dad.healthColorArray[1], dad.healthColorArray[2]);
		var songName:String = SONG.song.replace("-", " ");

        jukeBoxTag = new FlxSprite(-305 - introTagWidth, 15);
        jukeBoxTag.makeGraphic(300 + introTagWidth, 100, introTagColor);
        jukeBoxTag.cameras = [camOther];
        add(jukeBoxTag);

        jukeBox = new FlxSprite(-305 - introTagWidth, 15);
        jukeBox.makeGraphic(300, 100, FlxColor.BLACK);
        jukeBox.cameras = [camOther];
        add(jukeBox);

        jukeBoxText = new FlxText(-305 - introTagWidth, 30, 300, "Now Playing:", introTextSize);
        jukeBoxText.setFormat(Paths.font("vcr.ttf"), introTextSize, FlxColor.WHITE, LEFT, FlxTextBorderStyle.OUTLINE, FlxColor.BLACK);
        jukeBoxText.scrollFactor.set();
		jukeBoxText.borderSize = 1.25;
		jukeBoxText.antialiasing = ClientPrefs.globalAntialiasing;
		jukeBoxText.cameras = [camOther];
        add(jukeBoxText);

        jukeBoxSubText = new FlxText(-305 - introTagWidth, 60, 300, songName, introTextSize);
        jukeBoxSubText.setFormat(Paths.font("vcr.ttf"), introTextSize, FlxColor.WHITE, LEFT, FlxTextBorderStyle.OUTLINE, FlxColor.BLACK);
        jukeBoxSubText.scrollFactor.set();
		jukeBoxSubText.borderSize = 1.25;
		jukeBoxSubText.antialiasing = ClientPrefs.globalAntialiasing;
		jukeBoxSubText.cameras = [camOther];
        add(jukeBoxSubText);

		botplayTxt = new FlxText(400, timeBarBG.y + 55, FlxG.width - 800, "BOTPLAY", 32);
		botplayTxt.setFormat(Paths.font("vcr.ttf"), 32, FlxColor.WHITE, CENTER, FlxTextBorderStyle.OUTLINE, FlxColor.BLACK);
		botplayTxt.scrollFactor.set();
		botplayTxt.borderSize = 1.25;
		botplayTxt.visible = cpuControlled;
		//add(botplayTxt);
		if(ClientPrefs.downScroll) {
			botplayTxt.y = timeBarBG.y - 78;
		}

		var difficultyName:String = CoolUtil.difficulties[PlayState.storyDifficulty];

		songNameHey = new FlxText(0, timeBarBG.y + 55, FlxG.width - 800, SONG.song.replace('-', ' ') + ' [' + difficultyName.toUpperCase() + ']', 32);
		songNameHey.setFormat(Paths.font("vcr.ttf"), 24, FlxColor.WHITE, CENTER, FlxTextBorderStyle.OUTLINE, FlxColor.BLACK);
		songNameHey.scrollFactor.set();
		songNameHey.alpha = 0;
		songNameHey.cameras = [camHUD];
		add(songNameHey);
		if(ClientPrefs.downScroll) {
			songNameHey.y = timeBarBG.y - 78;
		}

		songText = new FlxText(0, timeBarBG.y + 55, FlxG.width - 800, SONG.song.replace('-', ' '), 32);
		songText.setFormat(Paths.font("vcr.ttf"), 24, FlxColor.WHITE, CENTER, FlxTextBorderStyle.OUTLINE, FlxColor.BLACK);
		songText.scrollFactor.set();
		songText.alpha = 0;

		lula = new FlxSprite(FlxG.width/2 - 300, FlxG.height/2 - 300).loadGraphic(Paths.image("lula/lula5"));
		lula.cameras = [camOther];
		lula.alpha = 0.0001;

		blackScreen = new FlxSprite().makeGraphic(Std.int(FlxG.width * 4), Std.int(FlxG.height * 4), FlxColor.BLACK);
		blackScreen.cameras = [camOther];
		blackScreen.alpha = 0.0001;
		add(blackScreen);
		add(lula);
		blackScreen.scrollFactor.set();

		songNameDisplay = new FlxText(-10000, 357.5, Std.int(FlxG.width), SONG.song.replace('-', ' ') + ' [' + difficultyName.toUpperCase() + ']', 20);
		songNameDisplay.setFormat(Paths.font("vcr.ttf"), 50, FlxColor.WHITE, CENTER, FlxTextBorderStyle.OUTLINE, FlxColor.BLACK);
		songNameDisplay.scrollFactor.set();
		songNameDisplay.borderSize = 2;
		songNameDisplay.cameras = [camOther];
		songNameDisplay.updateHitbox();
		add(songNameDisplay);

		cutsceneTxt = new FlxText(400, timeBarBG.y + 10, FlxG.width - 800, "", 16);
		cutsceneTxt.setFormat(Paths.font("vcr.ttf"), 16, FlxColor.WHITE, CENTER, FlxTextBorderStyle.OUTLINE, FlxColor.BLACK);
		cutsceneTxt.scrollFactor.set();
		add(cutsceneTxt);

		strumLineNotes.cameras = [camHUD];
		grpNoteSplashes.cameras = [camHUD];
		notes.cameras = [camHUD];
		healthBar.cameras = [camHUD];
		healthBarBG.cameras = [camHUD];
		iconP1.cameras = [camHUD];
		iconP2.cameras = [camHUD];
		iconP3.cameras = [camHUD];
		scoreTxt.cameras = [camHUD];
		if (ClientPrefs.gameHuds == "New HUD")
		{
			totalTxt.cameras = [camHUD];
			elapsedTxt.cameras = [camHUD];
			songTxt.cameras = [camHUD];
		}
		cutsceneTxt.cameras = [camOther];
		botplayTxt.cameras = [camHUD];
		timeBar.cameras = [camHUD];
		timeBarBG.cameras = [camHUD];
		timeTxt.cameras = [camHUD];
		doof.cameras = [camHUD];
		laneunderlay.cameras = [camHUD];

		startingSong = true;

		// SONG SPECIFIC SCRIPTS
		#if LUA_ALLOWED
		var filesPushed:Array<String> = [];
		var foldersToCheck:Array<String> = [Paths.getPreloadPath('data/' + Paths.formatToSongPath(SONG.song) + '/')];

		#if MODS_ALLOWED
		foldersToCheck.insert(0, Paths.mods('data/' + Paths.formatToSongPath(SONG.song) + '/'));
		if(Paths.currentModDirectory != null && Paths.currentModDirectory.length > 0)
			foldersToCheck.insert(0, Paths.mods(Paths.currentModDirectory + '/data/' + Paths.formatToSongPath(SONG.song) + '/'));

		for(mod in Paths.getGlobalMods())
			foldersToCheck.insert(0, Paths.mods(mod + '/data/' + Paths.formatToSongPath(SONG.song) + '/' ));// using push instead of insert because these should run after everything else
		#end

		for (folder in foldersToCheck)
		{
			if(FileSystem.exists(folder))
			{
				for (file in FileSystem.readDirectory(folder))
				{
					if(file.endsWith('.lua') && !filesPushed.contains(file))
					{
						luaArray.push(new FunkinLua(folder + file));
						filesPushed.push(file);
					}
				}
			}
		}
		#end

		var daSong:String = Paths.formatToSongPath(curSong);
		if (isStoryMode && !seenCutscene)
		{
			switch (daSong)
			{
				case "monster":
					var whiteScreen:FlxSprite = new FlxSprite(0, 0).makeGraphic(Std.int(FlxG.width * 2), Std.int(FlxG.height * 2), FlxColor.WHITE);
					add(whiteScreen);
					whiteScreen.scrollFactor.set();
					whiteScreen.blend = ADD;
					camHUD.visible = false;
					snapCamFollowToPos(dad.getMidpoint().x + 150, dad.getMidpoint().y - 100);
					inCutscene = true;

					FlxTween.tween(whiteScreen, {alpha: 0}, 1, {
						startDelay: 0.1,
						ease: FlxEase.linear,
						onComplete: function(twn:FlxTween)
						{
							camHUD.visible = true;
							remove(whiteScreen);
							startCountdown();
						}
					});
					FlxG.sound.play(Paths.soundRandom('thunder_', 1, 2));
					if(gf != null) gf.playAnim('scared', true);
					boyfriend.playAnim('scared', true);

				case "winter-horrorland":
					var blackScreen:FlxSprite = new FlxSprite().makeGraphic(Std.int(FlxG.width * 2), Std.int(FlxG.height * 2), FlxColor.BLACK);
					add(blackScreen);
					blackScreen.scrollFactor.set();
					camHUD.visible = false;
					inCutscene = true;

					FlxTween.tween(blackScreen, {alpha: 0}, 0.7, {
						ease: FlxEase.linear,
						onComplete: function(twn:FlxTween) {
							remove(blackScreen);
						}
					});
					FlxG.sound.play(Paths.sound('Lights_Turn_On'));
					snapCamFollowToPos(400, -2050);
					FlxG.camera.focusOn(camFollow);
					FlxG.camera.zoom = 1.5;

					new FlxTimer().start(0.8, function(tmr:FlxTimer)
					{
						camHUD.visible = true;
						remove(blackScreen);
						FlxTween.tween(FlxG.camera, {zoom: defaultCamZoom}, 2.5, {
							ease: FlxEase.quadInOut,
							onComplete: function(twn:FlxTween)
							{
								startCountdown();
							}
						});
					});
				case 'senpai' | 'roses' | 'thorns':
					if(daSong == 'roses') FlxG.sound.play(Paths.sound('ANGRY'));
					schoolIntro(doof);

				case 'ugh' | 'guns' | 'stress':
					tankIntro();

				case 'haxxer':
					startVideo('cutscene');

				default:
					startCountdown();
			}
			seenCutscene = true;
		}
		else
		{
			startCountdown();
		}
		RecalculateRating();

		//PRECACHING MISS SOUNDS BECAUSE I THINK THEY CAN LAG PEOPLE AND FUCK THEM UP IDK HOW HAXE WORKS
		if(ClientPrefs.hitsoundVolume > 0) precacheList.set('hitsound', 'sound');
		precacheList.set('missnote1', 'sound');
		precacheList.set('missnote2', 'sound');
		precacheList.set('missnote3', 'sound');

		if (PauseSubState.songName != null) {
			precacheList.set(PauseSubState.songName, 'music');
		} else if(ClientPrefs.pauseMusic != 'None') {
			precacheList.set(Paths.formatToSongPath(ClientPrefs.pauseMusic), 'music');
		}

		precacheList.set('alphabet', 'image');
	
		#if desktop
		// Updating Discord Rich Presence.
		DiscordClient.changePresence(detailsText, SONG.song + " (" + storyDifficultyText + ")", iconP2.getCharacter());
		#end

		if(!ClientPrefs.controllerMode)
		{
			FlxG.stage.addEventListener(KeyboardEvent.KEY_DOWN, onKeyPress);
			FlxG.stage.addEventListener(KeyboardEvent.KEY_UP, onKeyRelease);
		}

		Conductor.safeZoneOffset = (ClientPrefs.safeFrames / 60) * 1000;
		callOnLuas('onCreatePost', []);

		precacheList.set('NoteComboExecute', 'sound');

		if (script != null) script.executeFunc("onCreatePost");

		for (i in 0...unspawnNotes.length)
		{
			if (!unspawnNotes[i].isSustainNote && unspawnNotes[i].mustPress)
			{
				totalNotes += 1;
			}
		}

		super.create();

		cacheCountdown();
		cachePopUpScore();
		for (key => type in precacheList)
		{
			//trace('Key $key is type $type');
			switch(type)
			{
				case 'image':
					Paths.image(key);
				case 'sound':
					Paths.sound(key);
				case 'music':
					Paths.music(key);
			}
		}
		Paths.clearUnusedMemory();

		if (script != null)
		{
			script.executeFunc("onCreate");
		}

		CustomFadeTransition.nextCamera = camOther;
		CustomFadeTransitionNEW.nextCamera = camOther;
	}

	public function setupHUD(style:String)
	{
		switch (style)
		{
			case "New HUD":
				timeTxt.y = 100000000000;
				remove(timeBarBG);
				remove(timeBar);
				remove(scoreTxt);
				remove(judgementCounter);

				timeBarBG = new AttachedSprite('timeBar');
				timeBarBG.setGraphicSize(FlxG.width + 23, 15);
				timeBarBG.y = (ClientPrefs.downScroll ? 8 : 700);
				timeBarBG.scrollFactor.set();
				timeBarBG.updateHitbox();
				timeBarBG.screenCenter(X);
				timeBarBG.visible = false;
				scoreGroupSpr.add(timeBarBG);
				timeBarBG.color = FlxColor.BLACK;

				timeBar = new FlxBar(timeBarBG.x + 12, timeBarBG.y + 8, LEFT_TO_RIGHT, Std.int(timeBarBG.width - 24), 13, this, 'songPercent', 0, 1);
				timeBar.scrollFactor.set();
				timeBar.numDivisions = 800; // How much lag this causes?? Should i tone it down to idk, 400 or 200?
				timeBar.alpha = 0;
				timeBar.visible = showTime;
				timeBar.screenCenter(X);
				scoreGroupSpr.add(timeBar);
				scoreGroup.add(timeTxt);
				reloadTimeBarColors();

				songTxt = new FlxText(0, 0, FlxG.width, SONG.song.replace('-', ' '), 20);
				songTxt.setFormat(Paths.font("PhantomMuff.ttf"), 21, CENTER, FlxTextBorderStyle.OUTLINE, FlxColor.BLACK);
				songTxt.scrollFactor.set();
				songTxt.antialiasing = ClientPrefs.globalAntialiasing;
				songTxt.borderSize = 1.25;
				songTxt.visible = (!ClientPrefs.hideHud && showTime);
				songTxt.alpha = 0;
				insert(members.indexOf(notes) + 1, songTxt);

				elapsedTxt = new FlxText(30, 0, FlxG.width, "", 20);
				elapsedTxt.setFormat(Paths.font("PhantomMuff.ttf"), 21, LEFT, FlxTextBorderStyle.OUTLINE, FlxColor.BLACK);
				elapsedTxt.scrollFactor.set();
				elapsedTxt.antialiasing = ClientPrefs.globalAntialiasing;
				elapsedTxt.borderSize = 1.25;
				elapsedTxt.visible = (!ClientPrefs.hideHud && showTime);
				elapsedTxt.alpha = 0;
				insert(members.indexOf(notes) + 1, elapsedTxt);

				totalTxt = new FlxText(1100, 0, FlxG.width, "", 20);
				totalTxt.setFormat(Paths.font("PhantomMuff.ttf"), 21, LEFT, FlxTextBorderStyle.OUTLINE, FlxColor.BLACK);
				totalTxt.scrollFactor.set();
				totalTxt.antialiasing = ClientPrefs.globalAntialiasing;
				totalTxt.borderSize = 1.25;
				totalTxt.visible = (!ClientPrefs.hideHud && showTime);
				totalTxt.alpha = 0;
				insert(members.indexOf(notes) + 1, totalTxt);

				scoreTxt = new FlxText(30, 0, FlxG.width, "", 20);
				scoreTxt.setFormat(Paths.font("PhantomMuff.ttf"), 21, LEFT, FlxTextBorderStyle.OUTLINE, FlxColor.BLACK);
				scoreTxt.scrollFactor.set();
				scoreTxt.antialiasing = ClientPrefs.globalAntialiasing;
				scoreTxt.borderSize = 1.25;
				scoreTxt.visible = !ClientPrefs.hideHud;
				scoreTxt.alpha = 0;
				insert(members.indexOf(notes) + 1, scoreTxt);

				judgementCounter = new FlxText(1100, 0, 0, "", 20);
				judgementCounter.setFormat(Paths.font("PhantomMuff.ttf"), 21, FlxColor.WHITE, FlxTextAlign.LEFT, FlxTextBorderStyle.OUTLINE, FlxColor.BLACK);
				judgementCounter.borderSize = 1.25;
				judgementCounter.scrollFactor.set();
				judgementCounter.cameras = [camHUD];
				judgementCounter.antialiasing = ClientPrefs.globalAntialiasing;
				judgementCounter.alpha = 0;
				if (ClientPrefs.judgementCounter) insert(members.indexOf(notes) + 1, judgementCounter);

				var plusNum:Int = -20;

				var songY:Float;
				var scoreY:Float;

				if (ClientPrefs.downScroll)
				{
					songY = healthBarBG.y - 75;
					scoreY = songY + 58 + plusNum;

					songTxt.y = songY;
					elapsedTxt.y = songY;
					totalTxt.y = songY;
					timeBar.y = songY - 10;
					scoreTxt.y = scoreY + 20;
					judgementCounter.y = scoreY;
				}
				else
				{
					songY = healthBarBG.y + 40;
					scoreY = songY - 98 + plusNum;

					songTxt.y = songY;
					elapsedTxt.y = songY;
					totalTxt.y = songY;
					scoreTxt.y = scoreY - 20;
					judgementCounter.y = scoreY;
				}
			case "Vs Impostor HUD":
				remove(scoreTxt);
				scoreTxt = new FlxText(0, healthBarBG.y + 36, FlxG.width, "", 20);
				scoreTxt.setFormat(Paths.font("vcr.ttf"), 20, CENTER, FlxTextBorderStyle.OUTLINE, FlxColor.BLACK);
				scoreTxt.scrollFactor.set();
				scoreTxt.antialiasing = ClientPrefs.globalAntialiasing;
				scoreTxt.borderSize = 1.25;
				scoreTxt.visible = !ClientPrefs.hideHud;
				add(scoreTxt);
			case "Sacorg HUD":
				remove(scoreTxt);
				remove(healthBarBG);

				scoreTxt = new FlxText(0, healthBarBG.y - 10, FlxG.width, "", 22);
				scoreTxt.setFormat(Paths.font("PhantomMuff_Full_Letters_1.1.5.ttf"), 22, FlxColor.WHITE, LEFT, FlxTextBorderStyle.OUTLINE, FlxColor.BLACK);
				scoreTxt.scrollFactor.set();
				scoreTxt.borderSize = 1.25;
				scoreTxt.antialiasing = ClientPrefs.globalAntialiasing;
				scoreTxt.visible = !ClientPrefs.hideHud;
				insert(members.indexOf(iconP3) + 1, scoreTxt);

				timeTxt.font = Paths.font("PhantomMuff_Full_Letters_1.1.5.ttf");

				healthBarOverlay = new FlxSprite(healthBar.x - 55, healthBar.y - 20).loadGraphic(Paths.image('coolhealthbar'));
				healthBarOverlay.cameras = [camHUD];
				healthBarOverlay.antialiasing = ClientPrefs.globalAntialiasing;
				insert(members.indexOf(healthBar) + 1, healthBarOverlay);
			case "Myth Engine HUD":
				remove(scoreTxt);
				remove(timeBar);

				scoreTxt = new FlxText(0, healthBarBG.y + 36, FlxG.width, "", 16);
				scoreTxt.setFormat(Paths.font("vcr.ttf"), 16, FlxColor.WHITE, CENTER, FlxTextBorderStyle.OUTLINE, FlxColor.BLACK);
				scoreTxt.scrollFactor.set();
				scoreTxt.borderSize = 1.25;
				scoreTxt.antialiasing = ClientPrefs.globalAntialiasing;
				scoreTxt.visible = !ClientPrefs.hideHud;
				insert(members.indexOf(iconP3) + 1, scoreTxt);
		}
	}

	#if (!flash && sys)
	public var runtimeShaders:Map<String, Array<String>> = new Map<String, Array<String>>();
	public function createRuntimeShader(name:String):FlxRuntimeShader
	{
		if(!ClientPrefs.shaders) return new FlxRuntimeShader();

		#if (!flash && MODS_ALLOWED && sys)
		if(!runtimeShaders.exists(name) && !initLuaShader(name))
		{
			FlxG.log.warn('Shader $name is missing!');
			return new FlxRuntimeShader();
		}

		var arr:Array<String> = runtimeShaders.get(name);
		return new FlxRuntimeShader(arr[0], arr[1]);
		#else
		FlxG.log.warn("Platform unsupported for Runtime Shaders!");
		return null;
		#end
	}

	public function changeBF2Char(newBF2:String, x:Float = 0, y:Float = 0)
	{
		remove(boyfriend2);
		boyfriend2 = new Boyfriend(x, y, newBF2);
		startCharacterPos(boyfriend2);
		boyfriendGroup.add(boyfriend2);
		boyfriend2.visible = false;
		startCharacterLua(boyfriend2.curCharacter);
		iconP3.changeIcon(boyfriend2.healthIcon);
	}

	public function initLuaShader(name:String, ?glslVersion:Int = 120)
	{
		if(!ClientPrefs.shaders) return false;

		if(runtimeShaders.exists(name))
		{
			FlxG.log.warn('Shader $name was already initialized!');
			return true;
		}

		var foldersToCheck:Array<String> = [Paths.mods('shaders/')];
		if(Paths.currentModDirectory != null && Paths.currentModDirectory.length > 0)
			foldersToCheck.insert(0, Paths.mods(Paths.currentModDirectory + '/shaders/'));

		for(mod in Paths.getGlobalMods())
			foldersToCheck.insert(0, Paths.mods(mod + '/shaders/'));
		
		for (folder in foldersToCheck)
		{
			if(FileSystem.exists(folder))
			{
				var frag:String = folder + name + '.frag';
				var vert:String = folder + name + '.vert';
				var found:Bool = false;
				if(FileSystem.exists(frag))
				{
					frag = File.getContent(frag);
					found = true;
				}
				else frag = null;

				if (FileSystem.exists(vert))
				{
					vert = File.getContent(vert);
					found = true;
				}
				else vert = null;

				if(found)
				{
					runtimeShaders.set(name, [frag, vert]);
					//trace('Found shader $name!');
					return true;
				}
			}
		}
		FlxG.log.warn('Missing shader $name .frag AND .vert files!');
		return false;
	}
	#end

	function set_songSpeed(value:Float):Float
	{
		if(generatedMusic)
		{
			var ratio:Float = value / songSpeed; //funny word huh
			for (note in notes) note.resizeByRatio(ratio);
			for (note in unspawnNotes) note.resizeByRatio(ratio);
		}
		songSpeed = value;
		noteKillOffset = 350 / songSpeed;
		return value;
	}

	function set_playbackRate(value:Float):Float
	{
		if(generatedMusic)
		{
			if(vocals != null) vocals.pitch = value;
			FlxG.sound.music.pitch = value;
		}
		playbackRate = value;
		FlxAnimationController.globalSpeed = value;
		trace('Anim speed: ' + FlxAnimationController.globalSpeed);
		Conductor.safeZoneOffset = (ClientPrefs.safeFrames / 60) * 1000 * value;
		setOnLuas('playbackRate', playbackRate);
		return value;
	}

	public function addTextToDebug(text:String, color:FlxColor) {
		#if LUA_ALLOWED
		luaDebugGroup.forEachAlive(function(spr:DebugLuaText) {
			spr.y += 20;
		});

		if(luaDebugGroup.members.length > 34) {
			var blah = luaDebugGroup.members[34];
			blah.destroy();
			luaDebugGroup.remove(blah);
		}
		luaDebugGroup.insert(0, new DebugLuaText(text, luaDebugGroup, color));
		#end
	}

	public function addText(text:String, color:FlxColor, size:Int) {
		#if LUA_ALLOWED
		coolTextGroup.forEachAlive(function(spr:CoolText) {
			spr.y += 60;
		});

		if(coolTextGroup.members.length > 10) {
			var blah = coolTextGroup.members[10];
			blah.destroy();
			coolTextGroup.remove(blah);
		}
		coolTextGroup.insert(0, new CoolText(text, coolTextGroup, color, size));
		#end
	}

	public function reloadHealthBarColors()
	{
		if (doNotChangeBar) {
			healthBar.createFilledBar(FlxColor.fromRGB(dad.healthColorArray[0], dad.healthColorArray[1], dad.healthColorArray[2]),
				FlxColor.fromRGB(boyfriend.healthColorArray[0], boyfriend.healthColorArray[1], boyfriend.healthColorArray[2]));
		}

		healthBar.updateBar();
	}
	public function reloadHealthBarGraphic(?prefix:String = '', ?suffix:String = '', ?offsetX:Float = 0, ?offsetY:Float = 0)
	{
		var path:String = prefix + 'healthBar' + suffix;
		var gamePath:String = Paths.getPath('images/$path.png', IMAGE);

		if (#if MODS_ALLOWED !FileSystem.exists(Paths.modsImages(path)) && #end !OpenFlAssets.exists(gamePath, IMAGE))
			path = 'healthBar';

		healthBarBG.loadGraphic(Paths.image(path));
		healthBarBG.offset.set(offsetX, offsetY);
	}
	public function reloadTimeBarGraphic(?prefix:String = '', ?suffix:String = '', ?offsetX:Float = 0, ?offsetY:Float = 0)
	{
		var path:String = prefix + 'timeBar' + suffix;
		var gamePath:String = Paths.getPath('images/$path.png', IMAGE);

		if (#if MODS_ALLOWED !FileSystem.exists(Paths.modsImages(path)) && #end !OpenFlAssets.exists(gamePath, IMAGE))
			path = 'timeBar';

		timeBarBG.loadGraphic(Paths.image(path));
		timeBarBG.offset.set(offsetX, offsetY);
	}
	public function reloadTimeBarColors()
	{
		if (SONG.song.toLowerCase() != "defeat")
		{
			if (doNotChangeColors)
			{
				if (ClientPrefs.gameHuds == "Myth Engine HUD")
				{
					timeBar.alpha = 0.0001;
				}
				else
				{
					timeBar.createFilledBar(FlxColor.fromRGB(30, 30, 30),
						FlxColor.fromRGB(dad.healthColorArray[0], dad.healthColorArray[1], dad.healthColorArray[2]));
				}

			}
		}
		else
		{
			timeBar.createFilledBar(0xFF000000, FlxColor.RED);
		}

		timeBar.updateBar();
	}

	public function addCharacterToList(newCharacter:String, type:Int) {
		switch(type) {
			case 0:
				if(!boyfriendMap.exists(newCharacter)) {
					var newBoyfriend:Boyfriend = new Boyfriend(0, 0, newCharacter);
					boyfriendMap.set(newCharacter, newBoyfriend);
					boyfriendGroup.insert(3, newBoyfriend);
					startCharacterPos(newBoyfriend);
					newBoyfriend.alpha = 0.00001;
					startCharacterLua(newBoyfriend.curCharacter);
				}

			case 1:
				if(!dadMap.exists(newCharacter)) {
					var newDad:Character = new Character(0, 0, newCharacter);
					dadMap.set(newCharacter, newDad);
					dadGroup.insert(2, newDad);
					startCharacterPos(newDad, true);
					newDad.alpha = 0.00001;
					startCharacterLua(newDad.curCharacter);
				}

			case 2:
				if(gf != null && !gfMap.exists(newCharacter)) {
					var newGf:Character = new Character(0, 0, newCharacter);
					newGf.scrollFactor.set(0.95, 0.95);
					gfMap.set(newCharacter, newGf);
					gfGroup.insert(1, newGf);
					startCharacterPos(newGf);
					newGf.alpha = 0.00001;
					startCharacterLua(newGf.curCharacter);
				}
			case 3:
				if (boyfriend2 != null) {
					if(!boyfriend2Map.exists(newCharacter)) {
						var newBoyfriend:Boyfriend = new Boyfriend(0, 0, newCharacter);
						boyfriend2Map.set(newCharacter, newBoyfriend);
						boyfriendGroup.insert(4, newBoyfriend);
						startCharacterPos(newBoyfriend);
						newBoyfriend.alpha = 0.00001;
						startCharacterLua(newBoyfriend.curCharacter);
					}
				}
		}
	}

	function startCharacterLua(name:String)
	{
		#if LUA_ALLOWED
		var doPush:Bool = false;
		var luaFile:String = 'characters/' + name + '.lua';
		#if MODS_ALLOWED
		if(FileSystem.exists(Paths.modFolders(luaFile))) {
			luaFile = Paths.modFolders(luaFile);
			doPush = true;
		} else {
			luaFile = Paths.getPreloadPath(luaFile);
			if(FileSystem.exists(luaFile)) {
				doPush = true;
			}
		}
		#else
		luaFile = Paths.getPreloadPath(luaFile);
		if(Assets.exists(luaFile)) {
			doPush = true;
		}
		#end

		if(doPush)
		{
			for (script in luaArray)
			{
				if(script.scriptName == luaFile) return;
			}
			luaArray.push(new FunkinLua(luaFile));
		}
		#end
	}

	public function getLuaObject(tag:String, text:Bool=true):FlxSprite {
		if(modchartSprites.exists(tag)) return modchartSprites.get(tag);
		if(text && modchartTexts.exists(tag)) return modchartTexts.get(tag);
		if(variables.exists(tag)) return variables.get(tag);
		return null;
	}

	function startCharacterPos(char:Character, ?gfCheck:Bool = false) {
		if(gfCheck && char.curCharacter.startsWith('gf')) { //IF DAD IS GIRLFRIEND, HE GOES TO HER POSITION
			char.setPosition(GF_X, GF_Y);
			char.scrollFactor.set(0.95, 0.95);
			char.danceEveryNumBeats = 2;
		}
		char.x += char.positionArray[0];
		char.y += char.positionArray[1];
	}

	public function startVideo(name:String)
	{
		#if VIDEOS_ALLOWED
		inCutscene = true;

		var filepath:String = Paths.video(name);
		#if sys
		if(!FileSystem.exists(filepath))
		#else
		if(!OpenFlAssets.exists(filepath))
		#end
		{
			FlxG.log.warn('Couldnt find video file: ' + name);
			startAndEnd();
			return;
		}

		var video:MP4Handler = new MP4Handler();
		video.playVideo(filepath);
		video.finishCallback = function()
		{
			startAndEnd();
			return;
		}
		#else
		FlxG.log.warn('Platform not supported!');
		startAndEnd();
		return;
		#end
	}

	function startAndEnd()
	{
		if(endingSong)
			endSong();
		else
			startCountdown();
	}

	var dialogueCount:Int = 0;
	public var psychDialogue:DialogueBoxPsych;
	//You don't have to add a song, just saying. You can just do "1(dialogueJson);" and it should work
	public function startDialogue(dialogueFile:DialogueFile, ?song:String = null):Void
	{
		// TO DO: Make this more flexible, maybe?
		if(psychDialogue != null) return;

		if(dialogueFile.dialogue.length > 0) {
			inCutscene = true;
			precacheList.set('dialogue', 'sound');
			precacheList.set('dialogueClose', 'sound');
			psychDialogue = new DialogueBoxPsych(dialogueFile, song);
			psychDialogue.scrollFactor.set();
			if(endingSong) {
				psychDialogue.finishThing = function()
				{
					psychDialogue = null;
					endSong();
				}
			}
			else
			{
				psychDialogue.finishThing = function()
				{
					psychDialogue = null;
					startCountdown();
				}
			}
			psychDialogue.nextDialogueThing = startNextDialogue;
			psychDialogue.skipDialogueThing = skipDialogue;
			psychDialogue.cameras = [camHUD];
			add(psychDialogue);
		} else {
			FlxG.log.warn('Your dialogue file is badly formatted!');
			if(endingSong) {
				endSong();
			} else {
				startCountdown();
			}
		}
	}

	function schoolIntro(?dialogueBox:DialogueBox):Void
	{
		inCutscene = true;
		var black:FlxSprite = new FlxSprite(-100, -100).makeGraphic(FlxG.width * 2, FlxG.height * 2, FlxColor.BLACK);
		black.scrollFactor.set();
		add(black);

		var red:FlxSprite = new FlxSprite(-100, -100).makeGraphic(FlxG.width * 2, FlxG.height * 2, 0xFFff1b31);
		red.scrollFactor.set();

		var senpaiEvil:FlxSprite = new FlxSprite();
		senpaiEvil.frames = Paths.getSparrowAtlas('weeb/senpaiCrazy');
		senpaiEvil.animation.addByPrefix('idle', 'Senpai Pre Explosion', 24, false);
		senpaiEvil.setGraphicSize(Std.int(senpaiEvil.width * 6));
		senpaiEvil.scrollFactor.set();
		senpaiEvil.updateHitbox();
		senpaiEvil.screenCenter();
		senpaiEvil.x += 300;

		var songName:String = Paths.formatToSongPath(SONG.song);
		if (songName == 'roses' || songName == 'thorns')
		{
			remove(black);

			if (songName == 'thorns')
			{
				add(red);
				camHUD.visible = false;
			}
		}

		new FlxTimer().start(0.3, function(tmr:FlxTimer)
		{
			black.alpha -= 0.15;

			if (black.alpha > 0)
			{
				tmr.reset(0.3);
			}
			else
			{
				if (dialogueBox != null)
				{
					if (Paths.formatToSongPath(SONG.song) == 'thorns')
					{
						add(senpaiEvil);
						senpaiEvil.alpha = 0;
						new FlxTimer().start(0.3, function(swagTimer:FlxTimer)
						{
							senpaiEvil.alpha += 0.15;
							if (senpaiEvil.alpha < 1)
							{
								swagTimer.reset();
							}
							else
							{
								senpaiEvil.animation.play('idle');
								FlxG.sound.play(Paths.sound('Senpai_Dies'), 1, false, null, true, function()
								{
									remove(senpaiEvil);
									remove(red);
									FlxG.camera.fade(FlxColor.WHITE, 0.01, true, function()
									{
										add(dialogueBox);
										camHUD.visible = true;
									}, true);
								});
								new FlxTimer().start(3.2, function(deadTime:FlxTimer)
								{
									FlxG.camera.fade(FlxColor.WHITE, 1.6, false);
								});
							}
						});
					}
					else
					{
						add(dialogueBox);
					}
				}
				else
					startCountdown();

				remove(black);
			}
		});
	}

	function tankIntro()
	{
		var cutsceneHandler:CutsceneHandler = new CutsceneHandler();

		var songName:String = Paths.formatToSongPath(SONG.song);
		dadGroup.alpha = 0.00001;
		camHUD.visible = false;
		//inCutscene = true; //this would stop the camera movement, oops

		var tankman:FlxSprite = new FlxSprite(-20, 320);
		tankman.frames = Paths.getSparrowAtlas('cutscenes/' + songName);
		tankman.antialiasing = ClientPrefs.globalAntialiasing;
		addBehindDad(tankman);
		cutsceneHandler.push(tankman);

		var tankman2:FlxSprite = new FlxSprite(16, 312);
		tankman2.antialiasing = ClientPrefs.globalAntialiasing;
		tankman2.alpha = 0.000001;
		cutsceneHandler.push(tankman2);
		var gfDance:FlxSprite = new FlxSprite(gf.x - 107, gf.y + 140);
		gfDance.antialiasing = ClientPrefs.globalAntialiasing;
		cutsceneHandler.push(gfDance);
		var gfCutscene:FlxSprite = new FlxSprite(gf.x - 104, gf.y + 122);
		gfCutscene.antialiasing = ClientPrefs.globalAntialiasing;
		cutsceneHandler.push(gfCutscene);
		var picoCutscene:FlxSprite = new FlxSprite(gf.x - 849, gf.y - 264);
		picoCutscene.antialiasing = ClientPrefs.globalAntialiasing;
		cutsceneHandler.push(picoCutscene);
		var boyfriendCutscene:FlxSprite = new FlxSprite(boyfriend.x + 5, boyfriend.y + 20);
		boyfriendCutscene.antialiasing = ClientPrefs.globalAntialiasing;
		cutsceneHandler.push(boyfriendCutscene);

		cutsceneHandler.finishCallback = function()
		{
			var timeForStuff:Float = Conductor.crochet / 1000 * 4.5;
			FlxG.sound.music.fadeOut(timeForStuff);
			FlxTween.tween(FlxG.camera, {zoom: defaultCamZoom}, timeForStuff, {ease: FlxEase.quadInOut});
			moveCamera(true);
			startCountdown();

			dadGroup.alpha = 1;
			camHUD.visible = true;
			boyfriend.animation.finishCallback = null;
			gf.animation.finishCallback = null;
			gf.dance();
		};

		camFollow.set(dad.x + 280, dad.y + 170);
		switch(songName)
		{
			case 'ugh':
				cutsceneHandler.endTime = 12;
				cutsceneHandler.music = 'DISTORTO';
				precacheList.set('wellWellWell', 'sound');
				precacheList.set('killYou', 'sound');
				precacheList.set('bfBeep', 'sound');

				var wellWellWell:FlxSound = new FlxSound().loadEmbedded(Paths.sound('wellWellWell'));
				FlxG.sound.list.add(wellWellWell);

				tankman.animation.addByPrefix('wellWell', 'TANK TALK 1 P1', 24, false);
				tankman.animation.addByPrefix('killYou', 'TANK TALK 1 P2', 24, false);
				tankman.animation.play('wellWell', true);
				FlxG.camera.zoom *= 1.2;

				// Well well well, what do we got here?
				cutsceneHandler.timer(0.1, function()
				{
					wellWellWell.play(true);
				});

				// Move camera to BF
				cutsceneHandler.timer(3, function()
				{
					camFollow.x += 750;
					camFollow.y += 100;
				});

				// Beep!
				cutsceneHandler.timer(4.5, function()
				{
					boyfriend.playAnim('singUP', true);
					boyfriend.specialAnim = true;
					FlxG.sound.play(Paths.sound('bfBeep'));
				});

				// Move camera to Tankman
				cutsceneHandler.timer(6, function()
				{
					camFollow.x -= 750;
					camFollow.y -= 100;

					// We should just kill you but... what the hell, it's been a boring day... let's see what you've got!
					tankman.animation.play('killYou', true);
					FlxG.sound.play(Paths.sound('killYou'));
				});

			case 'guns':
				cutsceneHandler.endTime = 11.5;
				cutsceneHandler.music = 'DISTORTO';
				tankman.x += 40;
				tankman.y += 10;
				precacheList.set('tankSong2', 'sound');

				var tightBars:FlxSound = new FlxSound().loadEmbedded(Paths.sound('tankSong2'));
				FlxG.sound.list.add(tightBars);

				tankman.animation.addByPrefix('tightBars', 'TANK TALK 2', 24, false);
				tankman.animation.play('tightBars', true);
				boyfriend.animation.curAnim.finish();

				cutsceneHandler.onStart = function()
				{
					tightBars.play(true);
					FlxTween.tween(FlxG.camera, {zoom: defaultCamZoom * 1.2}, 4, {ease: FlxEase.quadInOut});
					FlxTween.tween(FlxG.camera, {zoom: defaultCamZoom * 1.2 * 1.2}, 0.5, {ease: FlxEase.quadInOut, startDelay: 4});
					FlxTween.tween(FlxG.camera, {zoom: defaultCamZoom * 1.2}, 1, {ease: FlxEase.quadInOut, startDelay: 4.5});
				};

				cutsceneHandler.timer(4, function()
				{
					gf.playAnim('sad', true);
					gf.animation.finishCallback = function(name:String)
					{
						gf.playAnim('sad', true);
					};
				});

			case 'stress':
				cutsceneHandler.endTime = 35.5;
				tankman.x -= 54;
				tankman.y -= 14;
				gfGroup.alpha = 0.00001;
				boyfriendGroup.alpha = 0.00001;
				camFollow.set(dad.x + 400, dad.y + 170);
				FlxTween.tween(FlxG.camera, {zoom: 0.9 * 1.2}, 1, {ease: FlxEase.quadInOut});
				foregroundSprites.forEach(function(spr:BGSprite)
				{
					spr.y += 100;
				});
				precacheList.set('stressCutscene', 'sound');

				tankman2.frames = Paths.getSparrowAtlas('cutscenes/stress2');
				addBehindDad(tankman2);

				if (!ClientPrefs.lowQuality)
				{
					gfDance.frames = Paths.getSparrowAtlas('characters/gfTankmen');
					gfDance.animation.addByPrefix('dance', 'GF Dancing at Gunpoint', 24, true);
					gfDance.animation.play('dance', true);
					addBehindGF(gfDance);
				}

				gfCutscene.frames = Paths.getSparrowAtlas('cutscenes/stressGF');
				gfCutscene.animation.addByPrefix('dieBitch', 'GF STARTS TO TURN PART 1', 24, false);
				gfCutscene.animation.addByPrefix('getRektLmao', 'GF STARTS TO TURN PART 2', 24, false);
				gfCutscene.animation.play('dieBitch', true);
				gfCutscene.animation.pause();
				addBehindGF(gfCutscene);
				if (!ClientPrefs.lowQuality)
				{
					gfCutscene.alpha = 0.00001;
				}

				picoCutscene.frames = AtlasFrameMaker.construct('cutscenes/stressPico');
				picoCutscene.animation.addByPrefix('anim', 'Pico Badass', 24, false);
				addBehindGF(picoCutscene);
				picoCutscene.alpha = 0.00001;

				boyfriendCutscene.frames = Paths.getSparrowAtlas('characters/BOYFRIEND');
				boyfriendCutscene.animation.addByPrefix('idle', 'BF idle dance', 24, false);
				boyfriendCutscene.animation.play('idle', true);
				boyfriendCutscene.animation.curAnim.finish();
				addBehindBF(boyfriendCutscene);

				var cutsceneSnd:FlxSound = new FlxSound().loadEmbedded(Paths.sound('stressCutscene'));
				FlxG.sound.list.add(cutsceneSnd);

				tankman.animation.addByPrefix('godEffingDamnIt', 'TANK TALK 3', 24, false);
				tankman.animation.play('godEffingDamnIt', true);

				var calledTimes:Int = 0;
				var zoomBack:Void->Void = function()
				{
					var camPosX:Float = 630;
					var camPosY:Float = 425;
					camFollow.set(camPosX, camPosY);
					camFollowPos.setPosition(camPosX, camPosY);
					FlxG.camera.zoom = 0.8;
					cameraSpeed = 1;

					calledTimes++;
					if (calledTimes > 1)
					{
						foregroundSprites.forEach(function(spr:BGSprite)
						{
							spr.y -= 100;
						});
					}
				}

				cutsceneHandler.onStart = function()
				{
					cutsceneSnd.play(true);
				};

				cutsceneHandler.timer(15.2, function()
				{
					FlxTween.tween(camFollow, {x: 650, y: 300}, 1, {ease: FlxEase.sineOut});
					FlxTween.tween(FlxG.camera, {zoom: 0.9 * 1.2 * 1.2}, 2.25, {ease: FlxEase.quadInOut});

					gfDance.visible = false;
					gfCutscene.alpha = 1;
					gfCutscene.animation.play('dieBitch', true);
					gfCutscene.animation.finishCallback = function(name:String)
					{
						if(name == 'dieBitch') //Next part
						{
							gfCutscene.animation.play('getRektLmao', true);
							gfCutscene.offset.set(224, 445);
						}
						else
						{
							gfCutscene.visible = false;
							picoCutscene.alpha = 1;
							picoCutscene.animation.play('anim', true);

							boyfriendGroup.alpha = 1;
							boyfriendCutscene.visible = false;
							boyfriend.playAnim('bfCatch', true);
							boyfriend.animation.finishCallback = function(name:String)
							{
								if(name != 'idle')
								{
									boyfriend.playAnim('idle', true);
									boyfriend.animation.curAnim.finish(); //Instantly goes to last frame
								}
							};

							picoCutscene.animation.finishCallback = function(name:String)
							{
								picoCutscene.visible = false;
								gfGroup.alpha = 1;
								picoCutscene.animation.finishCallback = null;
							};
							gfCutscene.animation.finishCallback = null;
						}
					};
				});

				cutsceneHandler.timer(17.5, function()
				{
					zoomBack();
				});

				cutsceneHandler.timer(19.5, function()
				{
					tankman2.animation.addByPrefix('lookWhoItIs', 'TANK TALK 3', 24, false);
					tankman2.animation.play('lookWhoItIs', true);
					tankman2.alpha = 1;
					tankman.visible = false;
				});

				cutsceneHandler.timer(20, function()
				{
					camFollow.set(dad.x + 500, dad.y + 170);
				});

				cutsceneHandler.timer(31.2, function()
				{
					boyfriend.playAnim('singUPmiss', true);
					boyfriend.animation.finishCallback = function(name:String)
					{
						if (name == 'singUPmiss')
						{
							boyfriend.playAnim('idle', true);
							boyfriend.animation.curAnim.finish(); //Instantly goes to last frame
						}
					};

					camFollow.set(boyfriend.x + 280, boyfriend.y + 200);
					cameraSpeed = 12;
					FlxTween.tween(FlxG.camera, {zoom: 0.9 * 1.2 * 1.2}, 0.25, {ease: FlxEase.elasticOut});
				});

				cutsceneHandler.timer(32.2, function()
				{
					zoomBack();
				});
		}
	}

	var startTimer:FlxTimer;
	var finishTimer:FlxTimer = null;

	// For being able to mess with the sprites on Lua
	public var countdownReady:FlxSprite;
	public var countdownSet:FlxSprite;
	public var countdownGo:FlxSprite;
	public static var startOnTime:Float = 0;

	function cacheCountdown()
	{
		var introAssets:Map<String, Array<String>> = new Map<String, Array<String>>();
		introAssets.set('default', ['ready', 'set', 'go']);
		introAssets.set('pixel', ['pixelUI/ready-pixel', 'pixelUI/set-pixel', 'pixelUI/date-pixel']);

		var introAlts:Array<String> = introAssets.get('default');
		if (isPixelStage) introAlts = introAssets.get('pixel');
		
		for (asset in introAlts)
			Paths.image(asset);
		
		Paths.sound('intro3' + introSoundsSuffix);
		Paths.sound('intro2' + introSoundsSuffix);
		Paths.sound('intro1' + introSoundsSuffix);
		Paths.sound('introGo' + introSoundsSuffix);
	}

	public function startCountdown():Void
	{
		if(startedCountdown) {
			callOnLuas('onStartCountdown', []);
			return;
		}

		inCutscene = false;
		var ret:Dynamic = callOnLuas('onStartCountdown', [], false);
		if(ret != FunkinLua.Function_Stop) {
			if (skipCountdown || startOnTime > 0) skipArrowStartTween = true;

			generateStaticArrows(0);
			generateStaticArrows(1);

			if (script != null)
			{
				script.executeFunc("onStartCountdown");
			}

			for (i in 0...playerStrums.length) {
				setOnLuas('defaultPlayerStrumX' + i, playerStrums.members[i].x);
				setOnLuas('defaultPlayerStrumY' + i, playerStrums.members[i].y);
			}
			for (i in 0...opponentStrums.length) {
				setOnLuas('defaultOpponentStrumX' + i, opponentStrums.members[i].x);
				setOnLuas('defaultOpponentStrumY' + i, opponentStrums.members[i].y);
				//if(ClientPrefs.middleScroll) opponentStrums.members[i].visible = false;
			}

			laneunderlay.x = playerStrums.members[0].x - 25;
			laneunderlay.screenCenter(Y);

			startedCountdown = true;
			Conductor.songPosition = 0;
			Conductor.songPosition -= Conductor.crochet * 5;
			setOnLuas('startedCountdown', true);
			callOnLuas('onCountdownStarted', []);

			var swagCounter:Int = 0;


			if(startOnTime < 0) startOnTime = 0;

			if (startOnTime > 0) {
				clearNotesBefore(startOnTime);
				setSongTime(startOnTime - 350);
				return;
			}
			else if (skipCountdown)
			{
				setSongTime(0);
				return;
			}

			startTimer = new FlxTimer().start(Conductor.crochet / 1000 / playbackRate, function(tmr:FlxTimer)
			{
				if (gf != null && tmr.loopsLeft % Math.round(gfSpeed * gf.danceEveryNumBeats) == 0 && gf.animation.curAnim != null && !gf.animation.curAnim.name.startsWith("sing") && !gf.stunned)
				{
					gf.dance();
				}
				if (tmr.loopsLeft % boyfriend.danceEveryNumBeats == 0 && boyfriend.animation.curAnim != null && !boyfriend.animation.curAnim.name.startsWith('sing') && !boyfriend.stunned)
				{
					boyfriend.dance();
				}
				if (tmr.loopsLeft % dad.danceEveryNumBeats == 0 && dad.animation.curAnim != null && !dad.animation.curAnim.name.startsWith('sing') && !dad.stunned)
				{
					dad.dance();
				}
				if (tmr.loopsLeft % boyfriend2.danceEveryNumBeats == 0 && boyfriend2.animation.curAnim != null && !boyfriend2.animation.curAnim.name.startsWith('sing') && !boyfriend2.stunned)
				{
					boyfriend2.dance();
				}

				var introAssets:Map<String, Array<String>> = new Map<String, Array<String>>();
				introAssets.set('default', ['ready', 'set', 'go']);
				introAssets.set('pixel', ['pixelUI/ready-pixel', 'pixelUI/set-pixel', 'pixelUI/date-pixel']);

				var introAlts:Array<String> = introAssets.get('default');
				var antialias:Bool = ClientPrefs.globalAntialiasing;
				if(isPixelStage) {
					introAlts = introAssets.get('pixel');
					antialias = false;
				}

				// head bopping for bg characters on Mall
				if(curStage == 'mall') {
					if(!ClientPrefs.lowQuality)
						upperBoppers.dance(true);

					bottomBoppers.dance(true);
					santa.dance(true);
				}

				if(curStage == 'super-idol' && !ClientPrefs.lowQuality) {
					artists.dance(true);
				}

				switch (swagCounter)
				{
					case 0:
						FlxG.sound.play(Paths.sound('intro3' + introSoundsSuffix), 0.6);
					case 1:
						countdownReady = new FlxSprite().loadGraphic(Paths.image(introAlts[0]));
						countdownReady.cameras = [camHUD];
						countdownReady.scrollFactor.set();
						countdownReady.updateHitbox();

						if (PlayState.isPixelStage)
							countdownReady.setGraphicSize(Std.int(countdownReady.width * daPixelZoom));

						countdownReady.screenCenter();
						countdownReady.antialiasing = antialias;
						insert(members.indexOf(notes), countdownReady);
						FlxTween.tween(countdownReady, {/*y: countdownReady.y + 100,*/ alpha: 0}, Conductor.crochet / 1000, {
							ease: FlxEase.cubeInOut,
							onComplete: function(twn:FlxTween)
							{
								remove(countdownReady);
								countdownReady.destroy();
							}
						});
						FlxG.sound.play(Paths.sound('intro2' + introSoundsSuffix), 0.6);
					case 2:
						countdownSet = new FlxSprite().loadGraphic(Paths.image(introAlts[1]));
						countdownSet.cameras = [camHUD];
						countdownSet.scrollFactor.set();

						if (PlayState.isPixelStage)
							countdownSet.setGraphicSize(Std.int(countdownSet.width * daPixelZoom));

						countdownSet.screenCenter();
						countdownSet.antialiasing = antialias;
						insert(members.indexOf(notes), countdownSet);
						FlxTween.tween(countdownSet, {/*y: countdownSet.y + 100,*/ alpha: 0}, Conductor.crochet / 1000, {
							ease: FlxEase.cubeInOut,
							onComplete: function(twn:FlxTween)
							{
								remove(countdownSet);
								countdownSet.destroy();
							}
						});
						FlxG.sound.play(Paths.sound('intro1' + introSoundsSuffix), 0.6);
					case 3:
						countdownGo = new FlxSprite().loadGraphic(Paths.image(introAlts[2]));
						countdownGo.cameras = [camHUD];
						countdownGo.scrollFactor.set();

						if (PlayState.isPixelStage)
							countdownGo.setGraphicSize(Std.int(countdownGo.width * daPixelZoom));

						countdownGo.updateHitbox();

						countdownGo.screenCenter();
						countdownGo.antialiasing = antialias;
						insert(members.indexOf(notes), countdownGo);
						FlxTween.tween(countdownGo, {/*y: countdownGo.y + 100,*/ alpha: 0}, Conductor.crochet / 1000, {
							ease: FlxEase.cubeInOut,
							onComplete: function(twn:FlxTween)
							{
								remove(countdownGo);
								countdownGo.destroy();
							}
						});
						FlxG.sound.play(Paths.sound('introGo' + introSoundsSuffix), 0.6);
					case 4:
				}

				notes.forEachAlive(function(note:Note) {
					if(ClientPrefs.opponentStrums || note.mustPress)
					{
						note.copyAlpha = false;
						note.alpha = note.multAlpha;
						if(ClientPrefs.middleScroll && !note.mustPress) {
							note.alpha *= 0.35;
						}
					}
				});
				callOnLuas('onCountdownTick', [swagCounter]);

				swagCounter += 1;
				// generateSong('fresh');

				FlxTween.tween(laneunderlay, {alpha: 0.5}, 0.5, {ease: FlxEase.quadOut});
			}, 5);
		}
	}

	public function startCountdownWithNoExtraStuff():Void
	{
		if(startedCountdown) {
			callOnLuas('startCountdownWithNoExtraStuff', []);
			return;
		}

		inCutscene = false;
		var ret:Dynamic = callOnLuas('startCountdownWithNoExtraStuff', [], false);
		if(ret != FunkinLua.Function_Stop) {
			if (script != null)
			{
				script.executeFunc("startCountdownWithNoExtraStuff");
			}

			var swagCounter:Int = 0;

			startTimer = new FlxTimer().start(Conductor.crochet / 1000 / playbackRate, function(tmr:FlxTimer)
			{
				var introAssets:Map<String, Array<String>> = new Map<String, Array<String>>();
				introAssets.set('default', ['ready', 'set', 'go']);
				introAssets.set('pixel', ['pixelUI/ready-pixel', 'pixelUI/set-pixel', 'pixelUI/date-pixel']);

				var introAlts:Array<String> = introAssets.get('default');
				var antialias:Bool = ClientPrefs.globalAntialiasing;
				if(isPixelStage) {
					introAlts = introAssets.get('pixel');
					antialias = false;
				}

				switch (swagCounter)
				{
					case 0:
						FlxG.sound.play(Paths.sound('intro3' + introSoundsSuffix), 0.6);
					case 1:
						countdownReady = new FlxSprite().loadGraphic(Paths.image(introAlts[0]));
						countdownReady.cameras = [camHUD];
						countdownReady.scrollFactor.set();
						countdownReady.updateHitbox();

						if (PlayState.isPixelStage)
							countdownReady.setGraphicSize(Std.int(countdownReady.width * daPixelZoom));

						countdownReady.screenCenter();
						countdownReady.antialiasing = antialias;
						insert(members.indexOf(notes), countdownReady);
						FlxTween.tween(countdownReady, {/*y: countdownReady.y + 100,*/ alpha: 0}, Conductor.crochet / 1000, {
							ease: FlxEase.cubeInOut,
							onComplete: function(twn:FlxTween)
							{
								remove(countdownReady);
								countdownReady.destroy();
							}
						});
						FlxG.sound.play(Paths.sound('intro2' + introSoundsSuffix), 0.6);
					case 2:
						countdownSet = new FlxSprite().loadGraphic(Paths.image(introAlts[1]));
						countdownSet.cameras = [camHUD];
						countdownSet.scrollFactor.set();

						if (PlayState.isPixelStage)
							countdownSet.setGraphicSize(Std.int(countdownSet.width * daPixelZoom));

						countdownSet.screenCenter();
						countdownSet.antialiasing = antialias;
						insert(members.indexOf(notes), countdownSet);
						FlxTween.tween(countdownSet, {/*y: countdownSet.y + 100,*/ alpha: 0}, Conductor.crochet / 1000, {
							ease: FlxEase.cubeInOut,
							onComplete: function(twn:FlxTween)
							{
								remove(countdownSet);
								countdownSet.destroy();
							}
						});
						FlxG.sound.play(Paths.sound('intro1' + introSoundsSuffix), 0.6);
					case 3:
						countdownGo = new FlxSprite().loadGraphic(Paths.image(introAlts[2]));
						countdownGo.cameras = [camHUD];
						countdownGo.scrollFactor.set();

						if (PlayState.isPixelStage)
							countdownGo.setGraphicSize(Std.int(countdownGo.width * daPixelZoom));

						countdownGo.updateHitbox();

						countdownGo.screenCenter();
						countdownGo.antialiasing = antialias;
						insert(members.indexOf(notes), countdownGo);
						FlxTween.tween(countdownGo, {/*y: countdownGo.y + 100,*/ alpha: 0}, Conductor.crochet / 1000, {
							ease: FlxEase.cubeInOut,
							onComplete: function(twn:FlxTween)
							{
								remove(countdownGo);
								countdownGo.destroy();
							}
						});
						FlxG.sound.play(Paths.sound('introGo' + introSoundsSuffix), 0.6);
					case 4:
				}

				callOnLuas('startCountdownWithNoExtraStuffTick', [swagCounter]);

				swagCounter += 1;
			}, 5);
		}
	}	

	public function addBehindGF(obj:FlxObject)
	{
		insert(members.indexOf(gfGroup), obj);
	}
	public function addBehindBF(obj:FlxObject)
	{
		insert(members.indexOf(boyfriendGroup), obj);
	}
	public function addBehindDad(obj:FlxObject)
	{
		insert(members.indexOf(dadGroup), obj);
	}

	public function clearNotesBefore(time:Float)
	{
		var i:Int = unspawnNotes.length - 1;
		while (i >= 0) {
			var daNote:Note = unspawnNotes[i];
			if(daNote.strumTime - 350 < time)
			{
				daNote.active = false;
				daNote.visible = false;
				daNote.ignoreNote = true;

				daNote.kill();
				unspawnNotes.remove(daNote);
				daNote.destroy();
			}
			--i;
		}

		i = notes.length - 1;
		while (i >= 0) {
			var daNote:Note = notes.members[i];
			if(daNote.strumTime - 350 < time)
			{
				daNote.active = false;
				daNote.visible = false;
				daNote.ignoreNote = true;

				daNote.kill();
				notes.remove(daNote, true);
				daNote.destroy();
			}
			--i;
		}
	}

	public var convertedAccDisplay:String;

	public function updateScore(miss:Bool = false, noKicking:Bool = false)
	{
		convertedAccDisplay = Std.string(Highscore.floorDecimal(ratingPercent * 100, 2));

		for (i in 0...convertedAccDisplay.length)
		{
			if (convertedAccDisplay.charAt(i) == '.')
			{
				if (convertedAccDisplay.charAt(i + 2) == '')
				{
					convertedAccDisplay += '0';
					break;
				}
			}
		}

		switch (ClientPrefs.gameHuds)
		{
			case "New HUD":
				if (ratingName == "?")
				{
					scoreTxt.text = "Score: " + songScore + '\n' +
					"Misses: " + songMisses + '\n' + 
					"Accuracy: " + convertedAccDisplay + "%" + '\n' +
					"Rating: " + "?" + '\n' +
					"Rank: " + ratingName + '\n';
				}
				else
				{
					scoreTxt.text = "Score: " + songScore + '\n' +
					"Misses: " + songMisses + '\n' + 
					"Accuracy: " + convertedAccDisplay + "%" + '\n' +
					"Rating: " + ratingFC + '\n' +
					"Rank: " + ratingName + '\n';
				}
 			case "Vs Impostor HUD":
				if (ratingName == '?')
				{
					scoreTxt.text = 'Score: ' + songScore
					+ ' | Combo Breaks: ' + songMisses
					+ ' | Accuracy: ?';
				}
				else
				{
					scoreTxt.text = 'Score: ' + songScore
					+ ' | Combo Breaks: ' + songMisses
					+ ' | Accuracy: ' + convertedAccDisplay + '%' + (shits > 0 || songMisses > 0 ? '' : ratingString);
				}
			case "Sacorg HUD":
				scoreTxt.text = 'Score: ' + songScore
				+ '\nMisses: ' + songMisses
				+ '\nRating: ' + ratingName
				+ (ratingName != '?' ? ' (${Highscore.floorDecimal(ratingPercent * 100, 2)}%) - $ratingFC' : '');
			case "Myth Engine HUD":
				if (ratingName == "?" || ratingAward == "N/A")
				{
					scoreTxt.text = "NPS: " + nps + " (" + maxNps + ")"
					+ " | Score: " + songScore
					+ " | Misses:" + songMisses
					+ " | Rating: " + ratingName;
				}
				else
				{
					scoreTxt.text = "NPS: " + nps + " (" + maxNps + ")"
					+ " | Score: " + songScore
					+ " | Misses: " + songMisses
					+ " | Rating: " + ratingName + " (" + convertedAccDisplay + "%" + ")" +  " - " + "(" + ratingFC + ") " + ratingAward;
				}
			case "Blantados HUD":
				scoreTxt.text = "Score: " + songScore
				+ " | Misses: " + songMisses
				+ " | Rating: " + ratingName + " (" + convertedAccDisplay + "%" + ")" + " - " + (ratingName != "You Suck!" ? ratingFC : "?");
			default:
				if(ratingName == '?') 
				{
					scoreTxt.text = 'Score: ' + songScore 
					+ ' | Combo Breaks: ' + songMisses 
					+ ' | Accuracy: ?';
				}
				else
				{
					if (songMisses < 1)
					{
						scoreTxt.text = 'Score: ' + songScore 
						+ ' | Combo Breaks: ' + songMisses 
						+ ' | Accuracy: ' + convertedAccDisplay + '%' 
						+ ' | ' + ratingName + " [" + ratingFC + "]";
					}
					else
					{
						scoreTxt.text = 'Score: ' + songScore 
						+ ' | Combo Breaks: ' + songMisses 
						+ ' | Accuracy: ' + convertedAccDisplay + '%' 
						+ ' | ' + ratingName;
					}
				}
		}

		if(ClientPrefs.scoreZoom && !miss && !noKicking && ClientPrefs.gameHuds != "Blantados HUD")
		{
			if(scoreTxtTween != null) {
				scoreTxtTween.cancel();
			}
			scoreTxt.scale.x = 1.075;
			scoreTxt.scale.y = 1.075;
			scoreTxtTween = FlxTween.tween(scoreTxt.scale, {x: 1, y: 1}, 0.2, {
				onComplete: function(twn:FlxTween) {
					scoreTxtTween = null;
				}
			});
		}

		callOnLuas('onUpdateScore', [miss]);
		callOnLuas('onUpdateScore', [noKicking]);

		if (script != null) script.executeFunc("onUpdateScore");
	}

	public function setSongTime(time:Float)
	{
		if(time < 0) time = 0;

		FlxG.sound.music.pause();
		vocals.pause();

		FlxG.sound.music.time = time;
		FlxG.sound.music.pitch = playbackRate;
		FlxG.sound.music.play();

		if (Conductor.songPosition <= vocals.length)
		{
			vocals.time = time;
			vocals.pitch = playbackRate;
		}
		vocals.play();
		Conductor.songPosition = time;
		songTime = time;
	}

	function startNextDialogue()
	{
		dialogueCount++;
		callOnLuas('onNextDialogue', [dialogueCount]);
	}

	function skipDialogue()
	{
		callOnLuas('onSkipDialogue', [dialogueCount]);
	}

	var previousFrameTime:Int = 0;
	var lastReportedPlayheadPosition:Int = 0;
	var songTime:Float = 0;

	function doAllTheSongIntroStuff()
	{
		PlayState.instance.modchartTweens.set('MoveInOne', FlxTween.tween(jukeBoxTag, {x: 0}, 1, {ease: FlxEase.circInOut}));
        PlayState.instance.modchartTweens.set('MoveInTwo', FlxTween.tween(jukeBox, {x: 0}, 1, {ease: FlxEase.circInOut}));
        PlayState.instance.modchartTweens.set('MoveInThree', FlxTween.tween(jukeBoxText, {x: 0}, 1, {ease: FlxEase.circInOut}));
        PlayState.instance.modchartTweens.set('MoveInFour', FlxTween.tween(jukeBoxSubText, {x: 0}, 1, {ease: FlxEase.circInOut}));

        PlayState.instance.modchartTimers.set('JukeBoxWait', new FlxTimer().start(3, function(tmr:FlxTimer) {
			if(tmr.finished) {
				PlayState.instance.modchartTimers.remove('JukeBoxWait');
			}
            PlayState.instance.modchartTweens.set('MoveOutOne', FlxTween.tween(jukeBoxTag, {x: -450}, 1.5, {ease: FlxEase.circInOut}));
            PlayState.instance.modchartTweens.set('MoveOutTwo', FlxTween.tween(jukeBox, {x: -450}, 1.5, {ease: FlxEase.circInOut}));
            PlayState.instance.modchartTweens.set('MoveOutThree', FlxTween.tween(jukeBoxText, {x: -450}, 1.5, {ease: FlxEase.circInOut}));
            PlayState.instance.modchartTweens.set('MoveOutFour', FlxTween.tween(jukeBoxSubText, {x: -450}, 1.5, {ease: FlxEase.circInOut}));
		}, 1));
	}

	public function setupCountdownSprite(spr:String, graphicName:String, soundName:String)
	{
		var countdown:FlxSprite = Reflect.getProperty(PlayState.instance, spr);
		countdown.scrollFactor.set();
						
		if (graphicName.contains("-pixel")){
			countdown.setGraphicSize(Std.int(countdown.width * daPixelZoom));
		}
			
		countdown.cameras = [camHUD];
		countdown.updateHitbox();
		countdown.screenCenter();
		add(countdown);
		
		FlxTween.tween(countdown, {y: countdown.y + 25, alpha: 0}, Conductor.crochet / 1000, {
			ease: FlxEase.cubeInOut,
			onComplete: function(twn:FlxTween)
			{
				countdown.destroy();
			}
		});
		FlxG.sound.play((soundName != null ? soundName : Paths.sound("cancelMenu")), 0.6);
	}

	function startSong():Void
	{
		startingSong = false;

		previousFrameTime = FlxG.game.ticks;
		lastReportedPlayheadPosition = 0;

		FlxG.sound.playMusic(Paths.inst(PlayState.SONG.song), 1, false);
		FlxG.sound.music.pitch = playbackRate;
		FlxG.sound.music.onComplete = finishSong.bind();
		vocals.play();

		if(startOnTime > 0)
		{
			setSongTime(startOnTime - 500);
		}
		startOnTime = 0;

		if(paused) {
			//trace('Oopsie doopsie! Paused sound');
			FlxG.sound.music.pause();
			vocals.pause();
		}

		if (!paused)
		{
			doAllTheSongIntroStuff();
		}

		if (ClientPrefs.gameHuds == "New HUD")
		{
			if (!ClientPrefs.hideHud)
			{
				PlayState.instance.modchartTweens.set("ScoreInOne", FlxTween.tween(scoreTxt, {alpha: 1}, 0.2, {ease: FlxEase.linear}));
				PlayState.instance.modchartTweens.set("ScoreInTwo", FlxTween.tween(elapsedTxt, {alpha: 1}, 0.2, {ease: FlxEase.linear}));
				PlayState.instance.modchartTweens.set("ScoreInThree", FlxTween.tween(totalTxt, {alpha: 1}, 0.2, {ease: FlxEase.linear}));
				PlayState.instance.modchartTweens.set("ScoreInFour", FlxTween.tween(songTxt, {alpha: 1}, 0.2, {ease: FlxEase.linear}));
				PlayState.instance.modchartTweens.set("ScoreInFive", FlxTween.tween(judgementCounter, {alpha: 1}, 0.2, {ease: FlxEase.linear}));
			}
			else
			{
				PlayState.instance.modchartTweens.set("ScoreInTwo", FlxTween.tween(elapsedTxt, {alpha: 1}, 0.2, {ease: FlxEase.linear}));
				PlayState.instance.modchartTweens.set("ScoreInThree", FlxTween.tween(totalTxt, {alpha: 1}, 0.2, {ease: FlxEase.linear}));
				PlayState.instance.modchartTweens.set("ScoreInFour", FlxTween.tween(songTxt, {alpha: 1}, 0.2, {ease: FlxEase.linear}));
			}
		}

		// Song duration in a float, useful for the time left feature
		songLength = FlxG.sound.music.length;
		// songNameBarTweenIn = FlxTween.tween(songNameBar, {x: 0}, 1, {ease: FlxEase.expoIn});
		// songNameDisplayTweenIn = FlxTween.tween(songNameDisplay, {x: 0}, 1, {ease: FlxEase.expoIn});
		// iconShowTweenIn = FlxTween.tween(iconShow, {x: 1090}, 1, {ease: FlxEase.expoIn});
		FlxTween.tween(timeBar, {alpha: 1}, 0.5, {ease: FlxEase.circOut});
		if (ClientPrefs.gameHuds != "New HUD") FlxTween.tween(timeBarBG, {alpha: 1}, 0.5, {ease: FlxEase.circOut});
		FlxTween.tween(timeTxt, {alpha: 1}, 0.5, {ease: FlxEase.circOut});

		if (script != null)
		{
			script.executeFunc("onSongStart");
		}

		switch(curStage)
		{
			case 'tank':
				if(!ClientPrefs.lowQuality) tankWatchtower.dance();
				foregroundSprites.forEach(function(spr:BGSprite)
				{
					spr.dance();
				});
		}

		#if desktop
		// Updating Discord Rich Presence (with Time Left)
		DiscordClient.changePresence(detailsText, SONG.song + " (" + storyDifficultyText + ")", iconP2.getCharacter(), true, songLength);
		#end
		setOnLuas('songLength', songLength);
		callOnLuas('onSongStart', []);
	}

	var skinEvent:EventNote;
	var groupskindDAD:Array<EventNote> = [];
	var groupskindBOY:Array<EventNote> = [];
	function changenoteskin(strumtime:Float, type:Int = 0) 
	{
		var newdad:Character = dad;
		var newboy:Boyfriend = boyfriend;
		
		if (groupskindDAD.length > 0 && type == 1)	
		{
			if (groupskindDAD[1] != null)
			{
				if (groupskindDAD[0].strumTime < strumtime && groupskindDAD[1].strumTime > strumtime)
					newdad = dadMap.get(groupskindDAD[0].value2);
				if (groupskindDAD[1].strumTime < strumtime)
					groupskindDAD.shift();
			}
			else
			{
				if (groupskindDAD[0].strumTime < strumtime)
					newdad = dadMap.get(groupskindDAD[0].value2);
			}	
		}	
		else if (groupskindBOY.length > 0  && type == 0)	
		{		
			if (groupskindBOY[1] != null)
			{
				if (groupskindBOY[0].strumTime < strumtime && groupskindBOY[1].strumTime > strumtime)
					newboy = boyfriendMap.get(groupskindBOY[0].value2);
				if (groupskindBOY[1].strumTime < strumtime)
					groupskindBOY.shift();
			}
			else
			{
				if (groupskindBOY[0].strumTime < strumtime)
					newboy = boyfriendMap.get(groupskindBOY[0].value2);
			}
		}
		if (type == 1)
		{
			return newdad.noteSkin;
		}
		else
		{
			return newboy.noteSkin;
		}
		
	}

	var debugNum:Int = 0;
	private var noteTypeMap:Map<String, Bool> = new Map<String, Bool>();
	private var eventPushedMap:Map<String, Bool> = new Map<String, Bool>();
	private function generateSong(dataPath:String):Void
	{
		// FlxG.log.add(ChartParser.parse());
		songSpeedType = ClientPrefs.getGameplaySetting('scrolltype','multiplicative');

		switch(songSpeedType)
		{
			case "multiplicative":
				songSpeed = SONG.speed * ClientPrefs.getGameplaySetting('scrollspeed', 1);
			case "constant":
				songSpeed = ClientPrefs.getGameplaySetting('scrollspeed', 1);
		}

		var songData = SONG;
		Conductor.changeBPM(songData.bpm);

		curSong = songData.song;

		if (SONG.needsVoices)
			vocals = new FlxSound().loadEmbedded(Paths.voices(PlayState.SONG.song));
		else
			vocals = new FlxSound();

		vocals.pitch = playbackRate;
		FlxG.sound.list.add(vocals);
		FlxG.sound.list.add(new FlxSound().loadEmbedded(Paths.inst(PlayState.SONG.song)));

		ratingGroup = new FlxTypedGroup<FlxSprite>();
		scoreGroup = new FlxTypedSpriteGroup<FlxText>();
		scoreGroupSpr = new FlxTypedSpriteGroup<FlxSprite>();
		notes = new FlxTypedGroup<Note>();
		add(ratingGroup);
		add(notes);

		var noteData:Array<SwagSection>;

		// NEW SHIT
		noteData = songData.notes;

		var playerCounter:Int = 0;

		var daBeats:Int = 0; // Not exactly representative of 'daBeats' lol, just how much it has looped

		var songName:String = Paths.formatToSongPath(SONG.song);
		var file:String = Paths.json(songName + '/events');
		#if MODS_ALLOWED
		if (FileSystem.exists(Paths.modsJson(songName + '/events')) || FileSystem.exists(file)) {
		#else
		if (OpenFlAssets.exists(file)) {
		#end
			var eventsData:Array<Dynamic> = Song.loadFromJson('events', songName).events;
			for (event in eventsData) //Event Notes
			{
				for (i in 0...event[1].length)
				{
					var newEventNote:Array<Dynamic> = [event[0], event[1][i][0], event[1][i][1], event[1][i][2], event[1][i][3]];
					var subEvent:EventNote = {
						strumTime: newEventNote[0] + ClientPrefs.noteOffset,
						event: newEventNote[1],
						value1: newEventNote[2],
						value2: newEventNote[3],
						value3: newEventNote[4]
					};
					if (SONG.changeArrows) {
						if(newEventNote[1] == 'Change Character')
						{
							skinEvent = subEvent;
							switch (newEventNote[2].toLowerCase())
							{
								case 'dad' | 'opponent' | '0':
									groupskindDAD.push(skinEvent);
								case 'bf' | 'boyfriend' | '1':
									groupskindBOY.push(skinEvent);
							}
						}
					}
					subEvent.strumTime -= eventNoteEarlyTrigger(subEvent);
					eventNotes.push(subEvent);
					eventPushed(subEvent);
				}
			}
		}

		var suf:String = "";
		var stuff:Array<String> = [];

		if (FileSystem.exists(Paths.txt(SONG.song.toLowerCase()  + "/arrowSwitches" + suf))){
			stuff = CoolUtil.coolTextFile2(Paths.txt(SONG.song.toLowerCase()  + "/arrowSwitches" + suf));
		}

		for (section in noteData)
		{

			for (songNotes in section.sectionNotes)
			{
				var daStrumTime:Float = songNotes[0];
				var daNoteData:Int = Std.int(songNotes[1] % 4);

				var gottaHitNote:Bool = section.mustHitSection;

				if (songNotes[1] > 3)
				{
					gottaHitNote = !section.mustHitSection;
				}

				var oldNote:Note;
				if (unspawnNotes.length > 0)
					oldNote = unspawnNotes[Std.int(unspawnNotes.length - 1)];
				else
					oldNote = null;

				var otherDad:String = changenoteskin(daStrumTime, 1);
				var otherBoy:String = changenoteskin(daStrumTime, 0);
	
				if (SONG.changeArrows)
				{
					if (stuff != [])
					{
						for (i in 0...stuff.length)
						{
							var data:Array<String> = stuff[i].split(' ');

							if (daSection == Std.parseInt(data[0])){
								(data[2] == 'dad' ? otherDad = data[1] : otherBoy = data[1]);
							}

							if (data[1] == "normal")
								data[1] == "NOTE_assets";

							if (data[2] != "dad")
							{
								playerStrums.forEach(function(note:StrumNote) 
								{
									var sk = boyfriend.noteSkin;
									if (sk == "") sk = 'NOTE_assets';
									note.reloadNote(sk);
								});
							}
							if (data[2] == "dad")
							{
								opponentStrums.forEach(function(note:StrumNote)
								{
									var sk = dad.noteSkin;
									if (sk == "") sk = 'NOTE_assets';
									note.reloadNote(sk);
								});
							}
						}
					}
				}

				var swagNote:Note;
				if (SONG.changeArrows)
					swagNote = new Note(daStrumTime, daNoteData, oldNote, false, false, (gottaHitNote ? otherBoy : otherDad));
				else
					swagNote = new Note(daStrumTime, daNoteData, oldNote, false);

				swagNote.row = Conductor.secsToRow(daStrumTime);
				if(noteRows[gottaHitNote ? 0 : 1][swagNote.row] == null)
					noteRows[gottaHitNote ? 0 : 1][swagNote.row] = [];
				noteRows[gottaHitNote ? 0 : 1][swagNote.row].push(swagNote);

				swagNote.mustPress = gottaHitNote;
				swagNote.sustainLength = songNotes[2];
				swagNote.gfNote = (section.gfSection && (songNotes[1]<4));
				swagNote.boyfriend2play = (section.bf2Section && (songNotes[1]<4));
				swagNote.noteType = songNotes[3];
				swagNote.noteSection = daSection;
				if(!Std.isOfType(songNotes[3], String)) swagNote.noteType = editors.ChartingState.noteTypeList[songNotes[3]]; //Backward compatibility + compatibility with Week 7 charts

				swagNote.scrollFactor.set();

				var susLength:Float = swagNote.sustainLength;

				susLength = susLength / Conductor.stepCrochet;
				unspawnNotes.push(swagNote);

				var floorSus:Int = Math.floor(susLength);
				if(floorSus > 0) {
					for (susNote in 0...floorSus+1)
					{
						oldNote = unspawnNotes[Std.int(unspawnNotes.length - 1)];

						var sustainNote:Note;
						if (SONG.changeArrows)
							sustainNote = new Note(daStrumTime + (Conductor.stepCrochet * susNote) + (Conductor.stepCrochet / FlxMath.roundDecimal(songSpeed, 2)), daNoteData, oldNote, true, false, (gottaHitNote ? otherBoy : otherDad));
						else
							sustainNote = new Note(daStrumTime + (Conductor.stepCrochet * susNote) + (Conductor.stepCrochet / FlxMath.roundDecimal(songSpeed, 2)), daNoteData, oldNote, true);
						sustainNote.mustPress = gottaHitNote;
						sustainNote.gfNote = (section.gfSection && (songNotes[1]<4));
						sustainNote.boyfriend2play = (section.bf2Section && (songNotes[1]<4));
						sustainNote.noteType = swagNote.noteType;
						sustainNote.noteSection = daSection;
						sustainNote.scrollFactor.set();
						swagNote.tail.push(sustainNote);
						sustainNote.parent = swagNote;
						unspawnNotes.push(sustainNote);

						if (sustainNote.mustPress)
						{
							sustainNote.x += FlxG.width / 2; // general offset
						}
						else if(ClientPrefs.middleScroll)
						{
							sustainNote.x += 310;
							if(daNoteData > 1) //Up and Right
							{
								sustainNote.x += FlxG.width / 2 + 25;
							}
						}
					}
				}

				if (swagNote.mustPress)
				{
					swagNote.x += FlxG.width / 2; // general offset
				}
				else if(ClientPrefs.middleScroll)
				{
					swagNote.x += 310;
					if(daNoteData > 1) //Up and Right
					{
						swagNote.x += FlxG.width / 2 + 25;
					}
				}

				if(!noteTypeMap.exists(swagNote.noteType)) {
					noteTypeMap.set(swagNote.noteType, true);
				}
			}
			daSection += 1;
			daBeats += 1;
		}
		for (event in songData.events) //Event Notes
		{
			for (i in 0...event[1].length)
			{
				var newEventNote:Array<Dynamic> = [event[0], event[1][i][0], event[1][i][1], event[1][i][2], event[1][i][3]];
				var subEvent:EventNote = {
					strumTime: newEventNote[0] + ClientPrefs.noteOffset,
					event: newEventNote[1],
					value1: newEventNote[2],
					value2: newEventNote[3],
					value3: newEventNote[4]
				};
				subEvent.strumTime -= eventNoteEarlyTrigger(subEvent);
				eventNotes.push(subEvent);
				eventPushed(subEvent);
			}
		}

		// trace(unspawnNotes.length);
		// playerCounter += 1;

		unspawnNotes.sort(sortByShit);
		if(eventNotes.length > 1) { //No need to sort if there's a single one or none at all
			eventNotes.sort(sortByTime);
		}
		checkEventNote();
		generatedMusic = true;
	}

	function eventPushed(event:EventNote) {
		switch(event.event) {
			case 'Change Character':
				var charType:Int = 0;
				switch(event.value1.toLowerCase()) {
					case 'gf' | 'girlfriend' | '2':
						charType = 2;
					case 'dad' | 'opponent' | '0':
						charType = 1;
					case 'boyfriend2' | 'bf2' | '3':
						charType = 3;
					default:
						charType = Std.parseInt(event.value1);
						if(Math.isNaN(charType)) charType = 0;
				}

				var newCharacter:String = event.value2;
				addCharacterToList(newCharacter, charType);

			case 'Dadbattle Spotlight':
				dadbattleBlack = new BGSprite(null, -800, -400, 0, 0);
				dadbattleBlack.makeGraphic(Std.int(FlxG.width * 2), Std.int(FlxG.height * 2), FlxColor.BLACK);
				dadbattleBlack.alpha = 0.25;
				dadbattleBlack.visible = false;
				add(dadbattleBlack);

				dadbattleLight = new BGSprite('spotlight', 400, -400);
				dadbattleLight.alpha = 0;
				dadbattleLight.blend = ADD;
				dadbattleLight.visible = false;
				
				dadbattleLight2 = new BGSprite('spotlight', 400, -400);
				dadbattleLight2.alpha = 0;
				dadbattleLight2.blend = ADD;
				dadbattleLight2.visible = false;

				dadbattleSmokes.alpha = 0.7;
				dadbattleSmokes.blend = ADD;
				dadbattleSmokes.visible = false;
				add(dadbattleLight);
				add(dadbattleLight2);
				add(dadbattleSmokes);

				var offsetX = 200;
				var smoke:BGSprite = new BGSprite('smoke', -1550 + offsetX, 660 + FlxG.random.float(-20, 20), 1.2, 1.05);
				smoke.setGraphicSize(Std.int(smoke.width * FlxG.random.float(1.1, 1.22)));
				smoke.updateHitbox();
				smoke.velocity.x = FlxG.random.float(15, 22);
				smoke.active = true;
				dadbattleSmokes.add(smoke);
				var smoke:BGSprite = new BGSprite('smoke', 1550 + offsetX, 660 + FlxG.random.float(-20, 20), 1.2, 1.05);
				smoke.setGraphicSize(Std.int(smoke.width * FlxG.random.float(1.1, 1.22)));
				smoke.updateHitbox();
				smoke.velocity.x = FlxG.random.float(-15, -22);
				smoke.active = true;
				smoke.flipX = true;
				dadbattleSmokes.add(smoke);


			case 'Philly Glow':
				blammedLightsBlack = new FlxSprite(FlxG.width * -0.5, FlxG.height * -0.5).makeGraphic(Std.int(FlxG.width * 2), Std.int(FlxG.height * 2), FlxColor.BLACK);
				blammedLightsBlack.visible = false;
				insert(members.indexOf(phillyStreet), blammedLightsBlack);

				phillyWindowEvent = new BGSprite('philly/window', phillyWindow.x, phillyWindow.y, 0.3, 0.3);
				phillyWindowEvent.setGraphicSize(Std.int(phillyWindowEvent.width * 0.85));
				phillyWindowEvent.updateHitbox();
				phillyWindowEvent.visible = false;
				insert(members.indexOf(blammedLightsBlack) + 1, phillyWindowEvent);


				phillyGlowGradient = new PhillyGlow.PhillyGlowGradient(-400, 225); //This shit was refusing to properly load FlxGradient so fuck it
				phillyGlowGradient.visible = false;
				insert(members.indexOf(blammedLightsBlack) + 1, phillyGlowGradient);
				if(!ClientPrefs.flashing) phillyGlowGradient.intendedAlpha = 0.7;

				precacheList.set('philly/particle', 'image'); //precache particle image
				phillyGlowParticles = new FlxTypedGroup<PhillyGlow.PhillyGlowParticle>();
				phillyGlowParticles.visible = false;
				insert(members.indexOf(phillyGlowGradient) + 1, phillyGlowParticles);

			case 'Flash Camera':
				blackFlash = new FlxSprite(0, 0).makeGraphic(Std.int(FlxG.width * 4), Std.int(FlxG.height * 4), FlxColor.BLACK);
				add(blackFlash);
				blackFlash.alpha = 0.0001;
				blackFlash.scrollFactor.set();
				blackFlash.visible = false;

				whiteFlash = new FlxSprite(0, 0).makeGraphic(Std.int(FlxG.width * 4), Std.int(FlxG.height * 4), FlxColor.WHITE);
				add(whiteFlash);
				whiteFlash.alpha = 0.0001;
				whiteFlash.scrollFactor.set();
				whiteFlash.visible = false;

				redFlash = new FlxSprite(0, 0).makeGraphic(Std.int(FlxG.width * 4), Std.int(FlxG.height * 4), FlxColor.RED);
				add(redFlash);
				redFlash.alpha = 0.0001;
				redFlash.scrollFactor.set();
				redFlash.alpha = 0.0001;

				customFlash = new FlxSprite(0, 0).makeGraphic(Std.int(FlxG.width * 4), Std.int(FlxG.height * 4), FlxColor.BLACK);
				add(customFlash);
				customFlash.alpha = 0.0001;
				customFlash.scrollFactor.set();
				customFlash.visible = false;
		}

		if(!eventPushedMap.exists(event.event)) {
			eventPushedMap.set(event.event, true);
		}
	}

	function eventNoteEarlyTrigger(event:EventNote):Float {
		var returnedValue:Float = callOnLuas('eventEarlyTrigger', [event.event]);
		if(returnedValue != 0) {
			return returnedValue;
		}

		switch(event.event) {
			case 'Kill Henchmen': //Better timing so that the kill sound matches the beat intended
				return 280; //Plays 280ms before the actual position
		}
		return 0;
	}

	function sortByShit(Obj1:Note, Obj2:Note):Int
	{
		return FlxSort.byValues(FlxSort.ASCENDING, Obj1.strumTime, Obj2.strumTime);
	}

	function sortByTime(Obj1:EventNote, Obj2:EventNote):Int
	{
		return FlxSort.byValues(FlxSort.ASCENDING, Obj1.strumTime, Obj2.strumTime);
	}

	public var skipArrowStartTween:Bool = false; //for lua
	private function generateStaticArrows(player:Int):Void
	{
		for (i in 0...4)
		{
			// FlxG.log.add(i);
			var targetAlpha:Float = 1;
			if (player < 1)
			{
				if(!ClientPrefs.opponentStrums || SONG.song.toLowerCase() == 'romantic homicide' || noOpponentStrumOnStart == true)
					targetAlpha = 0;
				else if(ClientPrefs.middleScroll)
					targetAlpha = 0.35;
			}

			var char:String = '';
			if (player == 1)
				char = boyfriend.noteSkin;
			else
				char = dad.noteSkin;

			var babyArrow:StrumNote = new StrumNote(ClientPrefs.middleScroll ? STRUM_X_MIDDLESCROLL : STRUM_X, strumLine.y, i, player, char);
			babyArrow.downScroll = ClientPrefs.downScroll;
			if (!isStoryMode && !skipArrowStartTween)
			{
				//babyArrow.y -= 10;
				babyArrow.alpha = 0;
				FlxTween.tween(babyArrow, {/*y: babyArrow.y + 10,*/ alpha: targetAlpha}, 1, {ease: FlxEase.circOut, startDelay: 0.5 + (0.2 * i)});
			}
			else
			{
				babyArrow.alpha = targetAlpha;
			}

			if (player == 1)
			{
				playerStrums.add(babyArrow);
			}
			else
			{
				if(ClientPrefs.middleScroll)
				{
					babyArrow.x += 310;
					if(i > 1) { //Up and Right
						babyArrow.x += FlxG.width / 2 + 25;
					}
				}
				opponentStrums.add(babyArrow);
			}

			strumLineNotes.add(babyArrow);
			babyArrow.postAddedToGroup();
		}
	}

	override function openSubState(SubState:FlxSubState)
	{
		if (paused)
		{
			if (FlxG.sound.music != null)
			{
				FlxG.sound.music.pause();
				vocals.pause();
			}

			if (startTimer != null && !startTimer.finished)
				startTimer.active = false;
			if (finishTimer != null && !finishTimer.finished)
				finishTimer.active = false;
			if(blammedLightsBlackTween != null)
				blammedLightsBlackTween.active = false;
			if(phillyCityLightsEventTween != null)
				phillyCityLightsEventTween.active = false;
			if (songSpeedTween != null)
				songSpeedTween.active = false;

			if(carTimer != null) carTimer.active = false;

			Actuate.pauseAll();

			var chars:Array<Character> = [boyfriend, boyfriend2, gf, dad];
			for (char in chars) {
				if(char != null && char.colorTween != null) {
					char.colorTween.active = false;
				}
			}

			if (ratingTween != null) ratingTween.active = false;
			if (comboTween != null) comboTween.active = false;
			if (numScoreTween != null) numScoreTween.active = false;

			for (tween in modchartTweens) {
				tween.active = false;
			}
			for (timer in modchartTimers) {
				timer.active = false;
			}
		}

		super.openSubState(SubState);
	}

	override function closeSubState()
	{
		if (paused)
		{
			if (FlxG.sound.music != null && !startingSong)
			{
				resyncVocals();
			}

			if (startTimer != null && !startTimer.finished)
				startTimer.active = true;
			if (finishTimer != null && !finishTimer.finished)
				finishTimer.active = true;
			if(blammedLightsBlackTween != null)
				blammedLightsBlackTween.active = true;
			if(phillyCityLightsEventTween != null)
				phillyCityLightsEventTween.active = true;
			if (songSpeedTween != null)
				songSpeedTween.active = true;

			if(carTimer != null) carTimer.active = true;

			Actuate.resumeAll();

			var chars:Array<Character> = [boyfriend, boyfriend2, gf, dad];
			for (char in chars) {
				if(char != null && char.colorTween != null) {
					char.colorTween.active = true;
				}
			}

			if (ratingTween != null) ratingTween.active = true;
			if (comboTween != null) comboTween.active = true;
			if (numScoreTween != null) numScoreTween.active = true;

			for (tween in modchartTweens) {
				tween.active = true;
			}
			for (timer in modchartTimers) {
				timer.active = true;
			}
			paused = false;
			callOnLuas('onResume', []);

			#if desktop
			if (startTimer != null && startTimer.finished)
			{
				DiscordClient.changePresence(detailsText, SONG.song + " (" + storyDifficultyText + ")", iconP2.getCharacter(), true, songLength - Conductor.songPosition - ClientPrefs.noteOffset);
			}
			else
			{
				DiscordClient.changePresence(detailsText, SONG.song + " (" + storyDifficultyText + ")", iconP2.getCharacter());
			}
			#end
		}

		super.closeSubState();
	}

	override public function onFocus():Void
	{
		#if desktop
		if (health > 0 && !paused)
		{
			if (Conductor.songPosition > 0.0)
			{
				DiscordClient.changePresence(detailsText, SONG.song + " (" + storyDifficultyText + ")", iconP2.getCharacter(), true, songLength - Conductor.songPosition - ClientPrefs.noteOffset);
			}
			else
			{
				DiscordClient.changePresence(detailsText, SONG.song + " (" + storyDifficultyText + ")", iconP2.getCharacter());
			}
		}
		#end

		super.onFocus();
	}

	override public function onFocusLost():Void
	{
		#if desktop
		if (health > 0 && !paused)
		{
			DiscordClient.changePresence(detailsPausedText, SONG.song + " (" + storyDifficultyText + ")", iconP2.getCharacter());
		}
		#end

		super.onFocusLost();
	}

	public function resyncVocals():Void
	{
		if(finishTimer != null) return;

		vocals.pause();

		FlxG.sound.music.play();
		FlxG.sound.music.pitch = playbackRate;
		Conductor.songPosition = FlxG.sound.music.time;
		if (Conductor.songPosition <= vocals.length)
		{
			vocals.time = Conductor.songPosition;
			vocals.pitch = playbackRate;
		}
		vocals.play();
	}

	public var paused:Bool = false;
	public var canReset:Bool = true;
	var startedCountdown:Bool = false;
	var canPause:Bool = true;
	var limoSpeed:Float = 0;

	var dadUpYes:Bool = false;
	var dadDownYes:Bool = false;
	var dadRightYes:Bool = false;
	var dadLeftYes:Bool = false;
	var bfUpYes:Bool = false;
	var bfDownYes:Bool = false;
	var bfRightYes:Bool = false;
	var bfLeftYes:Bool = false;

	override public function update(elapsed:Float)
	{
		if (ClientPrefs.gameHuds == "Vs Impostor HUD")
		{
			if (SONG.song.toLowerCase() != 'defeat')
			{
				scoreTxt.color = FlxColor.fromRGB(dad.healthColorArray[0], dad.healthColorArray[1], dad.healthColorArray[2]);
			}
			else
			{
				scoreTxt.color = FlxColor.RED;
			}
		}

		popUpNoteCombo();

		if (ClientPrefs.gameHuds == "Sacorg HUD")
		{
			healthBarOverlay.visible = healthBar.visible;
			healthBarOverlay.alpha = healthBar.alpha;
			healthBarOverlay.angle = healthBar.angle;
			healthBarOverlay.x = healthBar.x - 55;
			healthBarOverlay.y = healthBar.y - 20;
		}

		//camHUD.angle = Math.sin((Conductor.songPosition / 1200) * (Conductor.bpm / 60) * -1.0) * 1.2;

		if (curStage == 'market')
		{
			changeDadZoom = true;
			curCamera.bfZoom = 0.7;
			changeBFZoom = true;
			curCamera.dadZoom = 0.6;
		}
		if (addBoyfriend2 == true)
		{
			boyfriend2.visible = true;
			if (!ClientPrefs.hideHud)
				iconP3.visible = true;
		}
		boyfriend2.x += boyfriend2OffsetX;
		boyfriend2.y += boyfriend2OffsetY;

		if (FlxG.keys.justPressed.NINE)
		{
			iconP1.swapOldIcon();
		}
		callOnLuas('onUpdate', [elapsed]);
		if (script != null)
		{
			script.executeFunc("onUpdate");
		}

		switch (curStage)
		{
			case 'tank':
				moveTank(elapsed);
			case 'schoolEvil':
				if(!ClientPrefs.lowQuality && bgGhouls.animation.curAnim.finished) {
					bgGhouls.visible = false;
				}
			case 'philly':
				if (trainMoving)
				{
					trainFrameTiming += elapsed;

					if (trainFrameTiming >= 1 / 24)
					{
						updateTrainPos();
						trainFrameTiming = 0;
					}
				}
				phillyWindow.alpha -= (Conductor.crochet / 1000) * FlxG.elapsed * 1.5;

				if(phillyGlowParticles != null)
				{
					var i:Int = phillyGlowParticles.members.length-1;
					while (i > 0)
					{
						var particle = phillyGlowParticles.members[i];
						if(particle.alpha < 0)
						{
							particle.kill();
							phillyGlowParticles.remove(particle, true);
							particle.destroy();
						}
						--i;
					}
				}
			case 'limo':
				if(!ClientPrefs.lowQuality) {
					grpLimoParticles.forEach(function(spr:BGSprite) {
						if(spr.animation.curAnim.finished) {
							spr.kill();
							grpLimoParticles.remove(spr, true);
							spr.destroy();
						}
					});

					switch(limoKillingState) {
						case 1:
							limoMetalPole.x += 5000 * elapsed;
							limoLight.x = limoMetalPole.x - 180;
							limoCorpse.x = limoLight.x - 50;
							limoCorpseTwo.x = limoLight.x + 35;

							var dancers:Array<BackgroundDancer> = grpLimoDancers.members;
							for (i in 0...dancers.length) {
								if(dancers[i].x < FlxG.width * 1.5 && limoLight.x > (370 * i) + 130) {
									switch(i) {
										case 0 | 3:
											if(i == 0) FlxG.sound.play(Paths.sound('dancerdeath'), 0.5);

											var diffStr:String = i == 3 ? ' 2 ' : ' ';
											var particle:BGSprite = new BGSprite('gore/noooooo', dancers[i].x + 200, dancers[i].y, 0.4, 0.4, ['hench leg spin' + diffStr + 'PINK'], false);
											grpLimoParticles.add(particle);
											var particle:BGSprite = new BGSprite('gore/noooooo', dancers[i].x + 160, dancers[i].y + 200, 0.4, 0.4, ['hench arm spin' + diffStr + 'PINK'], false);
											grpLimoParticles.add(particle);
											var particle:BGSprite = new BGSprite('gore/noooooo', dancers[i].x, dancers[i].y + 50, 0.4, 0.4, ['hench head spin' + diffStr + 'PINK'], false);
											grpLimoParticles.add(particle);

											var particle:BGSprite = new BGSprite('gore/stupidBlood', dancers[i].x - 110, dancers[i].y + 20, 0.4, 0.4, ['blood'], false);
											particle.flipX = true;
											particle.angle = -57.5;
											grpLimoParticles.add(particle);
										case 1:
											limoCorpse.visible = true;
										case 2:
											limoCorpseTwo.visible = true;
									} //Note: Nobody cares about the fifth dancer because he is mostly hidden offscreen :(
									dancers[i].x += FlxG.width * 2;
								}
							}

							if(limoMetalPole.x > FlxG.width * 2) {
								resetLimoKill();
								limoSpeed = 800;
								limoKillingState = 2;
							}

						case 2:
							limoSpeed -= 4000 * elapsed;
							bgLimo.x -= limoSpeed * elapsed;
							if(bgLimo.x > FlxG.width * 1.5) {
								limoSpeed = 3000;
								limoKillingState = 3;
							}

						case 3:
							limoSpeed -= 2000 * elapsed;
							if(limoSpeed < 1000) limoSpeed = 1000;

							bgLimo.x -= limoSpeed * elapsed;
							if(bgLimo.x < -275) {
								limoKillingState = 4;
								limoSpeed = 800;
							}

						case 4:
							bgLimo.x = FlxMath.lerp(bgLimo.x, -150, CoolUtil.boundTo(elapsed * 9, 0, 1));
							if(Math.round(bgLimo.x) == -150) {
								bgLimo.x = -150;
								limoKillingState = 0;
							}
					}

					if(limoKillingState > 2) {
						var dancers:Array<BackgroundDancer> = grpLimoDancers.members;
						for (i in 0...dancers.length) {
							dancers[i].x = (370 * i) + bgLimo.x + 280;
						}
					}
				}
			case 'mall':
				if(heyTimer > 0) {
					heyTimer -= elapsed;
					if(heyTimer <= 0) {
						bottomBoppers.dance(true);
						heyTimer = 0;
					}
				}
		}

		if (SONG.song.toLowerCase() == 'defeat')
		{
			if (defeatDark == true)
			{
				scoreTxt.text = 'Score: $songScore | Combo Breaks: $songMisses | Accuracy: ';

				if (ratingString == '?')
				{
					scoreTxt.text += '0% | N/A';
				}

				scoreTxt.text += convertedAccDisplay + '% | ';

				switch(ratingString)
				{
					case ' [SFC]': scoreTxt.text += '(MFC) AAAA:';
					case ' [GFC]': scoreTxt.text += '(GFC) AAA:';
					case ' [FC]': scoreTxt.text += '(FC) AA:';
					default: scoreTxt.text += '(SDCB) A:';
				}
			}
			else
			{
				if (ratingName == '?') {
					scoreTxt.text = 'Score: ' + songScore + ' | Combo Breaks: ' + songMisses + ' | Accuracy: ?';
				} else {
					scoreTxt.text = 'Score: ' + songScore + ' | Combo Breaks: ' + songMisses + ' | Accuracy: '
					+ convertedAccDisplay + '%' + (shits > 0 || songMisses > 0 ? '' : ratingString);
				}
			}
		}

		var charAnimOffsetX:Float = 0;
		var charAnimOffsetY:Float = 0;

		if (focusedCharacter == dad || focusedCharacter == gf)
		{
			if (upYes2 == true) dadUpYes = true;
			if (downYes2 == true) dadDownYes = true;
			if (rightYes2 == true) dadRightYes = true;
			if (leftYes2 == true) dadLeftYes = true;
		}

		if (focusedCharacter == boyfriend || focusedCharacter == boyfriend2 || focusedCharacter == gf)
		{
			if (upYes == true) bfUpYes = true;
			if (downYes == true) bfDownYes = true;
			if (rightYes == true) bfRightYes = true;
			if (leftYes == true) bfLeftYes = true;
		}

		if (ClientPrefs.dynamicCamera)
		{
			if (followChars || oldSongsThatUsedCameraFollow.contains(Paths.formatToSongPath(SONG.song)))
			{
				if (!isEventWorking)
				{
					if (focusedCharacter != null && focusedCharacter.animation.curAnim != null)
					{
						switch (focusedCharacter.animation.curAnim.name.toLowerCase().substring(4))
						{
							case "up" | "up-alt":
								if (dadUpYes) charAnimOffsetY -= ofs;
								if (bfUpYes) charAnimOffsetY -= ofs;
							case "down" | "down-alt":
								if (dadDownYes) charAnimOffsetY += ofs;
								if (bfDownYes) charAnimOffsetY += ofs;
							case "left" | "left-alt":
								if (dadLeftYes) charAnimOffsetX -= ofs;
								if (bfLeftYes) charAnimOffsetX -= ofs;
							case "right" | "right-alt":
								if (dadRightYes) charAnimOffsetX += ofs;
								if (bfLeftYes) charAnimOffsetX += ofs;
						}
					}
				}
			}
		}

		if(!inCutscene) {
			var lerpVal:Float = CoolUtil.boundTo(elapsed * 2.4 * cameraSpeed * playbackRate, 0, 1);
			camFollowPos.setPosition(FlxMath.lerp(camFollowPos.x, camFollow.x + charAnimOffsetX, lerpVal), FlxMath.lerp(camFollowPos.y, camFollow.y + charAnimOffsetY, lerpVal));
			if(!startingSong && !endingSong && boyfriend.animation.curAnim != null && boyfriend2.animation.curAnim != null && boyfriend.animation.curAnim.name.startsWith('idle') && boyfriend2.animation.curAnim.name.startsWith('idle')) {
				boyfriendIdleTime += elapsed;
				if(boyfriendIdleTime >= 0.15) { // Kind of a mercy thing for making the achievement easier to get as it's apparently frustrating to some playerss
					boyfriendIdled = true;
				}
			} else {
				boyfriendIdleTime = 0;
			}
		}

		super.update(elapsed);

		switch (ClientPrefs.gameHuds)
		{
			case "New HUD":
				judgementCounter.text = "Sick: " + sicks + '\n' +
				"Good: " + goods + '\n' +
				"Bad: " + bads + '\n' +
				"Shit: " + shits + '\n';
			default:
				judgementCounter.text = 'Total Hits: ' + songHits + " / " + totalNotes + '\n' +
				'Combo: ' + combo + ' ['  + maxCombo + ']' + '\n' +
				'Sicks: ' + sicks + '\n' +
				'Goods: ' + goods + '\n' +
				'Bads: ' + bads + '\n' +
				'Shits: ' + shits + '\n' +
				'Misses: ' + songMisses + '\n' +
				'Rating: ' + (ratingName == "?" ? "?" : '$ratingName$judgementRatingFC') + '\n';
		}

		if (combo >= maxCombo) {
			maxCombo = combo;
		}

		var balls = notesHitArray.length - 1;
		while (balls >= 0)
		{
			var cock:Date = notesHitArray[balls];
			if (cock != null && cock.getTime() + 1000 < Date.now().getTime())
				notesHitArray.remove(cock);
			else
				balls = 0;
			balls--;
		}
		nps = notesHitArray.length;
		if (nps >= maxNps)
			maxNps = nps;

		setOnLuas('curDecStep', curDecStep);
		setOnLuas('curDecBeat', curDecBeat);

		if(botplayTxt.visible) {
			botplaySine += 180 * elapsed;
			botplayTxt.alpha = 1 - Math.sin((Math.PI * botplaySine) / 180);
		}

		if (controls.PAUSE && startedCountdown && canPause)
		{
			var ret:Dynamic = callOnLuas('onPause', [], false);
			if(ret != FunkinLua.Function_Stop) {
				openPauseMenu();
			}
		}

		if (FlxG.keys.anyJustPressed(debugKeysChart) && !endingSong && !inCutscene)
		{
			openChartEditor();
		}

		// FlxG.watch.addQuick('VOL', vocals.amplitudeLeft);
		// FlxG.watch.addQuick('VOLRight', vocals.amplitudeRight);

		var mult:Float = FlxMath.lerp(1, iconP1.scale.x, CoolUtil.boundTo(1 - (elapsed * 9 * playbackRate), 0, 1));
		iconP1.scale.set(mult, mult);
		iconP1.updateHitbox();

		var mult:Float = FlxMath.lerp(1, iconP2.scale.x, CoolUtil.boundTo(1 - (elapsed * 9 * playbackRate), 0, 1));
		iconP2.scale.set(mult, mult);
		iconP2.updateHitbox();

		var mult:Float = FlxMath.lerp(0.8, iconP3.scale.x, CoolUtil.boundTo(1 - (elapsed * 9 * playbackRate), 0, 1));
		iconP3.scale.set(mult, mult);
		iconP3.updateHitbox();

		/*var mult:Float = FlxMath.lerp(1, iconShow.scale.x, CoolUtil.boundTo(1 - (elapsed * 9), 0, 1));
		iconShow.scale.set(mult, mult);
		iconShow.updateHitbox();*/

		var iconOffset:Int = 26;

		iconP1.x = healthBar.x + (healthBar.width * (FlxMath.remapToRange(healthBar.percent, 0, 100, 100, 0) * 0.01)) + (150 * iconP1.scale.x - 150) / 2 - iconOffset;
		iconP2.x = healthBar.x + (healthBar.width * (FlxMath.remapToRange(healthBar.percent, 0, 100, 100, 0) * 0.01)) - (150 * iconP2.scale.x) / 2 - iconOffset * 2;
		iconP3.x = (healthBar.x + (healthBar.width * (FlxMath.remapToRange(healthBar.percent, 0, 100, 100, 0) * 0.01)) + (150 * iconP3.scale.x - 150) / 2 - iconOffset) + 40;

		if (health > 2)
			health = 2;
		if (health < 0)
			health = 0;

		if (iconP1.animation.frames == 3) {
			if (healthBar.percent < 20)
				iconP1.animation.curAnim.curFrame = 1;
			else if (healthBar.percent >80)
				iconP1.animation.curAnim.curFrame = 2;
			else
				iconP1.animation.curAnim.curFrame = 0;
		} 
		else {
			if (healthBar.percent < 20)
				iconP1.animation.curAnim.curFrame = 1;
			else
				iconP1.animation.curAnim.curFrame = 0;
		}

		if (iconP3.animation.frames == 3) {
			if (healthBar.percent < 20)
				iconP3.animation.curAnim.curFrame = 1;
			else if (healthBar.percent >80)
				iconP3.animation.curAnim.curFrame = 2;
			else
				iconP3.animation.curAnim.curFrame = 0;
		} 
		else {
			if (healthBar.percent < 20)
				iconP3.animation.curAnim.curFrame = 1;
			else
				iconP3.animation.curAnim.curFrame = 0;
		}

		if (iconP2.animation.frames == 3) {
			if (healthBar.percent > 80)
				iconP2.animation.curAnim.curFrame = 1;
			else if (healthBar.percent < 20)
				iconP2.animation.curAnim.curFrame = 2;
			else 
				iconP2.animation.curAnim.curFrame = 0;
		} else {
			if (healthBar.percent > 80)
				iconP2.animation.curAnim.curFrame = 1;
			else 
				iconP2.animation.curAnim.curFrame = 0;
		}

		// iconShow.animation.curAnim.curFrame = 0;

		if (FlxG.keys.anyJustPressed(debugKeysCharacter) && !endingSong && !inCutscene) {
			persistentUpdate = false;
			paused = true;
			cancelMusicFadeTween();
			MusicBeatState.switchState(new CharacterEditorState(SONG.player2));
		}

		if (startingSong)
		{
			if (startedCountdown)
			{
				Conductor.songPosition += FlxG.elapsed * 1000 * playbackRate;
				if (Conductor.songPosition >= 0)
					startSong();
			}
		}
		else
		{
			Conductor.songPosition += FlxG.elapsed * 1000;

			if (!paused)
			{
				songTime += FlxG.game.ticks - previousFrameTime;
				previousFrameTime = FlxG.game.ticks;

				// Interpolation type beat
				if (Conductor.lastSongPos != Conductor.songPosition)
				{
					songTime = (songTime + Conductor.songPosition) / 2;
					Conductor.lastSongPos = Conductor.songPosition;
					// Conductor.songPosition += FlxG.elapsed * 1000;
					// trace('MISSED FRAME');
				}

				if(updateTime) {
					var curTime:Float = Conductor.songPosition - ClientPrefs.noteOffset;
					var timeTotal:Int = Math.floor(songLength / 1000);
					if(curTime < 0) curTime = 0;
					songPercent = (curTime / songLength);
					endSongPercent = timeTotal;

					var songCalc:Float = (songLength - curTime);
					if(ClientPrefs.timeBarType == 'Time Elapsed') songCalc = curTime;

					var secondsTotal:Int = Math.floor(songCalc / 1000);
					if(secondsTotal < 0) secondsTotal = 0;

					if(ClientPrefs.timeBarType != 'Song Name')
						timeTxt.text = FlxStringUtil.formatTime(secondsTotal, false) + ' - ' + FlxStringUtil.formatTime(endSongPercent, false);

					if (ClientPrefs.gameHuds == "New HUD")
					{
						totalTxt.text = FlxStringUtil.formatTime(endSongPercent, false);
						elapsedTxt.text = FlxStringUtil.formatTime(secondsTotal, false);
					}

				}
			}

			// Conductor.lastSongPos = FlxG.sound.music.time;
		}

		if (camZooming)
		{
			FlxG.camera.zoom = FlxMath.lerp(defaultCamZoom, FlxG.camera.zoom, CoolUtil.boundTo(1 - (elapsed * 3.125 * camZoomingDecay * playbackRate), 0, 1));
			if (shouldChangeHudZoom) {
				camHUD.zoom = FlxMath.lerp(defaultHudZoom, camHUD.zoom, CoolUtil.boundTo(1 - (elapsed * 3.125 * camZoomingDecay * playbackRate), 0, 1));
			} else {
				camHUD.zoom = FlxMath.lerp(1, camHUD.zoom, CoolUtil.boundTo(1 - (elapsed * 3.125 * camZoomingDecay * playbackRate), 0, 1));
			}
		}

		FlxG.watch.addQuick("secShit", curSection);
		FlxG.watch.addQuick("beatShit", curBeat);
		FlxG.watch.addQuick("stepShit", curStep);

		// RESET = Quick Game Over Screen
		if (!ClientPrefs.noReset && controls.RESET && canReset && !inCutscene && startedCountdown && !endingSong)
		{
			health = 0;
			trace("RESET = True");
		}
		doDeathCheck();

		if (unspawnNotes[0] != null)
		{
			var time:Float = spawnTime;
			if(songSpeed < 1) time /= songSpeed;
			if(unspawnNotes[0].multSpeed < 1) time /= unspawnNotes[0].multSpeed;

			while (unspawnNotes.length > 0 && unspawnNotes[0].strumTime - Conductor.songPosition < time)
			{
				var dunceNote:Note = unspawnNotes[0];
				notes.insert(0, dunceNote);
				dunceNote.spawned=true;
				callOnLuas('onSpawnNote', [notes.members.indexOf(dunceNote), dunceNote.noteData, dunceNote.noteType, dunceNote.isSustainNote]);

				var index:Int = unspawnNotes.indexOf(dunceNote);
				unspawnNotes.splice(index, 1);
			}
		}

		if (generatedMusic)
		{
			if (!inCutscene) {
				if(!cpuControlled) {
					keyShit();
				} else if(boyfriend.animation.curAnim != null && boyfriend.holdTimer > Conductor.stepCrochet * 0.0011 * boyfriend.singDuration && boyfriend.animation.curAnim.name.startsWith('sing') && !boyfriend.animation.curAnim.name.endsWith('miss')) {
					boyfriend.dance();
					//boyfriend.animation.curAnim.finish();
				} else if(boyfriend2.animation.curAnim != null && boyfriend2.holdTimer > Conductor.stepCrochet * 0.0011 * boyfriend2.singDuration && boyfriend2.animation.curAnim.name.startsWith('sing') && !boyfriend.animation.curAnim.name.endsWith('miss')) {
					boyfriend2.dance();
					//boyfriend.animation.curAnim.finish();
				}
			}

			var fakeCrochet:Float = (60 / SONG.bpm) * 1000;
			notes.forEachAlive(function(daNote:Note)
			{
				var strumGroup:FlxTypedGroup<StrumNote> = playerStrums;
				if(!daNote.mustPress) strumGroup = opponentStrums;

				var strumX:Float = strumGroup.members[daNote.noteData].x;
				var strumY:Float = strumGroup.members[daNote.noteData].y;
				var strumAngle:Float = strumGroup.members[daNote.noteData].angle;
				var strumDirection:Float = strumGroup.members[daNote.noteData].direction;
				var strumAlpha:Float = strumGroup.members[daNote.noteData].alpha;
				var strumScroll:Bool = strumGroup.members[daNote.noteData].downScroll;

				strumX += daNote.offsetX;
				strumY += daNote.offsetY;
				strumAngle += daNote.offsetAngle;
				strumAlpha *= daNote.multAlpha;

				if (strumScroll) //Downscroll
				{
					//daNote.y = (strumY + 0.45 * (Conductor.songPosition - daNote.strumTime) * songSpeed);
					daNote.distance = (0.45 * (Conductor.songPosition - daNote.strumTime) * songSpeed * daNote.multSpeed);
				}
				else //Upscroll
				{
					//daNote.y = (strumY - 0.45 * (Conductor.songPosition - daNote.strumTime) * songSpeed);
					daNote.distance = (-0.45 * (Conductor.songPosition - daNote.strumTime) * songSpeed * daNote.multSpeed);
				}

				var angleDir = strumDirection * Math.PI / 180;
				if (daNote.copyAngle)
					daNote.angle = strumDirection - 90 + strumAngle;

				if(daNote.copyAlpha)
				{
					if (daNote.parent != null)
					{
						if (!daNote.parent.shouldbehidden)
						{
							daNote.alpha = strumAlpha;
						}
					}
					else
					{
						daNote.alpha = strumAlpha;
					}
				}

				if(daNote.copyX)
					daNote.x = strumX + Math.cos(angleDir) * daNote.distance;

				if(daNote.copyY)
				{
					daNote.y = strumY + Math.sin(angleDir) * daNote.distance;

					//Jesus fuck this took me so much mother fucking time AAAAAAAAAA
					if(strumScroll && daNote.isSustainNote)
					{
						if (daNote.animation.curAnim.name.endsWith('end')) {
							daNote.y += 10.5 * (fakeCrochet / 400) * 1.5 * songSpeed + (46 * (songSpeed - 1));
							daNote.y -= 46 * (1 - (fakeCrochet / 600)) * songSpeed;
							if(PlayState.isPixelStage) {
								daNote.y += 8 + (6 - daNote.originalHeightForCalcs) * PlayState.daPixelZoom;
							} else {
								daNote.y -= 19;
							}
						}
						daNote.y += (Note.swagWidth / 2) - (60.5 * (songSpeed - 1));
						daNote.y += 27.5 * ((SONG.bpm / 100) - 1) * (songSpeed - 1);
					}
				}

				if (!daNote.mustPress && daNote.wasGoodHit && !daNote.hitByOpponent && !daNote.ignoreNote)
				{
					opponentNoteHit(daNote);
				}

				if(!daNote.blockHit && daNote.mustPress && cpuControlled && daNote.canBeHit) {
					if(daNote.isSustainNote) {
						if(daNote.canBeHit) {
							goodNoteHit(daNote);
						}
					} else if (daNote.strumTime <= Conductor.songPosition || daNote.isSustainNote) {
						goodNoteHit(daNote);
					}
				}

				var center:Float = strumY + Note.swagWidth / 2;
				if(strumGroup.members[daNote.noteData].sustainReduce && daNote.isSustainNote && (daNote.mustPress || !daNote.ignoreNote) &&
					(!daNote.mustPress || (daNote.wasGoodHit || (daNote.prevNote.wasGoodHit && !daNote.canBeHit))))
				{
					if (strumScroll)
					{
						if(daNote.y - daNote.offset.y * daNote.scale.y + daNote.height >= center)
						{
							var swagRect = new FlxRect(0, 0, daNote.frameWidth, daNote.frameHeight);
							swagRect.height = (center - daNote.y) / daNote.scale.y;
							swagRect.y = daNote.frameHeight - swagRect.height;

							daNote.clipRect = swagRect;
						}
					}
					else
					{
						if (daNote.y + daNote.offset.y * daNote.scale.y <= center)
						{
							var swagRect = new FlxRect(0, 0, daNote.width / daNote.scale.x, daNote.height / daNote.scale.y);
							swagRect.y = (center - daNote.y) / daNote.scale.y;
							swagRect.height -= swagRect.y;

							daNote.clipRect = swagRect;
						}
					}
				}

				// Kill extremely late notes and cause misses
				if (Conductor.songPosition > noteKillOffset + daNote.strumTime)
				{
					if (daNote.mustPress && !cpuControlled &&!daNote.ignoreNote && !endingSong && (daNote.tooLate || !daNote.wasGoodHit)) {
						noteMiss(daNote);
					}

					daNote.active = false;
					daNote.visible = false;

					daNote.kill();
					notes.remove(daNote, true);
					daNote.destroy();
				}
			});
		}
		checkEventNote();

		#if debug
		if(!endingSong && !startingSong) {
			if (FlxG.keys.justPressed.ONE) {
				KillNotes();
				FlxG.sound.music.onComplete();
			}
			if(FlxG.keys.justPressed.TWO) { //Go 10 seconds into the future :O
				setSongTime(Conductor.songPosition + 10000);
				clearNotesBefore(Conductor.songPosition);
			}
		}
		#end

		setOnLuas('cameraX', camFollowPos.x);
		setOnLuas('cameraY', camFollowPos.y);
		setOnLuas('botPlay', cpuControlled);
		callOnLuas('onUpdatePost', [elapsed]);


		if (script != null)
		{
			script.executeFunc("onUpdatePost");
		}
	}

	function openPauseMenu()
	{
		persistentUpdate = false;
		persistentDraw = true;
		paused = true;

		if(FlxG.sound.music != null) {
			FlxG.sound.music.pause();
			vocals.pause();
		}
		openSubState(new PauseSubState(boyfriend.getScreenPosition().x, boyfriend.getScreenPosition().y));

		#if desktop
		DiscordClient.changePresence(detailsPausedText, SONG.song + " (" + storyDifficultyText + ")", iconP2.getCharacter());
		#end

		if (script != null) {
			script.executeFunc("onPauseMenu");
		}
	}

	function openChartEditor()
	{
		persistentUpdate = false;
		paused = true;
		cancelMusicFadeTween();
		MusicBeatState.switchState(new ChartingState());
		chartingMode = true;

		#if desktop
		DiscordClient.changePresence("Chart Editor", null, null, true);
		#end
	}

	public var isDead:Bool = false; //Don't mess with this on Lua!!!
	function doDeathCheck(?skipHealthCheck:Bool = false) {
		if (((skipHealthCheck && instakillOnMiss) || health <= 0) && !practiceMode && !isDead)
		{
			var ret:Dynamic = callOnLuas('onGameOver', [], false);
			if(ret != FunkinLua.Function_Stop) {
				boyfriend.stunned = true;
				boyfriend2.visible = false;
				deathCounter++;

				paused = true;

				vocals.stop();
				FlxG.sound.music.stop();

				persistentUpdate = false;
				persistentDraw = false;
				for (tween in modchartTweens) {
					tween.active = true;
				}
				for (timer in modchartTimers) {
					timer.active = true;
				}
				openSubState(new GameOverSubstate(boyfriend.getScreenPosition().x - boyfriend.positionArray[0], boyfriend.getScreenPosition().y - boyfriend.positionArray[1], camFollowPos.x, camFollowPos.y));

				// MusicBeatState.switchState(new GameOverState(boyfriend.getScreenPosition().x, boyfriend.getScreenPosition().y));

				#if desktop
				// Game Over doesn't get his own variable because it's only used here
				DiscordClient.changePresence("Game Over - " + detailsText, SONG.song + " (" + storyDifficultyText + ")", iconP2.getCharacter());
				#end
				isDead = true;
				return true;
			}
		}
		return false;
	}

	public function checkEventNote()
	{
		while(eventNotes.length > 0) {
			var leStrumTime:Float = eventNotes[0].strumTime;
			if(Conductor.songPosition < leStrumTime) {
				break;
			}

			var value1:String = '';
			if(eventNotes[0].value1 != null)
				value1 = eventNotes[0].value1;

			var value2:String = '';
			if(eventNotes[0].value2 != null)
				value2 = eventNotes[0].value2;

			var value3:String = '';
			if(eventNotes[0].value3 != null)
				value3 = eventNotes[0].value3;

			triggerEventNote(eventNotes[0].event, value1, value2, value3);
			eventNotes.shift();
		}
	}

	public function getControl(key:String) {
		var pressed:Bool = Reflect.getProperty(controls, key);
		//trace('Control result: ' + pressed);
		return pressed;
	}

	public function triggerEventNote(eventName:String, value1:String, value2:String, value3:String = "") {
		switch(eventName) {
			case 'Dadbattle Spotlight':
				var val:Null<Int> = Std.parseInt(value1);
				if(val == null) val = 0;

				switch(Std.parseInt(value1))
				{
					case 1, 2, 3, 4 : //enable and target dad
						if(val == 1) //enable
						{
							dadbattleBlack.visible = true;
							dadbattleLight.visible = true;
							dadbattleLight2.visible = true;
							dadbattleSmokes.visible = true;
							defaultCamZoom += 0.12;
						}

						var who:Character = dad;
						if(val > 2 && val < 4) who = boyfriend;
						//2 only targets dad;
						new FlxTimer().start(0.12, function(tmr:FlxTimer) {
							dadbattleLight.alpha = 0.375;
							if (val == 4) dadbattleLight2.alpha = 0.375;
						});
						dadbattleLight.setPosition(who.getGraphicMidpoint().x - dadbattleLight.width / 2, who.y + who.height - dadbattleLight.height + 50);
						if (val == 4) {
							dadbattleLight.setPosition(dad.getGraphicMidpoint().x - dadbattleLight.width / 2, dad.y + dad.height - dadbattleLight.height + 50);
							dadbattleLight2.setPosition(boyfriend.getGraphicMidpoint().x - dadbattleLight.width / 2,
								boyfriend.y + boyfriend.height - dadbattleLight.height + 50);
						}
					default:
						dadbattleBlack.visible = false;
						dadbattleLight.visible = false;
						dadbattleLight2.visible = false;
						if (val == 4) defaultCamZoom += 0.36
						else defaultCamZoom -= 0.12;
						FlxTween.tween(dadbattleSmokes, {alpha: 0}, 1, {onComplete: function(twn:FlxTween)
						{
							dadbattleSmokes.visible = false;
						}});
				}

			case 'Hey!':
				var value:Int = 2;
				switch(value1.toLowerCase().trim()) {
					case 'bf' | 'boyfriend' | '0':
						value = 0;
					case 'gf' | 'girlfriend' | '1':
						value = 1;
				}

				var time:Float = Std.parseFloat(value2);
				if(Math.isNaN(time) || time <= 0) time = 0.6;

				if(value != 0) {
					if(dad.curCharacter.startsWith('gf')) { //Tutorial GF is actually Dad! The GF is an imposter!! ding ding ding ding ding ding ding, dindinding, end my suffering
						dad.playAnim('cheer', true);
						dad.specialAnim = true;
						dad.heyTimer = time;
					} else if (gf != null) {
						gf.playAnim('cheer', true);
						gf.specialAnim = true;
						gf.heyTimer = time;
					}

					if(curStage == 'mall') {
						bottomBoppers.animation.play('hey', true);
						heyTimer = time;
					}
				}
				if(value != 1) {
					boyfriend.playAnim('hey', true);
					boyfriend.specialAnim = true;
					boyfriend.heyTimer = time;
				}

			case 'Set GF Speed':
				var value:Int = Std.parseInt(value1);
				if(Math.isNaN(value) || value < 1) value = 1;
				gfSpeed = value;

			case 'Set Cam Speed':
				var value:Int = Std.parseInt(value1);
				if(Math.isNaN(value)) value = 1;
				camSpeed = value;

			case 'Set Cam Zoom Intensity':
				zoomSpeedTrue = true;
				var value:Float = Std.parseFloat(value1);
				if(Math.isNaN(value)) value = 0.03;
				zoomSpeed = value;
			case 'Set Cam Pan Intensity':
				var value:Float = Std.parseFloat(value1);
				if(Math.isNaN(value)) value = 1;
				FlxG.camera.followLerp = value;

			case 'Blammed Lights':
				var lightId:Int = Std.parseInt(value1);
				if(Math.isNaN(lightId)) lightId = 0;

				var chars:Array<Character> = [boyfriend, gf, dad];
				if(lightId > 0 && curLightEvent != lightId)
				{
					if(lightId > 6 && lightId != 7) lightId = FlxG.random.int(1, 6, [curLightEvent]);

					var color:Int = 0xffffffff;
					switch(lightId)
					{
						case 1: //Blue
							color = 0xff31a2fd;
						case 2: //Green
							color = 0xff31fd8c;
						case 3: //Pink
							color = 0xfff794f7;
						case 4: //Red
							color = 0xfff96d63;
						case 5: //Orange
							color = 0xfffba633;
						case 7:
							color = 0xffffffff;
					}
					curLightEvent = lightId;

					if(blammedLightsBlack2.alpha == 0)
					{
						if(blammedLightsBlackTween != null)
						{
							blammedLightsBlackTween.cancel();
						}
						blammedLightsBlackTween = FlxTween.tween(blammedLightsBlack2, {alpha: 1}, 1, {ease: FlxEase.quadInOut,
							onComplete: function(twn:FlxTween) {
								blammedLightsBlackTween = null;
							}
						});

						for (char in chars)
						{
							if(char.colorTween != null)
							{
								char.colorTween.cancel();
							}
							char.colorTween = FlxTween.color(char, 1, FlxColor.WHITE, color, {onComplete: function(twn:FlxTween)
							{
								char.colorTween = null;
							},
							ease: FlxEase.quadInOut
							});
						}
					}
					else
					{
						if(blammedLightsBlackTween != null)
						{
							blammedLightsBlackTween.cancel();
						}
						blammedLightsBlackTween = null;
						blammedLightsBlack2.alpha = 1;

						for (char in chars)
						{
							if(char.colorTween != null)
							{
								char.colorTween.cancel();
							}
							char.colorTween = null;
						}
						dad.color = color;
						boyfriend.color = color;
						if (gf != null)
							gf.color = color;
					}
					
					if(curStage == 'philly')
					{
						if(phillyCityLightsEvent != null)
						{
							phillyCityLightsEvent.forEach(function(spr:BGSprite)
							{
								spr.visible = false;
							});
							phillyCityLightsEvent.members[lightId - 1].visible = true;
							phillyCityLightsEvent.members[lightId - 1].alpha = 1;
						}
					}
				}
				else
				{
					if(blammedLightsBlack2.alpha != 0)
					{
						if(blammedLightsBlackTween != null)
						{
							blammedLightsBlackTween.cancel();
						}
						blammedLightsBlackTween = FlxTween.tween(blammedLightsBlack2, {alpha: 0}, 1, {ease: FlxEase.quadInOut,
							onComplete: function(twn:FlxTween)
							{
								blammedLightsBlackTween = null;
							}
						});
					}

					if(curStage == 'philly')
					{
						phillyCityLights.forEach(function(spr:BGSprite) {
							spr.visible = false;
						});
						phillyCityLightsEvent.forEach(function(spr:BGSprite) {
							spr.visible = false;
						});

						var memb:FlxSprite = phillyCityLightsEvent.members[curLightEvent - 1];
						if(memb != null) {
							memb.visible = true;
							memb.alpha = 1;
							if(phillyCityLightsEventTween != null)
								phillyCityLightsEventTween.cancel();

							phillyCityLightsEventTween = FlxTween.tween(memb, {alpha: 0}, 1, {onComplete: function(twn:FlxTween) {
								phillyCityLightsEventTween = null;
							}, ease: FlxEase.quadInOut});
						}
					}

					for (char in chars)
					{
						if(char.colorTween != null)
						{
							char.colorTween.cancel();
						}
						char.colorTween = FlxTween.color(char, 1, char.color, FlxColor.WHITE, {onComplete: function(twn:FlxTween)
						{
							char.colorTween = null;
						},
						ease: FlxEase.quadInOut
						});
					}

					curLight = 0;
					curLightEvent = 0;
				}

			case 'Kill Henchmen':
				killHenchmen();

			case 'Add Camera Zoom':
				if(ClientPrefs.camZooms && FlxG.camera.zoom < 1.35) {
					var camZoom:Float = Std.parseFloat(value1);
					var hudZoom:Float = Std.parseFloat(value2);
					if(Math.isNaN(camZoom)) camZoom = 0.015;
					if(Math.isNaN(hudZoom)) hudZoom = 0.03;

					FlxG.camera.zoom += camZoom;
					camHUD.zoom += hudZoom;
				}

			case 'Trigger BG Ghouls':
				if(curStage == 'schoolEvil' && !ClientPrefs.lowQuality) {
					bgGhouls.dance(true);
					bgGhouls.visible = true;
				}

			case 'Play Animation':
				//trace('Anim to play: ' + value1);
				var char:Character = dad;
				switch(value2.toLowerCase().trim()) {
					case 'bf' | 'boyfriend':
						char = boyfriend;
					case 'gf' | 'girlfriend':
						char = gf;
					default:
						var val2:Int = Std.parseInt(value2);
						if(Math.isNaN(val2)) val2 = 0;

						switch(val2) {
							case 1: char = boyfriend;
							case 2: char = gf;
						}
				}

				if (char != null)
				{
					char.playAnim(value1, true);
					char.specialAnim = true;
				}

			case 'Camera Follow Pos':
				var val1:Float = Std.parseFloat(value1);
				var val2:Float = Std.parseFloat(value2);
				if(Math.isNaN(val1)) val1 = 0;
				if(Math.isNaN(val2)) val2 = 0;

				isCameraOnForcedPos = false;
				isEventWorking = false;
				if(!Math.isNaN(Std.parseFloat(value1)) || !Math.isNaN(Std.parseFloat(value2)))
				{
					camFollow.x = val1;
					camFollow.y = val2;
					isCameraOnForcedPos = true;
					isEventWorking = true;
				}

			case 'Alt Idle Animation':
				var char:Character = dad;
				switch(value1.toLowerCase().trim()) {
					case 'gf' | 'girlfriend':
						char = gf;
					case 'boyfriend' | 'bf':
						char = boyfriend;
					default:
						var val:Int = Std.parseInt(value1);
						if(Math.isNaN(val)) val = 0;

						switch(val) {
							case 1: char = boyfriend;
							case 2: char = gf;
						}
				}

				if (char != null)
				{
					char.idleSuffix = value2;
					char.recalculateDanceIdle();
				}

			case 'Screen Shake':
				var valuesArray:Array<String> = [value1, value2];
				var targetsArray:Array<FlxCamera> = [camGame, camHUD];
				for (i in 0...targetsArray.length) {
					var split:Array<String> = valuesArray[i].split(',');
					var duration:Float = 0;
					var intensity:Float = 0;
					if(split[0] != null) duration = Std.parseFloat(split[0].trim());
					if(split[1] != null) intensity = Std.parseFloat(split[1].trim());
					if(Math.isNaN(duration)) duration = 0;
					if(Math.isNaN(intensity)) intensity = 0;

					if(duration > 0 && intensity != 0) {
						targetsArray[i].shake(intensity, duration);
					}
				}


			case 'Change Character':
				var charType:Int = 0;
				switch(value1.toLowerCase().trim()) {
					case 'gf' | 'girlfriend':
						charType = 2;
					case 'dad' | 'opponent':
						charType = 1;
					case 'boyfriend2' | 'bf2' | '3':
						charType = 3;
					default:
						charType = Std.parseInt(value1);
						if(Math.isNaN(charType)) charType = 0;
				}

				switch(charType) {
					case 0:
						if(boyfriend.curCharacter != value2) {
							if(!boyfriendMap.exists(value2)) {
								addCharacterToList(value2, charType);
							}

							if (SONG.changeArrows) {
								playerStrums.forEach(function(note:StrumNote) 
								{
									var boy = boyfriendMap.get(value2);
									var sk = boy.noteSkin;
									if (sk == "") sk = 'NOTE_assets';
									note.reloadNote(sk);
								});
							}

							var lastAlpha:Float = boyfriend.alpha;
							boyfriend.alpha = 0.00001;
							boyfriend = boyfriendMap.get(value2);
							boyfriend.alpha = lastAlpha;
							iconP1.changeIcon(boyfriend.healthIcon);
						}
						setOnLuas('boyfriendName', boyfriend.curCharacter);

					case 1:
						if(dad.curCharacter != value2) {
							if(!dadMap.exists(value2)) {
								addCharacterToList(value2, charType);
							}

							if (SONG.changeArrows) {
								opponentStrums.forEach(function(note:StrumNote)
								{
									var dad = dadMap.get(value2);
									var sk = dad.noteSkin;
									if (sk == "") sk = 'NOTE_assets';
									note.reloadNote(sk);
								});
							}

							var wasGf:Bool = dad.curCharacter.startsWith('gf');
							var lastAlpha:Float = dad.alpha;
							dad.alpha = 0.00001;
							dad = dadMap.get(value2);
							if(!dad.curCharacter.startsWith('gf')) {
								if(wasGf && gf != null) {
									gf.visible = true;
								}
							} else if(gf != null) {
								gf.visible = false;
							}
							dad.alpha = lastAlpha;
							iconP2.changeIcon(dad.healthIcon);
						}
						setOnLuas('dadName', dad.curCharacter);

					case 2:
						if(gf != null)
						{
							if(gf.curCharacter != value2)
							{
								if(!gfMap.exists(value2))
								{
									addCharacterToList(value2, charType);
								}

								var lastAlpha:Float = gf.alpha;
								gf.alpha = 0.00001;
								gf = gfMap.get(value2);
								gf.alpha = lastAlpha;
							}
							setOnLuas('gfName', gf.curCharacter);
						}
					case 3:
						if(gf.curCharacter != value2)
						{
							if(!gfMap.exists(value2))
							{
								addCharacterToList(value2, charType);
							}

							var lastAlpha:Float = boyfriend2.alpha;
							boyfriend2.alpha = 0.00001;
							boyfriend2 = boyfriend2Map.get(value2);
							boyfriend2.alpha = lastAlpha;
							iconP3.changeIcon(boyfriend2.healthIcon);
						}
						setOnLuas('gfName', boyfriend2.curCharacter);
				}
				reloadHealthBarColors();
				reloadTimeBarColors();

			case 'BG Freaks Expression':
				if(bgGirls != null) bgGirls.swapDanceType();

			case 'Opponent Anim':
				var activeChar:Int = 0;
				var gfSection:Int = Std.parseInt(value2);

				switch(value1) {
					case 'dad' | 'opponent' | 'superidol':
						activeChar = 0;
					case 'gf' | 'girlfriend' | 'gfidol':
						activeChar = 1;
					case 'both':
						activeChar = 2;
					default:
						activeChar = Std.parseInt(value1);
						if(Math.isNaN(activeChar)) activeChar = 0;
				}

				switch(activeChar) {
					case 0:
						isDad = true;
						isGF = false;
						gf.dance();

					case 1:
						isDad = false;
						isGF = true;
						dad.dance();

					case 2:
						isDad = true;
						isGF = true;

				}

				switch (gfSection) {
					case 0:
						isCameraOnForcedPos = false;
					case 1:
						camFollow.set(gf.getMidpoint().x, gf.getMidpoint().y - 50);
						//defaultCamZoom = 0.9;
						isCameraOnForcedPos = true;
				}

			case 'Super Fade':
				var fade:Int = Std.parseInt(value1);

				blammedLightsBlackTween = FlxTween.tween(dad, {alpha: fade}, 1, {ease: FlxEase.quadInOut,
					onComplete: function(twn:FlxTween) {
						blammedLightsBlackTween = null;
					}
				});

			case 'Super Flash':
				var flashValue:Int = Std.parseInt(value1);

				if (ClientPrefs.flashing)
					FlxG.camera.flash(FlxColor.WHITE, flashValue);
				else
					FlxG.camera.flash(FlxColor.BLACK, flashValue);

			case 'DefeatDark':
				var charType:Int = Std.parseInt(value1);
				if (Math.isNaN(charType))
					charType = 0;

				switch (charType)
				{
					case 0:
						defeatblack.alpha = 0;
						defeatDark = false;
						scoreTxt.setFormat(Paths.font("vcr.ttf"), 20, FlxColor.RED, CENTER, FlxTextBorderStyle.OUTLINE, FlxColor.BLACK);
						scoreTxt.y = healthBarBG.y + 36;
						iconP1.visible = true;
						iconP2.visible = true;
					case 1:
						defeatblack.alpha += 1;
						defeatDark = true;
						scoreTxt.setFormat(Paths.font("vcr.ttf"), 16, FlxColor.WHITE, CENTER, FlxTextBorderStyle.OUTLINE, FlxColor.BLACK);
						scoreTxt.y = healthBarBG.y + 62;
						iconP1.visible = false;
						iconP2.visible = false;
				}

			case 'flash':
				var charType:Int = Std.parseInt(value1);
				if (Math.isNaN(charType))
					charType = 0;
				// also used for identity crisis idk why dont blame me shrug
				switch (charType)
				{
					case 0:
						camGame.flash(FlxColor.WHITE, 0.35);
					case 1:
						camGame.flash(FlxColor.WHITE, 0.35);
					case 2:
						camGame.flash(FlxColor.WHITE, 0.55);
					case 3:
						camGame.flash(FlxColor.WHITE, 0.55);
					case 4:
						camGame.flash(FlxColor.WHITE, Std.parseInt(value2));
						
				}

			case 'Zoom Amount':
				var zoom:Float = Std.parseFloat(value1);

				defaultCamZoom = zoom;

			case 'Change Scroll Speed':
				if (songSpeedType == "constant")
					return;
				var val1:Float = Std.parseFloat(value1);
				var val2:Float = Std.parseFloat(value2);
				if(Math.isNaN(val1)) val1 = 1;
				if(Math.isNaN(val2)) val2 = 0;

				var newValue:Float = SONG.speed * ClientPrefs.getGameplaySetting('scrollspeed', 1) * val1;

				if(val2 <= 0)
				{
					songSpeed = newValue;
				}
				else
				{
					songSpeedTween = FlxTween.tween(this, {songSpeed: newValue}, val2 / playbackRate, {ease: FlxEase.linear, onComplete:
						function (twn:FlxTween)
						{
							songSpeedTween = null;
						}
					});
				}

			case 'Defeat Fade':
				var charType:Int = Std.parseInt(value1);
				if (Math.isNaN(charType))
					charType = 0;

				switch (charType)
				{
					case 0:
						FlxTween.tween(bodies, {alpha: 1}, 0.7, {ease: FlxEase.quadInOut});
						FlxTween.tween(bodies2, {alpha: 1}, 0.7, {ease: FlxEase.quadInOut});
						FlxTween.tween(bodiesfront, {alpha: 1}, 0.7, {ease: FlxEase.quadInOut});
					case 1:
						FlxTween.tween(bodies, {alpha: 0}, 0.7, {ease: FlxEase.quadInOut});
						FlxTween.tween(bodies2, {alpha: 0}, 0.7, {ease: FlxEase.quadInOut});
						FlxTween.tween(bodiesfront, {alpha: 0}, 0.7, {ease: FlxEase.quadInOut});
				}

			case 'Defeat Retro':
				var charType:Int = Std.parseInt(value1);
				if (Math.isNaN(charType))
					charType = 0;

				switch (charType)
				{
					case 0:
						bodiesfront.alpha = 0;
						lightoverlay.alpha = 0;
						mainoverlayDK.alpha = 1;
					case 1:
						triggerEventNote('Change Character', '0', 'bf-defeat-scared');
						triggerEventNote('Change Character', '1', 'black');
						bodiesfront.alpha = 1;
						lightoverlay.alpha = 1;
						mainoverlayDK.alpha = 0;
				}

			case 'Set Property':
				var killMe:Array<String> = value1.split('.');
				if(killMe.length > 1) {
					FunkinLua.setVarInArray(FunkinLua.getPropertyLoopThingWhatever(killMe, true, true), killMe[killMe.length-1], value2);
				} else {
					FunkinLua.setVarInArray(this, value1, value2);
				}
			case 'Set Camera Zoom':
				var val1 = Std.parseFloat(value1);
				var val2 = Std.parseFloat(value2);
				var val3 = Std.parseFloat(value3);
				var dynamicVal:Dynamic = val3;

				if (!Math.isNaN(val1))
				{
					if (Math.isNaN(val2))
					{
						defaultCamZoom = val1;
					}
					else
					{
						modchartTweens.set("Camera Zoom", FlxTween.tween(camGame, {zoom: val1}, val2, {ease: (Math.isNaN(val3) ? FlxEase.sineInOut : dynamicVal),
							onComplete: function(twn:FlxTween)
							{
								defaultCamZoom = camGame.zoom;
								callOnLuas('onTweenCompleted', ["Camera Zoom"]);
								modchartTweens.remove("Camera Zoom");
							}
						}));
					}
				} 
				else if (Math.isNaN(val1))
				{
					trace("bro imagine not putting something in value 1, couldnt be me lol");
					if (chartingMode) {
						Lib.application.window.alert("Bro you didn't put a value 1 in the \"Set Camera Zoom\"", "Script Error!");
					}
				}
			case 'Flash Camera':
				var val1 = Std.parseFloat(value1);
				var val2 = Std.parseInt(value2);

				if (value3 == "camHUD" || (value3 != "camOther" && value3 != "camGame"))
				{
					blackFlash.cameras = [camHUD];
					whiteFlash.cameras = [camHUD];
					redFlash.cameras = [camHUD];
					customFlash.cameras = [camHUD];
				}
				else if (value3 == "camOther")
				{
					blackFlash.cameras = [camOther];
					whiteFlash.cameras = [camOther];
					redFlash.cameras = [camOther];
					customFlash.cameras = [camOther];
				}
				else if (value3 == "camGame")
				{
					blackFlash.cameras = [camGame];
					whiteFlash.cameras = [camGame];
					redFlash.cameras = [camGame];
					customFlash.cameras = [camGame];
				}

				switch (val2)
				{
					case 0:
						blackFlash.alpha = 1;
						blackFlash.visible = true;
						FlxTween.tween(blackFlash, {alpha: 0.0001}, val1, {ease: FlxEase.linear});
					case 1:
						whiteFlash.alpha = 1;
						whiteFlash.visible = true;
						FlxTween.tween(whiteFlash, {alpha: 0.0001}, val1, {ease: FlxEase.linear});
					case 2:
						redFlash.alpha = 1;
						redFlash.visible = true;
						FlxTween.tween(redFlash, {alpha: 0.0001}, val1, {ease: FlxEase.linear});
					case 3:
						customFlash.alpha = 1;
						customFlash.visible = true;
						FlxTween.tween(customFlash, {alpha: 0.0001}, val1, {ease: FlxEase.linear});
				}
			case 'Add Cinematic Bars':
				var val1 = Std.parseFloat(value1);
				var val2 = Std.parseFloat(value2);

				setupCinematicBars(val1, val2);
			case 'Change Camera Zoom':
				var val1:Float = Std.parseFloat(value1);
				var val2:Float = Std.parseFloat(value2);

				if (Math.isNaN(val1))
					val1 = defaultCamZoom;

				// if value2 isn't a numerical value, then rely on defaultCamZoom
				if (Math.isNaN(val2))
				{
					var yes:Bool = false;
					if (value2 == 'true')
						yes = true;
	
					defaultCamZoom = val1;
					if (yes)
						FlxG.camera.zoom = val1;
				}
				else
				{
					Actuate.tween(FlxG.camera, val2, {zoom: val1}).ease(Linear.easeNone).onComplete(function()
					{
						defaultCamZoom = val1;
					});
				}
			case 'Change Combo UI':
				//value1.replace('.', '/');
				pixelShitPart1 = value1;
				pixelShitPart2 = value2;
	
			case 'Change Health Graphic':
				var stringArray:Array<String> = value1.trim().split(',');
				var offsetArray:Array<String> = value2.trim().split(',');
				if (value2 == '') offsetArray = ['0', '0'];

				reloadHealthBarGraphic(stringArray[0], stringArray[1], Std.parseFloat(offsetArray[0]), Std.parseFloat(offsetArray[1]));
				
			case 'Change Time Graphic':
				var stringArray:Array<String> = value1.trim().split(',');
				var offsetArray:Array<String> = value2.trim().split(',');
				if (value2 == '') offsetArray = ['0', '0'];

				reloadTimeBarGraphic(stringArray[0], stringArray[1], Std.parseFloat(offsetArray[0]), Std.parseFloat(offsetArray[1]));

			case 'Strumline Visibility':
				var strum:FlxTypedGroup<StrumNote>;
				var val2:Float = Std.parseFloat(value2);
				var val3:Float = Std.parseFloat(value3);

				if (Math.isNaN(val2))
					val2 = 1;
				else if (val2 == 0)
					val2 = 0.0001;

				trace(value1 + ' & ' + value2 + ' & ' + value3);

				switch (value1)
				{
					case 'dad' | 'opponent':
					{
						strum = opponentStrums;

						if (ClientPrefs.middleScroll)
							val2 *= 0.35;
					}
					case 'bf' | 'boyfriend' | 'Boyfriend' | 'BOYFRIEND':
						strum = playerStrums;
					default:
						strum = playerStrums;
				}

				for (i in 0...4)
				{
					FlxTween.cancelTweensOf(strum.members[i]);
					FlxTween.tween(strum.members[i], {alpha: val2}, val3, {ease: FlxEase.circOut});
				}
		}
		callOnLuas('onEvent', [eventName, value1, value2, value3]);
	}

	function moveCameraSection():Void
	{
		if(SONG.notes[curSection] == null) return;

		if (gf != null && SONG.notes[curSection].gfSection)
		{
			focusedCharacter = gf;
			camFollow.set(gf.getMidpoint().x, gf.getMidpoint().y);
			camFollow.x += gf.cameraPosition[0] + girlfriendCameraOffset[0] + gfCameraOffX;
			camFollow.y += gf.cameraPosition[1] + girlfriendCameraOffset[1] + gfCameraOffY;
			tweenCamIn();
			callOnLuas('onMoveCamera', ['gf']);
			if (script != null)
			{
				script.setVariable("onMoveCamera", gf);
			}
			return;
		}

		if (boyfriend2 != null && SONG.notes[curSection].bf2Section)
		{
			focusedCharacter = boyfriend2;
			callOnLuas('onMoveCamera', ['boyfriend2']);
			camFollow.set(boyfriend2.getMidpoint().x - 100, boyfriend2.getMidpoint().y - 100);
			camFollow.x -= boyfriend.cameraPosition[0] - boyfriendCameraOffset[0] + bf2CameraOffX;
			camFollow.y += boyfriend.cameraPosition[1] + boyfriendCameraOffset[1] + bf2CameraOffY;
			if (script != null)
			{
				script.setVariable("onMoveCamera", boyfriend2);
			}
			return;
		}

		if (!SONG.notes[curSection].mustHitSection)
		{
			moveCamera(true);
			callOnLuas('onMoveCamera', ['dad']);
			if (script != null)
			{
				script.setVariable("onMoveCamera", dad);
			}
		}
		else
		{
			moveCamera(false);
			callOnLuas('onMoveCamera', ['boyfriend']);
			if (script != null)
			{
				script.setVariable("onMoveCamera", boyfriend);
			}
		}
	}

	var cameraTwn:FlxTween;
	public function moveCamera(isDad:Bool)
	{
		if(isDad)
		{
			focusedCharacter = dad;
			camFollow.set(dad.getMidpoint().x + 150, dad.getMidpoint().y - 100);
			camFollow.x += dad.cameraPosition[0] + opponentCameraOffset[0] + dadCameraOffX;
			camFollow.y += dad.cameraPosition[1] + opponentCameraOffset[1] + dadCameraOffY;
			tweenCamIn();
		}
		else
		{
			focusedCharacter = boyfriend;
			camFollow.set(boyfriend.getMidpoint().x - 100, boyfriend.getMidpoint().y - 100);
			camFollow.x -= boyfriend.cameraPosition[0] - boyfriendCameraOffset[0] + bfCameraOffX;
			camFollow.y += boyfriend.cameraPosition[1] + boyfriendCameraOffset[1] + bfCameraOffY;

			if (Paths.formatToSongPath(SONG.song) == 'tutorial' && cameraTwn == null && FlxG.camera.zoom != 1)
			{
				cameraTwn = FlxTween.tween(FlxG.camera, {zoom: 1}, (Conductor.stepCrochet * 4 / 1000), {ease: FlxEase.elasticInOut, onComplete:
					function (twn:FlxTween)
					{
						cameraTwn = null;
					}
				});
			}
		}
	}

	function tweenCamIn()
	{
		if (Paths.formatToSongPath(SONG.song) == 'tutorial' && cameraTwn == null && FlxG.camera.zoom != 1.3) {
			cameraTwn = FlxTween.tween(FlxG.camera, {zoom: 1.3}, (Conductor.stepCrochet * 4 / 1000), {ease: FlxEase.elasticInOut, onComplete:
				function (twn:FlxTween) {
					cameraTwn = null;
				}
			});
		}
	}

	function snapCamFollowToPos(x:Float, y:Float) {
		camFollow.set(x, y);
		camFollowPos.setPosition(x, y);
	}

	public function finishSong(?ignoreNoteOffset:Bool = false):Void
	{
		var finishCallback:Void->Void = endSong; //In case you want to change it in a specific song.

		updateTime = false;
		FlxG.sound.music.volume = 0;
		vocals.volume = 0;
		vocals.pause();
		if(ClientPrefs.noteOffset <= 0 || ignoreNoteOffset) {
			finishCallback();
		} else {
			finishTimer = new FlxTimer().start(ClientPrefs.noteOffset / 1000, function(tmr:FlxTimer) {
				finishCallback();
			});
		}
	}


	public var transitioning = false;
	public function endSong():Void
	{
		//Should kill you if you tried to cheat
		if(!startingSong) {
			if (!ClientPrefs.smoothHealth)
			{
				notes.forEach(function(daNote:Note) {
					if(daNote.strumTime < songLength - Conductor.safeZoneOffset) {
						health -= 0.05 * healthLoss;
					}
				});
				for (daNote in unspawnNotes) {
					if(daNote.strumTime < songLength - Conductor.safeZoneOffset) {
						health -= 0.05 * healthLoss;
					}
				}
			}
			else
			{
				notes.forEach(function(daNote:Note) {
					if(daNote.strumTime < songLength - Conductor.safeZoneOffset) {
						healthTween(-0.05 * healthLoss);
					}
				});
				for (daNote in unspawnNotes) {
					if(daNote.strumTime < songLength - Conductor.safeZoneOffset) {
						healthTween(-0.05 * healthLoss);
					}
				}
			}

			if(doDeathCheck()) {
				return;
			}
		}

		timeBarBG.visible = false;
		timeBar.visible = false;
		timeTxt.visible = false;
		canPause = false;
		endingSong = true;
		camZooming = false;
		inCutscene = false;
		updateTime = false;
		if (ClientPrefs.gameHuds == "New HUD") totalTxt.text = FlxStringUtil.formatTime(Math.floor(songLength / 1000), false);

		deathCounter = 0;
		seenCutscene = false;

		#if ACHIEVEMENTS_ALLOWED
		if(achievementObj != null) {
			return;
		} else {
			var achieve:String = checkForAchievement(['week1_nomiss', 'week2_nomiss', 'week3_nomiss', 'week4_nomiss',
				'week5_nomiss', 'week6_nomiss', 'week7_nomiss', 'ur_bad',
				'ur_good', 'hype', 'two_keys', 'toastie', 'debugger']);

			if(achieve != null) {
				startAchievement(achieve);
				return;
			}
		}
		#end

		var ret:Dynamic = callOnLuas('onEndSong', [], false);
		if(ret != FunkinLua.Function_Stop && !transitioning) {
			if (SONG.validScore)
			{
				#if !switch
				var percent:Float = ratingPercent;
				if(Math.isNaN(percent)) percent = 0;
				Highscore.saveScore(SONG.song, songScore, storyDifficulty, percent);
				#end
			}
			playbackRate = 1;

			if (chartingMode)
			{
				openChartEditor();
				return;
			}

			if (isStoryMode)
				{
					campaignScore += songScore;
					campaignMisses += songMisses;
	
					storyPlaylist.remove(storyPlaylist[0]);
	
					if (storyPlaylist.length <= 0)
					{
						WeekData.loadTheFirstEnabledMod();
						FlxG.sound.playMusic(Paths.music('freakyMenu'));
	
						cancelMusicFadeTween();
						if(FlxTransitionableState.skipNextTransIn) {
							CustomFadeTransition.nextCamera = null;
						}
						if(FlxTransitionableState.skipNextTransIn) {
							CustomFadeTransitionNEW.nextCamera = null;
						}
						if (SONG.song == 'Haxxer') MusicBeatState.switchState(new End());
						MusicBeatState.switchState(new StoryMenuState());
	
						// if ()
						if(!ClientPrefs.getGameplaySetting('practice', false) && !ClientPrefs.getGameplaySetting('botplay', false)) {
							StoryMenuState.weekCompleted.set(WeekData.weeksList[storyWeek], true);
	
							if (SONG.validScore)
							{
								Highscore.saveWeekScore(WeekData.getWeekFileName(), campaignScore, storyDifficulty);
							}
	
							FlxG.save.data.weekCompleted = StoryMenuState.weekCompleted;
							FlxG.save.flush();
						}
						changedDifficulty = false;
					}
					else
					{
						var difficulty:String = CoolUtil.getDifficultyFilePath();
	
						trace('LOADING NEXT SONG');
						trace(Paths.formatToSongPath(PlayState.storyPlaylist[0]) + difficulty);
	
						var winterHorrorlandNext = (Paths.formatToSongPath(SONG.song) == "eggnog");
						if (winterHorrorlandNext)
						{
							var blackShit:FlxSprite = new FlxSprite(-FlxG.width * FlxG.camera.zoom,
								-FlxG.height * FlxG.camera.zoom).makeGraphic(FlxG.width * 3, FlxG.height * 3, FlxColor.BLACK);
							blackShit.scrollFactor.set();
							add(blackShit);
							camHUD.visible = false;
	
							FlxG.sound.play(Paths.sound('Lights_Shut_off'));
						}
	
						FlxTransitionableState.skipNextTransIn = true;
						FlxTransitionableState.skipNextTransOut = true;
	
						prevCamFollow = camFollow;
						prevCamFollowPos = camFollowPos;
	
						PlayState.SONG = Song.loadFromJson(PlayState.storyPlaylist[0] + difficulty, PlayState.storyPlaylist[0]);
						FlxG.sound.music.stop();
	
						if(winterHorrorlandNext) {
							new FlxTimer().start(1.5, function(tmr:FlxTimer) {
								cancelMusicFadeTween();
								LoadingState.loadAndSwitchState(new PlayState());
							});
						} else {
							cancelMusicFadeTween();
							LoadingState.loadAndSwitchState(new PlayState());
						}
					}
				}
				else
				{
					trace('WENT BACK TO FREEPLAY??');
					WeekData.loadTheFirstEnabledMod();
					cancelMusicFadeTween();
					if(FlxTransitionableState.skipNextTransIn) {
						CustomFadeTransition.nextCamera = null;
					}
					if(FlxTransitionableState.skipNextTransIn) {
						CustomFadeTransitionNEW.nextCamera = null;
					}
					MusicBeatState.switchState(new FreeplayState());
					FlxG.sound.playMusic(Paths.music('freakyMenu'));
					changedDifficulty = false;
				}
				transitioning = true;
			}
	}

	#if ACHIEVEMENTS_ALLOWED
	var achievementObj:AchievementObject = null;
	function startAchievement(achieve:String) {
		achievementObj = new AchievementObject(achieve, camOther);
		achievementObj.onFinish = achievementEnd;
		add(achievementObj);
		trace('Giving achievement ' + achieve);
	}
	function achievementEnd():Void
	{
		achievementObj = null;
		if(endingSong && !inCutscene) {
			endSong();
		}
	}
	#end

	public function NearlyEquals(value1:Float, value2:Float, unimportantDifference:Float = 10):Bool
	{
		return Math.abs(FlxMath.roundDecimal(value1, 1) - FlxMath.roundDecimal(value2, 1)) < unimportantDifference;
	}

	public function KillNotes()
	{
		while(notes.length > 0) {
			var daNote:Note = notes.members[0];
			daNote.active = false;
			daNote.visible = false;

			daNote.kill();
			notes.remove(daNote, true);
			daNote.destroy();
		}
		unspawnNotes = [];
		eventNotes = [];
	}

	function doGhostAnim(char:String, animToPlay:String)
	{
		if (doItBro == true || !ClientPrefs.ghostAnims) 
			return;
		var ghost:FlxSprite = dadGhost;
		var player:Character = dad;

		switch(char.toLowerCase().trim()){
			case 'bf' | 'boyfriend' | '0':
				ghost = bfGhost;
				player = boyfriend;
			case 'dad' | 'opponent' | '1':
				ghost = dadGhost;
				player = dad;
			case 'boyfriend2' | 'bf2' | '3':
				ghost = bf2Ghost;
				player = boyfriend2;
		}

		ghost.frames = player.frames;
		ghost.animation.copyFrom(player.animation);
		ghost.x = player.x;
		ghost.y = player.y;
		ghost.animation.play(animToPlay, true);
		try {
			ghost.offset.set(player.animOffsets.get(animToPlay)[0], player.animOffsets.get(animToPlay)[1]);
		}
		catch (e:Dynamic)
		{
			trace(e);
		}
		ghost.flipX = player.flipX;
		ghost.flipY = player.flipY;
		ghost.blend = HARDLIGHT;
		ghost.alpha = 0.9;
		ghost.visible = true;

		switch(SONG.song.toLowerCase())
		{
			case "young girl a":
				FlxG.camera.zoom += 0.015;
				camHUD.zoom += 0.003;
			default:
				FlxG.camera.zoom += 0.015;
				camHUD.zoom += 0.03;
		}

		var amount = 1.25;

		switch (char.toLowerCase().trim())
		{
			case 'bf' | 'boyfriend' | '0':
				if (bfGhostTween != null)
					bfGhostTween.cancel();
				/*if (SONG.song.toLowerCase() == "young girl a") {
					if (bfGhostTween2 != null)
						bfGhostTween2.cancel();
					if (bfGhostTween3 != null)
						bfGhostTween3.cancel();
				}*/

				ghost.color = FlxColor.fromRGB(boyfriend.healthColorArray[0] + 50, boyfriend.healthColorArray[1] + 50, boyfriend.healthColorArray[2] + 50);
				bfGhostTween = FlxTween.tween(bfGhost, {alpha: 0.001}, 0.75, {
					ease: FlxEase.linear,
					onComplete: function(twn:FlxTween)
					{
						bfGhostTween = null;
					}
				});
				/*if (SONG.song.toLowerCase() == "young girl a") {
					bfGhostTween2 = FlxTween.tween(bfGhost.scale, {x: amount}, 0.75, {
						ease: FlxEase.linear,
						onComplete: function(twn:FlxTween)
						{
							bfGhostTween2 = null;
						}
					});
					bfGhostTween3 = FlxTween.tween(bfGhost.scale, {y: amount}, 0.75, {
						ease: FlxEase.linear,
						onComplete: function(twn:FlxTween)
						{
							bfGhostTween3 = null;
						}
					});
				}*/


			case 'dad' | 'opponent' | '1':
				if (dadGhostTween != null)
					dadGhostTween.cancel();
				if (SONG.song.toLowerCase() == "young girl a") {
					if (dadGhostTween2 != null)
						dadGhostTween2.cancel();
					if (dadGhostTween3 != null)
						dadGhostTween3.cancel();
				}

				ghost.color = FlxColor.fromRGB(dad.healthColorArray[0] + 50, dad.healthColorArray[1] + 50, dad.healthColorArray[2] + 50);
				dadGhostTween = FlxTween.tween(dadGhost, {alpha: 0.0001}, 0.75, {
					ease: FlxEase.linear,
					onComplete: function(twn:FlxTween)
					{
						dadGhostTween = null;
					}
				});
				if (SONG.song.toLowerCase() == "young girl a") {
					dadGhostTween2 = FlxTween.tween(dadGhost.scale, {x: amount}, 0.75, {
						ease: FlxEase.linear,
						onComplete: function(twn:FlxTween)
						{
							dadGhostTween2 = null;
						}
					});
					dadGhostTween3 = FlxTween.tween(dadGhost.scale, {y: amount}, 0.75, {
						ease: FlxEase.linear,
						onComplete: function(twn:FlxTween)
						{
							dadGhostTween3 = null;
						}
					});
				}

			case 'boyfriend2' | 'bf2' | '3':
				if (bf2GhostTween != null)
					bf2GhostTween.cancel();
				if (SONG.song.toLowerCase() == "young girl a") {
					if (bf2GhostTween2 != null)
						bf2GhostTween2.cancel();
					if (bf2GhostTween3 != null)
						bf2GhostTween3.cancel();
				}

				boyfriend2.color = FlxColor.fromRGB(boyfriend.healthColorArray[0] + 50, boyfriend.healthColorArray[1] + 50, boyfriend.healthColorArray[2] + 50);
				bf2GhostTween = FlxTween.tween(boyfriend2, {alpha: 0.0001}, 0.75, {
					ease: FlxEase.linear,
					onComplete: function(twn:FlxTween)
					{
						bf2GhostTween = null;
					}
				});
				if (SONG.song.toLowerCase() == "young girl a") {
					bf2GhostTween2 = FlxTween.tween(boyfriend2.scale, {x: amount}, 0.75, {
						ease: FlxEase.linear,
						onComplete: function(twn:FlxTween)
						{
							bf2GhostTween2 = null;
						}
					});
					bf2GhostTween3 = FlxTween.tween(boyfriend2.scale, {y: amount}, 0.75, {
						ease: FlxEase.linear,
						onComplete: function(twn:FlxTween)
						{
							bf2GhostTween3 = null;
						}
					});
				}
		}
	}

	public var totalPlayed:Int = 0;
	public var totalNotesHit:Float = 0.0;

	public var showCombo:Bool = true;
	public var showComboNum:Bool = true;
	public var showRating:Bool = true;

	private function cachePopUpScore()
	{
		if (isPixelStage)
		{
			pixelShitPart1 = 'pixelUI/';
			pixelShitPart2 = '-pixel';
		}

		Paths.image(pixelShitPart1 + "sick" + pixelShitPart2);
		Paths.image(pixelShitPart1 + "good" + pixelShitPart2);
		Paths.image(pixelShitPart1 + "bad" + pixelShitPart2);
		Paths.image(pixelShitPart1 + "shit" + pixelShitPart2);
		Paths.image(pixelShitPart1 + "combo" + pixelShitPart2);
		
		for (i in 0...10) {
			Paths.image(pixelShitPart1 + 'num' + i + pixelShitPart2);
		}
	}

	private function justCombo():Void
	{
		var placement:String = Std.string(combo);

		var coolText:FlxText = new FlxText(0, 0, 0, placement, 32);
		coolText.screenCenter();
		coolText.x = FlxG.width * 0.35;

		if (curStage.startsWith('school'))
		{
			pixelShitPart1 = 'weeb/pixelUI/';
			pixelShitPart2 = '-pixel';
		}

		var seperatedScore:Array<Int> = [];

		seperatedScore.push(Math.floor(combo / 100));
		seperatedScore.push(Math.floor((combo - (seperatedScore[0] * 100)) / 10));
		seperatedScore.push(combo % 10);

		var daLoop:Int = 0;
		for (i in seperatedScore)
		{
			var seperatedScore:Array<Int> = [];

			if (combo >= 1000) {
				seperatedScore.push(Math.floor(combo / 1000) % 10);
			}
			seperatedScore.push(Math.floor(combo / 100) % 10);
			seperatedScore.push(Math.floor(combo / 10) % 10);
			seperatedScore.push(combo % 10);
	
			var daLoop:Int = 0;
			var xThing:Float = 0;
			if (!ClientPrefs.comboStacking)
			{
				if (lastCombo != null) lastCombo.kill();
			}
			if (lastScore != null)
			{
				while (lastScore.length > 0)
				{
					lastScore[0].kill();
					lastScore.remove(lastScore[0]);
				}
			}
			for (i in seperatedScore)
			{
				var numScore:FlxSprite = new FlxSprite().loadGraphic(Paths.image(pixelShitPart1 + 'num' + Std.int(i) + pixelShitPart2));
				numScore.screenCenter();
				numScore.x = coolText.x + (43 * daLoop) - 90;
				numScore.y += 80 + 200;
				
				if (!ClientPrefs.comboStacking)
					lastScore.push(numScore);
	
				if (!PlayState.isPixelStage)
				{
					numScore.antialiasing = ClientPrefs.globalAntialiasing;
					numScore.setGraphicSize(Std.int(numScore.width * 0.5));
				}
				else
				{
					numScore.setGraphicSize(Std.int(numScore.width * daPixelZoom));
				}
				numScore.updateHitbox();
	
				numScore.acceleration.y = FlxG.random.int(200, 300);
				numScore.velocity.y -= FlxG.random.int(140, 160);
				numScore.velocity.x = FlxG.random.float(-5, 5);
				numScore.visible = !ClientPrefs.hideHud;
	
				//if (combo >= 10 || combo == 0)
				if(showComboNum)
					add(numScore);
	
				numScoreTween = FlxTween.tween(numScore, {alpha: 0}, 0.2, {
					onComplete: function(tween:FlxTween)
					{
						numScore.destroy();
					},
					startDelay: Conductor.crochet * 0.002
				});
	
				daLoop++;
				if(numScore.x > xThing) xThing = numScore.x;
			}
			coolText.text = Std.string(seperatedScore);
		}
	}

	private function popUpJustRating():Void
	{
		var placement:String = Std.string(combo);

		var coolText:FlxText = new FlxText(0, 0, 0, placement, 32);
		coolText.screenCenter();
		coolText.x = FlxG.width * 0.35;

		var rating:FlxSprite = new FlxSprite();

		var daLoop:Int = 0;

		if (PlayState.isPixelStage)
		{
			pixelShitPart1 = 'pixelUI/';
			pixelShitPart2 = '-pixel';
		}

		rating.loadGraphic(Paths.image(pixelShitPart1 + "miss" + pixelShitPart2));
		rating.screenCenter();
		rating.y += 200 + offsetY;
		rating.x = coolText.x - 40 + offsetX;
		rating.y -= 60;
		rating.acceleration.y = 550 * playbackRate * playbackRate;
		rating.velocity.y -= FlxG.random.int(140, 175) * playbackRate;
		rating.velocity.x -= FlxG.random.int(0, 10) * playbackRate;
		rating.visible = (!ClientPrefs.hideHud && showRating);
		if (ClientPrefs.dynamicRatings)
		{
			rating.angle = FlxG.random.int(-10, 10);
		}

		ratingGroup.add(rating);
		
		if (!ClientPrefs.comboStacking)
		{
			if (lastRating != null) lastRating.kill();
			lastRating = rating;
		}

		if (!PlayState.isPixelStage)
		{
			rating.setGraphicSize(Std.int(rating.width * 0.7));
			rating.antialiasing = ClientPrefs.globalAntialiasing;
		}
		else
		{
			rating.setGraphicSize(Std.int(rating.width * daPixelZoom * 0.85));
		}

		rating.updateHitbox();

		ratingTween = FlxTween.tween(rating, {alpha: 0}, 0.2, {
			startDelay: Conductor.crochet * 0.001
		});

		if (ClientPrefs.dynamicRatings)
		{
			ratingTween = FlxTween.tween(rating.scale, {x: 0}, 0.2, {
				startDelay: Conductor.crochet * 0.001
			});
	
			ratingTween = FlxTween.tween(rating.scale, {y: 0}, 0.2, {
				startDelay: Conductor.crochet * 0.001
			});
		}
	}

	public var healthMultiplier:Float = 1;


	private function popUpNoteCombo(elapsed:Float = 0):Void
	{
		/**
		 * original script made by stilic
		 * i just ported it to Haxe
		 * :)
		*/

		var x:Float = 311 - 42;
		var y:Float = 223 + 21;

		var noteCombo:FlxSprite;
		var tagSprite:FlxSprite;

		var seperatedHits:String = "";

		var placeHolder:Dynamic = "";

		noteCombo = new FlxSprite(x, y);
		noteCombo.frames = Paths.getSparrowAtlas("noteCombo");
		noteCombo.scrollFactor.set(0.5, 0.5);
		noteCombo.scale.set(0.56, 0.56);
		noteCombo.animation.addByPrefix("appear", "appear", 24, false);
		noteCombo.animation.addByPrefix("disappear", "disappear", 40, false);
		noteCombo.visible = false;
		noteCombo.active = false;
		noteCombo.antialiasing = ClientPrefs.globalAntialiasing;
		noteCombo.cameras = [camHUD];
		insert(members.indexOf(notes), noteCombo);

		try {
			if (lastMustHit != SONG.notes[curSection].mustHitSection)
			{
				lastMustHit = SONG.notes[curSection].mustHitSection;
				if (!lastMustHit && notesHit >= 34 && (curBeat % 4 == 0 || curBeat % 4 == 1))
				{
					// addTextToDebug("combo: x" + notesHit, FlxColor.WHITE);
					noteCombo.visible = true;
					noteCombo.active = true;

					noteCombo.animation.play("appear", true);

					FlxG.sound.play(Paths.sound("NoteComboExecute"));

					trace("diamond chestplate");

					notesHit = 0;
				}
			}

			noteCombo.animation.finishCallback = function(name:String)
			{
				if (name == "appear")
				{
					noteCombo.animation.play("disappear");
				}
				if (name == "disappear")
				{
					noteCombo.visible = false;
					noteCombo.active = false;
				}
			};
		}
		catch (e:Dynamic) {
			trace(e);
		}
	}

	public function healthTween(amt:Float) /// from Indie Cross lol
	{
		healthTweenObj.cancel();
		healthTweenObj = FlxTween.num(health, health + amt, 0.2, {ease: FlxEase.sineInOut}, function(v:Float)
		{
			health = v;
		});
	}
	public function healthTweenLua(amt:Float)
	{
		for (i in 0...unspawnNotes.length)
		{
			if (unspawnNotes[i].mustPress)
			{
				healthTween(amt);
			}
			else if (!unspawnNotes[i].mustPress)
			{
				healthTween2(amt);
			}
		}	
	}
	public function healthTween2(amt:Float) /// from Indie Cross lol
	{
		healthTweenObj2.cancel();
		healthTweenObj2 = FlxTween.num(health, health + amt, 0.2, {ease: FlxEase.sineInOut}, function(v:Float)
		{
			health = v;
		});
	}

	private function popUpScore(note:Note = null, elapsed:Float = 0):Void
	{
		var noteDiff:Float = Math.abs(note.strumTime - Conductor.songPosition + ClientPrefs.ratingOffset);
		//trace(noteDiff, ' ' + Math.abs(note.strumTime - Conductor.songPosition));

		// boyfriend.playAnim('hey');
		vocals.volume = 1;

		var placement:String = Std.string(combo);

		var coolText:FlxText = new FlxText(0, 0, 0, placement, 32);
		coolText.screenCenter();
		coolText.x = FlxG.width * 0.35;

		var rating:FlxSprite = new FlxSprite();
		var score:Int = 350;

		var daRating:Rating = Conductor.judgeNote(note, noteDiff / playbackRate);

		//tryna do MS based judgment due to popular demand

		totalNotesHit += daRating.ratingMod;
		note.ratingMod = daRating.ratingMod;

		if(!note.ratingDisabled) daRating.increase();
		note.rating = daRating.name;
		score = daRating.score;

		if(daRating.noteSplash && !note.noteSplashDisabled)
		{
			spawnNoteSplashOnNote(note);
		}

		if (!nostalgicSongs) {
			if (daRating.name.startsWith('sick')) { // maybe doing this will prevent any crashes?????? 
				//health += 0.0475 * healthGain;
				healthMultiplier = 1.5;
			}
			if (daRating.name.startsWith('good')) {
				//health += 0.023 * healthGain;
				healthMultiplier = 0.5;
			}
			if (daRating.name.startsWith('bad')) {
				//health -= 0.02 * healthLoss;
				healthMultiplier = -0.2;
			}
			if (daRating.name.startsWith('shit')) {
				//health -= 0.035 * healthLoss;
				healthMultiplier = -0.3;
			}
		}

		if(!practiceMode) {
			songScore += score;
			if(!note.ratingDisabled)
			{
				songHits++;
				totalPlayed++;
				RecalculateRating(false);
			}
		}

		var daLoop:Int = 0;

		if (PlayState.isPixelStage)
		{
			pixelShitPart1 = 'pixelUI/';
			pixelShitPart2 = '-pixel';
		}

		if (SONG.song == 'Haxxer')
		{
			offsetY = -200;
			pixelShitPart1 = 'oldUI/';
		}
		else if (SONG.song == 'Super Idol')
		{
			offsetY = -200;
			pixelShitPart1 = 'chineseUI/';
		}

		rating.loadGraphic(Paths.image(pixelShitPart1 + daRating.image + pixelShitPart2));
		rating.screenCenter();
		rating.y += 200 + offsetY;
		rating.x = coolText.x - 40 + offsetX;
		rating.y -= 60;
		rating.acceleration.y = 550 * playbackRate * playbackRate;
		rating.velocity.y -= FlxG.random.int(140, 175) * playbackRate;
		rating.velocity.x -= FlxG.random.int(0, 10) * playbackRate;
		rating.visible = (!ClientPrefs.hideHud && showRating);
		if (ClientPrefs.dynamicRatings)
		{
			rating.angle = FlxG.random.int(-10, 10);
		}

		var comboSpr:FlxSprite = new FlxSprite().loadGraphic(Paths.image(pixelShitPart1 + 'combo' + pixelShitPart2));
		comboSpr.screenCenter();
		comboSpr.x = coolText.x + offsetX;
		comboSpr.y += 200 + offsetY;
		comboSpr.acceleration.y = FlxG.random.int(200, 300) * playbackRate * playbackRate;
		comboSpr.velocity.y -= FlxG.random.int(140, 160) * playbackRate;
		comboSpr.visible = (!ClientPrefs.hideHud && showCombo);
		comboSpr.y += 60;
		comboSpr.velocity.x += FlxG.random.int(1, 10) * playbackRate;
		if (ClientPrefs.dynamicRatings)
		{
			comboSpr.angle = FlxG.random.int(-10, 10);
		}

		ratingGroup.add(rating);
		
		if (!ClientPrefs.comboStacking)
		{
			if (lastRating != null) lastRating.kill();
			lastRating = rating;
		}

		if (!PlayState.isPixelStage)
		{
			rating.setGraphicSize(Std.int(rating.width * 0.7));
			rating.antialiasing = ClientPrefs.globalAntialiasing;
			comboSpr.setGraphicSize(Std.int(comboSpr.width * 0.7));
			comboSpr.antialiasing = ClientPrefs.globalAntialiasing;
		}
		else
		{
			rating.setGraphicSize(Std.int(rating.width * daPixelZoom * 0.85));
			comboSpr.setGraphicSize(Std.int(comboSpr.width * daPixelZoom * 0.85));
		}

		comboSpr.updateHitbox();
		rating.updateHitbox();

		var seperatedScore:Array<Int> = [];

		if (combo >= 1000) {
			seperatedScore.push(Math.floor(combo / 1000) % 10);
		}
		if (combo >= 100) {
			seperatedScore.push(Math.floor(combo / 100) % 10);
		}
		if (combo >= 10) {
			seperatedScore.push(Math.floor(combo / 10) % 10);
		}
		seperatedScore.push(combo % 10);

		var xThing:Float = 0;

		if (showCombo && combo >= 65)
		{
			ratingGroup.add(comboSpr);
		}
		if (!ClientPrefs.comboStacking)
		{
			if (lastCombo != null) lastCombo.kill();
			lastCombo = comboSpr;
		}
		if (lastScore != null)
		{
			while (lastScore.length > 0)
			{
				lastScore[0].kill();
				lastScore.remove(lastScore[0]);
			}
		}
		for (i in seperatedScore)
		{
			var numScore:FlxSprite = new FlxSprite().loadGraphic(Paths.image(pixelShitPart1 + 'num' + Std.int(i) + pixelShitPart2));
			numScore.screenCenter();
			numScore.x = coolText.x + (43 * daLoop) - 90 - 15 + offsetX;
			numScore.y += 80 + 200 + offsetY;
			
			if (!ClientPrefs.comboStacking)
				lastScore.push(numScore);

			if (!PlayState.isPixelStage)
			{
				numScore.antialiasing = ClientPrefs.globalAntialiasing;
				numScore.setGraphicSize(Std.int(numScore.width * 0.5));
			}
			else
			{
				numScore.setGraphicSize(Std.int(numScore.width * daPixelZoom));
			}
			numScore.updateHitbox();

			numScore.acceleration.y = FlxG.random.int(200, 300) * playbackRate * playbackRate;
			numScore.velocity.y -= FlxG.random.int(140, 160) * playbackRate;
			numScore.velocity.x = FlxG.random.float(-5, 5) * playbackRate;
			if (ClientPrefs.dynamicRatings)
			{
				numScore.angle = FlxG.random.int(-10, 10);
			}
			numScore.visible = !ClientPrefs.hideHud;

			if(showComboNum) {
				ratingGroup.add(numScore);
			}

			numScoreTween = FlxTween.tween(numScore, {alpha: 0}, 0.2 / playbackRate, {
				onComplete: function(tween:FlxTween)
				{
					numScore.destroy();
				},
				startDelay: Conductor.crochet * 0.002
			});

			if (ClientPrefs.dynamicRatings)
			{
				numScoreTween = FlxTween.tween(numScore.scale, {x: 0}, 0.2 / playbackRate, {
					onComplete: function(tween:FlxTween)
					{
						numScore.destroy();
					},
					startDelay: Conductor.crochet * 0.002
				});

				numScoreTween = FlxTween.tween(numScore.scale, {y: 0}, 0.2 / playbackRate, {
					onComplete: function(tween:FlxTween)
					{
						numScore.destroy();
					},
					startDelay: Conductor.crochet * 0.002
				});
			}


			daLoop++;
			if(numScore.x > xThing) xThing = numScore.x;
		}
		comboSpr.x = xThing + 50;

		var time:Float = 0.2;
		/*
			trace(combo);
			trace(seperatedScore);
		 */

		coolText.text = Std.string(seperatedScore);
		// add(coolText);

		ratingTween = FlxTween.tween(rating, {alpha: 0}, 0.2 / playbackRate, {
			startDelay: Conductor.crochet * 0.001
		});

		if (ClientPrefs.dynamicRatings)
		{
			ratingTween = FlxTween.tween(rating.scale, {x: 0}, 0.2 / playbackRate, {
				startDelay: Conductor.crochet * 0.001
			});
	
			ratingTween = FlxTween.tween(rating.scale, {y: 0}, 0.2 / playbackRate, {
				startDelay: Conductor.crochet * 0.001
			});
		}

		comboTween = FlxTween.tween(comboSpr, {alpha: 0}, 0.2 / playbackRate, {
			onComplete: function(tween:FlxTween)
			{
				coolText.destroy();
				comboSpr.destroy();

				rating.destroy();
			},
			startDelay: Conductor.crochet * 0.002 / playbackRate
		});

		if (ClientPrefs.dynamicRatings)
		{
			comboTween = FlxTween.tween(comboSpr.scale, {x: 0}, 0.2 / playbackRate, {
				startDelay: Conductor.crochet * 0.002 / playbackRate
			});
	
			comboTween = FlxTween.tween(comboSpr.scale, {y: 0}, 0.2 / playbackRate, {
				startDelay: Conductor.crochet * 0.002 / playbackRate
			});
		}

	}

	public var strumsBlocked:Array<Bool> = [];
	private function onKeyPress(event:KeyboardEvent):Void
	{
		var eventKey:FlxKey = event.keyCode;
		var key:Int = getKeyFromEvent(eventKey);
		//trace('Pressed: ' + eventKey);

		if (!cpuControlled && startedCountdown && !paused && key > -1 && (FlxG.keys.checkStatus(eventKey, JUST_PRESSED) || ClientPrefs.controllerMode))
		{
			if(!boyfriend.stunned && !boyfriend2.stunned && generatedMusic && !endingSong)
			{
				//more accurate hit time for the ratings?
				var lastTime:Float = Conductor.songPosition;
				Conductor.songPosition = FlxG.sound.music.time;

				var canMiss:Bool = !ClientPrefs.ghostTapping;

				// heavily based on my own code LOL if it aint broke dont fix it
				var pressNotes:Array<Note> = [];
				//var notesDatas:Array<Int> = [];
				var notesStopped:Bool = false;

				var sortedNotesList:Array<Note> = [];
				notes.forEachAlive(function(daNote:Note)
				{
					if (strumsBlocked[daNote.noteData] != true && daNote.canBeHit && daNote.mustPress && !daNote.tooLate && !daNote.wasGoodHit && !daNote.isSustainNote && !daNote.blockHit)
					{
						if(daNote.noteData == key)
						{
							sortedNotesList.push(daNote);
							//notesDatas.push(daNote.noteData);
						}
						canMiss = true;
					}
				});
				sortedNotesList.sort(sortHitNotes);

				if (sortedNotesList.length > 0) {
					for (epicNote in sortedNotesList)
					{
						for (doubleNote in pressNotes) {
							if (Math.abs(doubleNote.strumTime - epicNote.strumTime) < 1) {
								doubleNote.kill();
								notes.remove(doubleNote, true);
								doubleNote.destroy();
							} else
								notesStopped = true;
						}

						// eee jack detection before was not super good
						if (!notesStopped) {
							goodNoteHit(epicNote);
							pressNotes.push(epicNote);
						}

					}
				}
				else{
					callOnLuas('onGhostTap', [key]);
					if (canMiss) {
						noteMissPress(key);
					}
				}

				// I dunno what you need this for but here you go
				//									- Shubs

				// Shubs, this is for the "Just the Two of Us" achievement lol
				//									- Shadow Mario
				keysPressed[key] = true;

				//more accurate hit time for the ratings? part 2 (Now that the calculations are done, go back to the time it was before for not causing a note stutter)
				Conductor.songPosition = lastTime;
			}

			var spr:StrumNote = playerStrums.members[key];
			if(strumsBlocked[key] != true && spr != null && spr.animation.curAnim.name != 'confirm')
			{
				spr.playAnim('pressed');
				spr.resetAnim = 0;
			}
			callOnLuas('onKeyPress', [key]);
		}
		//trace('pressed: ' + controlArray);
	}

	function sortHitNotes(a:Note, b:Note):Int
	{
		if (a.lowPriority && !b.lowPriority)
			return 1;
		else if (!a.lowPriority && b.lowPriority)
			return -1;

		return FlxSort.byValues(FlxSort.ASCENDING, a.strumTime, b.strumTime);
	}

	private function onKeyRelease(event:KeyboardEvent):Void
	{
		var eventKey:FlxKey = event.keyCode;
		var key:Int = getKeyFromEvent(eventKey);
		if(!cpuControlled && startedCountdown && !paused && key > -1)
		{
			var spr:StrumNote = playerStrums.members[key];
			if(spr != null)
			{
				spr.playAnim('static');
				spr.resetAnim = 0;
			}
			callOnLuas('onKeyRelease', [key]);
		}
		//trace('released: ' + controlArray);
	}

	private function getKeyFromEvent(key:FlxKey):Int
	{
		if(key != NONE)
		{
			for (i in 0...keysArray.length)
			{
				for (j in 0...keysArray[i].length)
				{
					if(key == keysArray[i][j])
					{
						return i;
					}
				}
			}
		}
		return -1;
	}

	// Hold notes
	private function keyShit():Void
	{
		// HOLDING
		var parsedHoldArray:Array<Bool> = parseKeys();

		// TO DO: Find a better way to handle controller inputs, this should work for now
		if(ClientPrefs.controllerMode)
		{
			var parsedArray:Array<Bool> = parseKeys('_P');
			if(parsedArray.contains(true))
			{
				for (i in 0...parsedArray.length)
				{
					if(parsedArray[i] && strumsBlocked[i] != true)
						onKeyPress(new KeyboardEvent(KeyboardEvent.KEY_DOWN, true, true, -1, keysArray[i][0]));
				}
			}
		}

		// FlxG.watch.addQuick('asdfa', upP);
		if (startedCountdown && !boyfriend.stunned && !boyfriend2.stunned && generatedMusic)
		{
			// rewritten inputs???
			notes.forEachAlive(function(daNote:Note)
			{
				// hold note functions
				if (strumsBlocked[daNote.noteData] != true && daNote.isSustainNote && parsedHoldArray[daNote.noteData] && daNote.canBeHit
				&& daNote.mustPress && !daNote.tooLate && !daNote.wasGoodHit && !daNote.blockHit) {
					goodNoteHit(daNote);
				}
			});

			if (parsedHoldArray.contains(true) && !endingSong) {
				#if ACHIEVEMENTS_ALLOWED
				var achieve:String = checkForAchievement(['oversinging']);
				if (achieve != null) {
					startAchievement(achieve);
				}
				#end
			}
			else if (boyfriend.animation.curAnim != null && boyfriend.holdTimer > Conductor.stepCrochet * 0.0011 * boyfriend.singDuration && boyfriend.animation.curAnim.name.startsWith('sing') && !boyfriend.animation.curAnim.name.endsWith('miss'))
			{
				boyfriend.dance();
				//boyfriend.animation.curAnim.finish();
			}
			else if (boyfriend2.animation.curAnim != null && boyfriend2.holdTimer > Conductor.stepCrochet * 0.0011 * boyfriend2.singDuration && boyfriend2.animation.curAnim.name.startsWith('sing') && !boyfriend.animation.curAnim.name.endsWith('miss'))
			{
				boyfriend2.dance();
				//boyfriend.animation.curAnim.finish();
			}
		}

		// TO DO: Find a better way to handle controller inputs, this should work for now
		if(ClientPrefs.controllerMode || strumsBlocked.contains(true))
		{
			var parsedArray:Array<Bool> = parseKeys('_R');
			if(parsedArray.contains(true))
			{
				for (i in 0...parsedArray.length)
				{
					if(parsedArray[i] || strumsBlocked[i] == true)
						onKeyRelease(new KeyboardEvent(KeyboardEvent.KEY_UP, true, true, -1, keysArray[i][0]));
				}
			}
		}
	}

	private function parseKeys(?suffix:String = ''):Array<Bool>
	{
		var ret:Array<Bool> = [];
		for (i in 0...controlArray.length)
		{
			ret[i] = Reflect.getProperty(controls, controlArray[i] + suffix);
		}
		return ret;
	}

	function noteMiss(daNote:Note):Void { //You didn't hit the key and let it go offscreen, also used by Hurt Notes
		//Dupe note remove
		notes.forEachAlive(function(note:Note) {
			if (daNote != note && daNote.mustPress && daNote.noteData == note.noteData && daNote.isSustainNote == note.isSustainNote && Math.abs(daNote.strumTime - note.strumTime) < 1) {
				note.kill();
				notes.remove(note, true);
				note.destroy();
			}
		});

		if (daNote.isSustainNote)
		{
			if (daNote.parent != null)
			{
				if (!daNote.parent.shouldbehidden)
				{
					songMisses++;
					totalPlayed++;
					if(!practiceMode) songScore -= 5;

					if (!ClientPrefs.smoothHealth)
						health -= daNote.missHealth - 0.005 * healthLoss;
					else
						healthTween(-daNote.missHealth - 0.005 * healthLoss);

					popUpJustRating();
				}
				vocals.volume = 0;
				for (i in daNote.parent.tail)
				{
					if (i != null)
						i.alpha = 0.4;
				}

				if(instakillOnMiss)
				{
					vocals.volume = 0;
					doDeathCheck(true);
				}

				combo = 0;
				daNote.parent.shouldbehidden = true;
				daNote.kill();
				RecalculateRating(true);

				return;
			}
		}

		notesHit = 0;

		if(daNote.ghostNotes3)
		{
			var animToPlay:String = singAnimations[Std.int(Math.abs(daNote.noteData))];
			if(boyfriend.mostRecentRow != daNote.row && !daNote.isSustainNote)
				doGhostAnim('bf', animToPlay + daNote.animSuffix);

			boyfriend.mostRecentRow = daNote.row;
			return;
		}
		if(daNote.ghostNotes2)
		{
			var animToPlay:String = singAnimations[Std.int(Math.abs(daNote.noteData))];
			if(boyfriend.mostRecentRow != daNote.row && !daNote.isSustainNote)
				doGhostAnim('bf', 'idle');

			boyfriend.mostRecentRow = daNote.row;
			return;
		}	

		combo = 0;

		if (!ClientPrefs.smoothHealth)
			health -= daNote.missHealth * healthLoss;
		else
			healthTween(-daNote.missHealth * healthLoss);

		popUpJustRating();
		
		if(instakillOnMiss)
		{
			vocals.volume = 0;
			doDeathCheck(true);
		}

		//For testing purposes
		//trace(daNote.missHealth);
		songMisses++;
		vocals.volume = 0;
		if(!practiceMode) songScore -= 10;

		totalPlayed++;
		RecalculateRating(true);

		var char:Character = boyfriend;
		if(daNote.gfNote) {
			char = gf;
		}
		if(daNote.boyfriend2play) {
			char = boyfriend2;
		}

		if(char != null && !daNote.noMissAnimation && char.hasMissAnimations && !daNote.boyfriend2play)
		{
			var animToPlay:String = singAnimations[Std.int(Math.abs(daNote.noteData))] + 'miss' + daNote.animSuffix;
			char.playAnim(animToPlay, true);
		}

		if(char != null && !daNote.noMissAnimation && char.hasMissAnimations && daNote.bothBFsPlay)
		{
			var animToPlay:String = singAnimations[Std.int(Math.abs(daNote.noteData))] + 'miss' + daNote.animSuffix;
			boyfriend.playAnim(animToPlay, true);
			boyfriend2.playAnim(animToPlay, true);
		}

		callOnLuas('noteMiss', [notes.members.indexOf(daNote), daNote.noteData, daNote.noteType, daNote.isSustainNote]);
	}

	function noteMissPress(direction:Int = 1, daNote:Note = null):Void //You pressed a key when there was no notes to press for this key
	{
		if(ClientPrefs.ghostTapping) return; //fuck it

		popUpJustRating();
		
		notesHit = 0;

		if (!boyfriend.stunned && !boyfriend2.stunned)
		{
			if (!ClientPrefs.smoothHealth)
				health -= 0.05 * healthLoss;
			else
				healthTween(-0.05 * healthLoss);

			if(instakillOnMiss)
			{
				vocals.volume = 0;
				doDeathCheck(true);
			}

			if (combo > 5 && gf != null && gf.animOffsets.exists('sad'))
			{
				gf.playAnim('sad');
			}
			combo = 0;

			if(!practiceMode) songScore -= 10;
			if(!endingSong) {
				songMisses++;
			}
			totalPlayed++;
			RecalculateRating(true);

			FlxG.sound.play(Paths.soundRandom('missnote', 1, 3), FlxG.random.float(0.1, 0.2));

			if(boyfriend.hasMissAnimations) {
				boyfriend.playAnim(singAnimations[Std.int(Math.abs(direction))] + 'miss', true);
			}
			if(boyfriend2.hasMissAnimations) {
				boyfriend2.playAnim(singAnimations[Std.int(Math.abs(direction))] + 'miss', true);
			}
			vocals.volume = 0;
		}
		callOnLuas('noteMissPress', [direction]);
	}

	function opponentNoteHit(note:Note):Void
	{
		if (Paths.formatToSongPath(SONG.song) != 'tutorial' && !note.noAnimation && singingTurnsOnCamZoom)
			camZooming = true;

		if(note.noteType == 'Hey!' && dad.animOffsets.exists('hey')) {
			dad.playAnim('hey', true);
			dad.specialAnim = true;
			dad.heyTimer = 0.6;
		} else if(!note.noAnimation) {
			var altAnim:String = note.animSuffix;

			if (SONG.notes[curSection] != null)
			{
				if (SONG.notes[curSection].altAnim && !SONG.notes[curSection].gfSection && !SONG.notes[curSection].bf2Section) {
					altAnim = '-alt';
				}
			}

			var animToPlay:String = singAnimations[Std.int(Math.abs(note.noteData))] + altAnim;

			if (isDad) {
				dad.playAnim(animToPlay, true);
				dad.holdTimer = 0;
			}

			var char:Character = dad;
			if(note.gfNote || isGF) {
				char = gf;
			}

			var notehealthdmg:Float = 0.00;

			switch (dad.curCharacter)
			{
				case 'smileeeeer' | 'suicide' | 'mouse-smile':
					triggerEventNote("Screen Shake", "0.2,0.008", "0.2,0.008");
					notehealthdmg = 0.028;

					if (!ClientPrefs.smoothHealth)
					{
						if (health > 0.5)
						{
							if (note.isSustainNote)
							{
								health -= notehealthdmg / 3;
							}
							else
							{
								health -= notehealthdmg;
							}
						}
					}
					else
					{
						if (health > 0.5)
						{
							if (note.isSustainNote)
							{
								healthTween2(-notehealthdmg / 3);
							}
							else
							{
								healthTween2(-notehealthdmg);
							}
						}
					}

				case 'doxxie':
					notehealthdmg = 0.018;
					if (!ClientPrefs.smoothHealth)
					{
						if (health > 0.1) health -= notehealthdmg;
					}
					else
					{
						if (health > 0.1) healthTween2(-notehealthdmg);
					}
				case 'super-idol':
					notehealthdmg = 0.02;
					if (!ClientPrefs.smoothHealth)
					{
						if (health > 0.1) health -= notehealthdmg;
					}
					else
					{
						if (health > 0.1) healthTween2(-notehealthdmg);
					}
				case 'fraudBF':
					if (!ClientPrefs.smoothHealth)
					{
						if (health >= 0.016) health -= 0.016;
					}
					else
					{
						if (health >= 0.016) healthTween2(-0.016);
					}
			}

			if (healthBar.percent >= 20)
			{
				if (ClientPrefs.smoothHealth)
				{
					if (!note.isSustainNote)
					{
						healthTween2(healthDrain / 1.5);
					}
					else
					{
						healthTween2(healthDrain / 4.5);
					}
				}
				else
				{
					if (!note.isSustainNote)
					{
						health -= -healthDrain / 1.5;
					}
					else
					{
						health -= -healthDrain / 4.5;
					}
				}
			}

			if(char != null)
			{
				char.holdTimer = 0;
				if (!note.isSustainNote && noteRows[note.mustPress?0:1][note.row].length > 1)
				{
					if(!note.gfNote || gf != null || !SONG.notes[curSection].gfSection)
					{
						// potentially have jump anims?
						var chord = noteRows[note.mustPress ? 0 : 1][note.row];
						var animNote = chord[0];
						var realAnim = singAnimations[Std.int(Math.abs(animNote.noteData))] + altAnim;
						if (dad.mostRecentRow != note.row)
						{
							dad.playAnim(realAnim, true);
						}

						if (!note.noAnimation)
						{
							if(dad.mostRecentRow != note.row)
								doGhostAnim('dad', animToPlay);
						}
						dad.mostRecentRow = note.row;
					}
				}
				else
				{
					char.playAnim(animToPlay, true);
				}
			}
		}

		if (SONG.needsVoices)
			vocals.volume = 1;

		var time:Float = 0.15;
		if(note.isSustainNote && !note.animation.curAnim.name.endsWith('end')) {
			time += 0.15;
		}
		if (note.noteType != 'Invisible Note' && note.noteType != 'I.N No Animation')
		{
			StrumPlayAnim(note, true, Std.int(Math.abs(note.noteData)), time);
		}

		note.hitByOpponent = true;

		callOnLuas('opponentNoteHit', [notes.members.indexOf(note), Math.abs(note.noteData), note.noteType, note.isSustainNote]);

		if (!note.isSustainNote)
		{
			note.kill();
			notes.remove(note, true);
			note.destroy();
		}
	}

	function fadeDadStrums(alph:Float, time:Float)
	{
        opponentStrums.forEach(function(spr)
		{
            FlxTween.tween(spr, {alpha: alph}, time);
		});
	}
	function fadeBFStrums(alph:Float, time:Float)
	{
		playerStrums.forEach(function(spr)
		{
			FlxTween.tween(spr, {alpha: alph}, time);
		});
	}

	function moveBFNotesX(value:Float, time:Float)
	{
		playerStrums.forEach(function(spr)
		{
			FlxTween.tween(spr, {x: value}, time);
		});
	}
	function moveDadNotesX(value:Float, time:Float)
	{
		opponentStrums.forEach(function(spr)
		{
			FlxTween.tween(spr, {x: value}, time);
		});
	}

	function addCinematicBars(speed:Float, ?thickness:Float = 7)
	{
		if (cinematicBars["top"] == null)
		{
			cinematicBars["top"] = new FlxSprite(0, 0).makeGraphic(FlxG.width, Std.int(FlxG.height / thickness), FlxColor.BLACK);
			cinematicBars["top"].screenCenter(X);
			cinematicBars["top"].cameras = [camBars];
			cinematicBars["top"].y = 0 - cinematicBars["top"].height; // offscreen
			add(cinematicBars["top"]);
		}

		if (cinematicBars["bottom"] == null)
		{
			cinematicBars["bottom"] = new FlxSprite(0, 0).makeGraphic(FlxG.width, Std.int(FlxG.height / thickness), FlxColor.BLACK);
			cinematicBars["bottom"].screenCenter(X);
			cinematicBars["bottom"].cameras = [camBars];
			cinematicBars["bottom"].y = FlxG.height; // offscreen
			add(cinematicBars["bottom"]);
		}

		FlxTween.tween(cinematicBars["top"], {y: 0}, speed, {ease: FlxEase.circInOut});
		FlxTween.tween(cinematicBars["bottom"], {y: FlxG.height - cinematicBars["bottom"].height}, speed, {ease: FlxEase.circInOut});
	}

	function camHUDgoBrrrr(direction:String = "left-to-right")
	{
		if (direction == "left-to-right")
		{
			camHUD.angle = Math.sin((Conductor.songPosition / 1200) * (Conductor.bpm / 60) * -1.0) * 1.2;
		}
		if (direction == "up-and-down")
		{
			camHUD.y = Math.sin((Conductor.songPosition / 1200) * (Conductor.bpm / 60) * -1.0) * 1.2;
		}
	}

	var top:FlxSprite;
	var bottom:FlxSprite;

	function setupCinematicBars(speed:Float = 0.5, distance:Float = 50)
	{
		top = new FlxSprite(-110, 350).makeGraphic(FlxG.width, 350, FlxColor.BLACK);
		top.cameras = [camHUD];
		insert(members.indexOf(strumLineNotes), top);
	
		bottom = new FlxSprite(-110, 720).makeGraphic(FlxG.width, 350, FlxColor.BLACK);
		bottom.cameras = [camHUD];
		insert(members.indexOf(strumLineNotes), bottom);

		if (speed > 0 && distance > 0)
		{
			modchartTweens.set('Cinematics1', FlxTween.tween(top, {y: top.y + distance}, speed, {ease: FlxEase.circInOut,
				onComplete: function(twn:FlxTween)
				{
					callOnLuas('onTweenCompleted', ['Cinematics1']);
					modchartTweens.remove('Cinematics1');
				}
			}));

			modchartTweens.set('Cinematics2', FlxTween.tween(bottom, {y: bottom.y - distance}, speed, {ease: FlxEase.circInOut,
				onComplete: function(twn:FlxTween)
				{
					callOnLuas('onTweenCompleted', ['Cinematics2']);
					modchartTweens.remove('Cinematics2');
				}
			}));
		}
		else if (distance <= 0)
		{
			modchartTweens.set('Cinematics1', FlxTween.tween(top, {y: top.y}, speed, {ease: FlxEase.circInOut,
				onComplete: function(twn:FlxTween)
				{
					callOnLuas('onTweenCompleted', ['Cinematics1']);
					modchartTweens.remove('Cinematics1');
				}
			}));

			modchartTweens.set('Cinematics2', FlxTween.tween(bottom, {y: bottom.y}, speed, {ease: FlxEase.circInOut,
				onComplete: function(twn:FlxTween)
				{
					callOnLuas('onTweenCompleted', ['Cinematics2']);
					modchartTweens.remove('Cinematics2');
				}
			}));
		}
	}

	function removeCinematicBars(speed:Float)
	{
		if (cinematicBars["top"] != null)
		{
			FlxTween.tween(cinematicBars["top"], {y: 0 - cinematicBars["top"].height}, speed, {ease: FlxEase.circInOut});
		}

		if (cinematicBars["bottom"] != null)
		{
			FlxTween.tween(cinematicBars["bottom"], {y: FlxG.height}, speed, {ease: FlxEase.circInOut});
		}
	}

	function goodNoteHit(note:Note):Void
	{
		var noteDiff:Float = Math.abs(note.strumTime - Conductor.songPosition + ClientPrefs.ratingOffset);
		var daRating:Rating = Conductor.judgeNote(note, noteDiff);

		if (!note.wasGoodHit)
		{
			if(cpuControlled && (note.ignoreNote || note.hitCausesMiss)) return;

			if (ClientPrefs.hitsoundVolume > 0 && !note.hitsoundDisabled)
			{
				FlxG.sound.play(Paths.sound('hitsound'), ClientPrefs.hitsoundVolume);
			}

			if (!note.isSustainNote)
				notesHitArray.unshift(Date.now());

			if(note.hitCausesMiss) {
				noteMiss(note);
				if(!note.noteSplashDisabled && !note.isSustainNote) {
					spawnNoteSplashOnNote(note);
				}

				if(!note.noMissAnimation)
				{
					switch(note.noteType) {
						case 'Hurt Note': //Hurt note
							if(boyfriend.animation.getByName('hurt') != null) {
								boyfriend.playAnim('hurt', true);
								boyfriend.specialAnim = true;
							}
					}
				}

				note.wasGoodHit = true;
				if (!note.isSustainNote)
				{
					note.kill();
					notes.remove(note, true);
					note.destroy();
				}
				return;
			}

			if (!note.isSustainNote)
			{
				notesHit += 1;
				combo += 1;
				if(combo > 9999) combo = 9999;
				popUpScore(note);
				if (!nostalgicSongs)
				{
					if (!ClientPrefs.smoothHealth)
					{
						health += note.hitHealth * healthMultiplier * healthGain;
					}
					else
					{
						healthTween(note.hitHealth * healthMultiplier * healthGain);
						trace("boo");
					}
				}
			}
			else
			{
				totalPlayed++;
				totalNotesHit++;
				RecalculateRating(false, true);
				if (!nostalgicSongs && note.parentNote != null)
				{
					if (ClientPrefs.smoothHealth)
						health += note.hitHealth / note.parentNote.childrenNotes.length;
					else
						healthTween(note.hitHealth / note.parent.childrenNotes.length);
				}
			}

			if (nostalgicSongs) 
				health += note.hitHealth * healthGain;

			if(!note.noAnimation) {
				var altAnim:String = note.animSuffix;
				var animToPlay:String = singAnimations[Std.int(Math.abs(note.noteData))] + altAnim;

				if (SONG.notes[curSection] != null)
				{
					if (SONG.notes[curSection].altAnimPlayer && !SONG.notes[curSection].altAnim 
						&& !SONG.notes[curSection].gfSection && !SONG.notes[curSection].bf2Section)
					{
						altAnim = '-alt';
					}
				}

				if(note.gfNote)
				{
					if(gf != null)
					{
						gf.playAnim(animToPlay, true);
						gf.holdTimer = 0;
					}
				}
				else if(note.boyfriend2play)
				{
					if(boyfriend2 != null)
					{
						boyfriend2.holdTimer = 0;
						if (!note.isSustainNote && noteRows[note.mustPress?0:1][note.row].length > 1)
						{
							// potentially have jump anims?
							var chord = noteRows[note.mustPress ? 0 : 1][note.row];
							var animNote = chord[0];
							var realAnim = singAnimations[Std.int(Math.abs(animNote.noteData))] + altAnim;
							if (boyfriend2.mostRecentRow != note.row)
							{
								boyfriend2.playAnim(realAnim, true);
							}

							if (!note.noAnimation)
							{
								if(boyfriend2.mostRecentRow != note.row)
									doGhostAnim('bf2', animToPlay);
							}
							boyfriend.mostRecentRow = note.row;
						}
						else
						{
							boyfriend2.playAnim(animToPlay, true);
						}
					}
				}
				else if(note.bothBFsPlay)
				{
					boyfriend.playAnim(animToPlay, true);
					boyfriend2.playAnim(animToPlay, true);

					boyfriend.holdTimer = 0;
					boyfriend2.holdTimer = 0;
				}
				else if (note.ghostNotes)
				{
					boyfriend.holdTimer = 0;
					if(boyfriend.mostRecentRow != note.row && !note.isSustainNote)
						doGhostAnim('bf', animToPlay);

					boyfriend.mostRecentRow = note.row;

					
					boyfriend.playAnim(animToPlay, true);
				}
				else
				{
					boyfriend.holdTimer = 0;
					if (!note.isSustainNote && noteRows[note.mustPress?0:1][note.row].length > 1)
					{
						// potentially have jump anims?
						var chord = noteRows[note.mustPress ? 0 : 1][note.row];
						var animNote = chord[0];
						var realAnim = singAnimations[Std.int(Math.abs(animNote.noteData))] + altAnim;
						if (boyfriend.mostRecentRow != note.row)
						{
							boyfriend.playAnim(realAnim, true);
						}

						if (!note.noAnimation)
						{
							if(boyfriend.mostRecentRow != note.row)
								doGhostAnim('bf', animToPlay);
						}
						boyfriend.mostRecentRow = note.row;
					}
					else
					{
						boyfriend.playAnim(animToPlay, true);
					}
				}

				if(note.noteType == 'Hey!') {
					if(boyfriend.animOffsets.exists('hey')) {
						boyfriend.playAnim('hey', true);
						boyfriend.specialAnim = true;
						boyfriend.heyTimer = 0.6;
					}

					if(gf != null && gf.animOffsets.exists('cheer')) {
						gf.playAnim('cheer', true);
						gf.specialAnim = true;
						gf.heyTimer = 0.6;
					}
				}
			}

			if(cpuControlled)
			{
				var time:Float = 0.15;
				if(note.isSustainNote && !note.animation.curAnim.name.endsWith('end'))
				{
					time += 0.15;
				}
				StrumPlayAnim(note, false, Std.int(Math.abs(note.noteData)), time);
			}
			else
			{
				var spr = playerStrums.members[note.noteData];
				if(spr != null)
				{
					spr.playAnim('confirm', true);
				}
			}
			note.wasGoodHit = true;
			vocals.volume = 1;

			var isSus:Bool = note.isSustainNote; //GET OUT OF MY HEAD, GET OUT OF MY HEAD, GET OUT OF MY HEAD
			var leData:Int = Math.round(Math.abs(note.noteData));
			var leType:String = note.noteType;
			callOnLuas('goodNoteHit', [notes.members.indexOf(note), leData, leType, isSus]);

			if (!note.isSustainNote)
			{
				note.kill();
				notes.remove(note, true);
				note.destroy();
			}
		}
	}

	public function spawnNoteSplashOnNote(note:Note) {
		if(ClientPrefs.noteSplashes && note != null)
		{
			// var strum:StrumNote = !note.mustPress ? opponentStrums.members[note.noteData] : playerStrums.members[note.noteData];
			var strum:StrumNote = playerStrums.members[note.noteData];
			if(strum != null)
			{
				spawnNoteSplash(strum.x, strum.y, note.noteData, note);
			}
		}
	}

	public function spawnNoteSplash(x:Float, y:Float, data:Int, ?note:Note = null) {
		var skin:String = 'noteSplashes';
		if(PlayState.SONG.splashSkin != null && PlayState.SONG.splashSkin.length > 0) skin = PlayState.SONG.splashSkin;

		var alpha:Float = 0.6;
		var hue:Float = 0;
		var sat:Float = 0;
		var brt:Float = 0;

		if (data > -1 && data < ClientPrefs.arrowHSV.length)
		{
			hue = ClientPrefs.arrowHSV[data][0] / 360;
			sat = ClientPrefs.arrowHSV[data][1] / 100;
			brt = ClientPrefs.arrowHSV[data][2] / 100;
			if(note != null) {
				skin = note.noteSplashTexture;
				hue = note.noteSplashHue;
				sat = note.noteSplashSat;
				brt = note.noteSplashBrt;
			}
		}

		var splash:NoteSplash = grpNoteSplashes.recycle(NoteSplash);
		splash.setupNoteSplash(x, y, data, skin, hue, sat, brt);
		grpNoteSplashes.add(splash);
	}

	var fastCarCanDrive:Bool = true;

	function resetFastCar():Void
	{
		fastCar.x = -12600;
		fastCar.y = FlxG.random.int(140, 250);
		fastCar.velocity.x = 0;
		fastCarCanDrive = true;
	}

	var carTimer:FlxTimer;
	function fastCarDrive()
	{
		//trace('Car drive');
		FlxG.sound.play(Paths.soundRandom('carPass', 0, 1), 0.7);

		fastCar.velocity.x = (FlxG.random.int(170, 220) / FlxG.elapsed) * 3;
		fastCarCanDrive = false;
		carTimer = new FlxTimer().start(2, function(tmr:FlxTimer)
		{
			resetFastCar();
			carTimer = null;
		});
	}

	var trainMoving:Bool = false;
	var trainFrameTiming:Float = 0;

	var trainCars:Int = 8;
	var trainFinishing:Bool = false;
	var trainCooldown:Int = 0;

	function trainStart():Void
	{
		trainMoving = true;
		if (!trainSound.playing)
			trainSound.play(true);
	}

	var startedMoving:Bool = false;

	function updateTrainPos():Void
	{
		if (trainSound.time >= 4700)
		{
			startedMoving = true;
			if (gf != null)
			{
				gf.playAnim('hairBlow');
				gf.specialAnim = true;
			}
		}

		if (startedMoving)
		{
			phillyTrain.x -= 400;

			if (phillyTrain.x < -2000 && !trainFinishing)
			{
				phillyTrain.x = -1150;
				trainCars -= 1;

				if (trainCars <= 0)
					trainFinishing = true;
			}

			if (phillyTrain.x < -4000 && trainFinishing)
				trainReset();
		}
	}

	function trainReset():Void
	{
		if(gf != null)
		{
			gf.danced = false; //Sets head to the correct position once the animation ends
			gf.playAnim('hairFall');
			gf.specialAnim = true;
		}
		phillyTrain.x = FlxG.width + 200;
		trainMoving = false;
		// trainSound.stop();
		// trainSound.time = 0;
		trainCars = 8;
		trainFinishing = false;
		startedMoving = false;
	}

	function lightningStrikeShit():Void
	{
		FlxG.sound.play(Paths.soundRandom('thunder_', 1, 2));
		if(!ClientPrefs.lowQuality) halloweenBG.animation.play('halloweem bg lightning strike');

		lightningStrikeBeat = curBeat;
		lightningOffset = FlxG.random.int(8, 24);

		if(boyfriend.animOffsets.exists('scared')) {
			boyfriend.playAnim('scared', true);
		}

		if(gf != null && gf.animOffsets.exists('scared')) {
			gf.playAnim('scared', true);
		}

		if(ClientPrefs.camZooms) {
			FlxG.camera.zoom += 0.015;
			camHUD.zoom += 0.03;

			if(!camZooming) { //Just a way for preventing it to be permanently zoomed until Skid & Pump hits a note
				FlxTween.tween(FlxG.camera, {zoom: defaultCamZoom}, 0.5);
				FlxTween.tween(camHUD, {zoom: 1}, 0.5);
			}
		}

		if(ClientPrefs.flashing) {
			halloweenWhite.alpha = 0.4;
			FlxTween.tween(halloweenWhite, {alpha: 0.5}, 0.075);
			FlxTween.tween(halloweenWhite, {alpha: 0}, 0.25, {startDelay: 0.15});
		}
	}

	function killHenchmen():Void
	{
		if(!ClientPrefs.lowQuality && ClientPrefs.violence && curStage == 'limo') {
			if(limoKillingState < 1) {
				limoMetalPole.x = -400;
				limoMetalPole.visible = true;
				limoLight.visible = true;
				limoCorpse.visible = false;
				limoCorpseTwo.visible = false;
				limoKillingState = 1;

				#if ACHIEVEMENTS_ALLOWED
				Achievements.henchmenDeath++;
				FlxG.save.data.henchmenDeath = Achievements.henchmenDeath;
				var achieve:String = checkForAchievement(['roadkill_enthusiast']);
				if (achieve != null) {
					startAchievement(achieve);
				} else {
					FlxG.save.flush();
				}
				FlxG.log.add('Deaths: ' + Achievements.henchmenDeath);
				#end
			}
		}
	}

	function resetLimoKill():Void
	{
		if(curStage == 'limo') {
			limoMetalPole.x = -500;
			limoMetalPole.visible = false;
			limoLight.x = -500;
			limoLight.visible = false;
			limoCorpse.x = -500;
			limoCorpse.visible = false;
			limoCorpseTwo.x = -500;
			limoCorpseTwo.visible = false;
		}
	}

	var tankX:Float = 400;
	var tankSpeed:Float = FlxG.random.float(5, 7);
	var tankAngle:Float = FlxG.random.int(-90, 45);

	function moveTank(?elapsed:Float = 0):Void
	{
		if(!inCutscene)
		{
			tankAngle += elapsed * tankSpeed;
			tankGround.angle = tankAngle - 90 + 15;
			tankGround.x = tankX + 1500 * Math.cos(Math.PI / 180 * (1 * tankAngle + 180));
			tankGround.y = 1300 + 1100 * Math.sin(Math.PI / 180 * (1 * tankAngle + 180));
		}
	}

	override function destroy()
	{
		for (lua in luaArray) {
			lua.call('onDestroy', []);
			lua.stop();
		}
		luaArray = [];

		#if hscript
		if(FunkinLua.hscript != null) FunkinLua.hscript = null;
		#end

		if (script != null)
		{
			script.executeFunc("destroy");

			script.destroy();
		}

		if(!ClientPrefs.controllerMode)
		{
			FlxG.stage.removeEventListener(KeyboardEvent.KEY_DOWN, onKeyPress);
			FlxG.stage.removeEventListener(KeyboardEvent.KEY_UP, onKeyRelease);
		}
		super.destroy();
	}

	public static function cancelMusicFadeTween()
	{
		if(FlxG.sound.music.fadeTween != null)
		{
			FlxG.sound.music.fadeTween.cancel();
		}
		FlxG.sound.music.fadeTween = null;
	}

	var lastStepHit:Int = -1;
	override function stepHit()
	{
		super.stepHit();
		if (Math.abs(FlxG.sound.music.time - (Conductor.songPosition - Conductor.offset)) > (20 * playbackRate)
			|| (SONG.needsVoices && Math.abs(vocals.time - (Conductor.songPosition - Conductor.offset)) > (20 * playbackRate)))
		{
			resyncVocals();
		}

		var stageData:StageFile = StageData.getStageFile(curStage);

		if(curStep == lastStepHit) {
			return;
		}

		if (cameraStageZoom || followChars)
		{
			if (curCamera != null && curCamera.gfZoom != null && focusedCharacter == gf && changeGFZoom)
			{
				defaultCamZoom = curCamera.gfZoom;
			}
			if (curCamera != null && curCamera.dadZoom != null && focusedCharacter == dad && changeDadZoom)
			{
				defaultCamZoom = curCamera.dadZoom;
			}
			if (curCamera != null && curCamera.bfZoom != null && (focusedCharacter == boyfriend || focusedCharacter == boyfriend2) && changeBFZoom)
			{
				defaultCamZoom = curCamera.bfZoom;
			}
		}

		/*if (curStep == 40)
		{
			songNameBarTweenOut = FlxTween.tween(songNameBar, {x: -5000}, 2, {ease: FlxEase.quadOut});
			songNameDisplayTweenOut = FlxTween.tween(songNameDisplay, {x: -2000}, 2, {ease: FlxEase.quadOut});
			iconShowTweenOut = FlxTween.tween(iconShow, {x: -5000}, 2, {ease: FlxEase.quadOut});
		}
		else if (curStep == 100)
		{
			songNameBar.kill();
			songNameDisplay.kill();
			iconShow.kill();
		}*/

		if (script != null)
		{
			script.setVariable("curStep", curStep);
			script.executeFunc("onStepHit");
		}

		lastStepHit = curStep;
		setOnLuas('curStep', curStep);
		callOnLuas('onStepHit', []);
	}

	var lightningStrikeBeat:Int = 0;
	var lightningOffset:Int = 8;

	var lastBeatHit:Int = -1;

	override function beatHit()
	{
		super.beatHit();

		if(lastBeatHit >= curBeat) {
			//trace('BEAT HIT: ' + curBeat + ', LAST HIT: ' + lastBeatHit);
			return;
		}

		if (generatedMusic)
		{
			notes.sort(FlxSort.byY, ClientPrefs.downScroll ? FlxSort.ASCENDING : FlxSort.DESCENDING);
		}

		if (camZooming && FlxG.camera.zoom < 1.35 && ClientPrefs.camZooms && curBeat % camSpeed == 0 && SONG.song == 'Haxxer')
		{
			FlxG.camera.zoom += zoomSpeed / 2;//0.015;
			camHUD.zoom += zoomSpeed;//0.03;
		}

		iconP1.scale.set(1.2, 1.2);
		iconP2.scale.set(1.2, 1.2);
		iconP3.scale.set(1.2, 1.2);
		// iconShow.scale.set(1.2, 1.2);

		iconP1.updateHitbox();
		iconP2.updateHitbox();
		iconP3.updateHitbox();
		// iconShow.updateHitbox();

		if (curBeat % 2 == 0)
		{
			iconP1.angle = 10;
			iconP2.angle = 10;
			iconP3.angle = 10;
		}
		else
		{
			iconP1.angle = -10;
			iconP2.angle = -10;
			iconP3.angle = -10;
		}

		FunkinLua.cancelTween('iconP1tween');
		FunkinLua.cancelTween('iconP2tween');
		FunkinLua.cancelTween('iconP3tween');

		modchartTweens.set('iconP1tween', FlxTween.tween(iconP1, {angle: 0}, Conductor.crochet/1000, {ease: FlxEase.quartOut,
			onComplete: function(twn:FlxTween)
			{
				callOnLuas('onTweenCompleted', ['iconP1tween']);
				modchartTweens.remove('iconP1tween');
			}
		}));

		modchartTweens.set('iconP2tween', FlxTween.tween(iconP2, {angle: 0}, Conductor.crochet/1000, {ease: FlxEase.quartOut,
			onComplete: function(twn:FlxTween)
			{
				callOnLuas('onTweenCompleted', ['iconP2tween']);
				modchartTweens.remove('iconP2tween');
			}
		}));

		modchartTweens.set('iconP3tween', FlxTween.tween(iconP3, {angle: 0}, Conductor.crochet/1000, {ease: FlxEase.quartOut,
			onComplete: function(twn:FlxTween)
			{
				callOnLuas('onTweenCompleted', ['iconP3tween']);
				modchartTweens.remove('iconP3tween');
			}
		}));

		if (generatedMusic && SONG.notes[curSection] != null && !endingSong && !isCameraOnForcedPos)
		{
			moveCameraSection();
		}

		if(scoreZoomOnBeat == true && curBeat % 2 == 1)
		{
			scoreTxt.scale.set(1, 1);
			FlxTween.tween(scoreTxt.scale, {x: 1.15, y: 1.075}, 0.3, {ease: FlxEase.quadOut, type: BACKWARD});         
		}

		if (gf != null && curBeat % Math.round(gfSpeed * gf.danceEveryNumBeats) == 0 && gf.animation.curAnim != null && !gf.animation.curAnim.name.startsWith("sing") && !gf.stunned)
		{
			gf.dance();
		}
		if (curBeat % boyfriend.danceEveryNumBeats == 0 && boyfriend.animation.curAnim != null && !boyfriend.animation.curAnim.name.startsWith('sing') && !boyfriend.stunned)
		{
			boyfriend.dance();
		}
		if (curBeat % boyfriend2.danceEveryNumBeats == 0 && boyfriend2.animation.curAnim != null && !boyfriend2.animation.curAnim.name.startsWith('sing') && !boyfriend2.stunned)
		{
			boyfriend2.dance();
		}
		if (curBeat % dad.danceEveryNumBeats == 0 && dad.animation.curAnim != null && !dad.animation.curAnim.name.startsWith('sing') && !dad.stunned)
		{
			dad.dance();
		}

		switch (curStage)
		{
			case 'tank':
				if(!ClientPrefs.lowQuality) tankWatchtower.dance();
				foregroundSprites.forEach(function(spr:BGSprite)
				{
					spr.dance();
				});

			case 'school':
				if(!ClientPrefs.lowQuality) {
					bgGirls.dance();
				}

			case 'mall':
				if(!ClientPrefs.lowQuality) {
					upperBoppers.dance(true);
				}

				if(heyTimer <= 0) bottomBoppers.dance(true);
				santa.dance(true);

			case 'super-idol':
				if (!ClientPrefs.lowQuality) {
					artists.dance(true);
				}

			case 'limo':
				if(!ClientPrefs.lowQuality) {
					grpLimoDancers.forEach(function(dancer:BackgroundDancer)
					{
						dancer.dance();
					});
				}

				if (FlxG.random.bool(10) && fastCarCanDrive)
					fastCarDrive();
			case "philly":
				if (!trainMoving)
					trainCooldown += 1;

				if (curBeat % 4 == 0)
				{
					curLight = FlxG.random.int(0, phillyLightsColors.length - 1, [curLight]);
					phillyWindow.color = phillyLightsColors[curLight];
					phillyWindow.alpha = 1;
				}

				if (curBeat % 8 == 4 && FlxG.random.bool(30) && !trainMoving && trainCooldown > 8)
				{
					trainCooldown = FlxG.random.int(-4, 0);
					trainStart();
				}
		}

		if (curStage == 'spooky' && FlxG.random.bool(10) && curBeat > lightningStrikeBeat + lightningOffset)
		{
			lightningStrikeShit();
		}
		lastBeatHit = curBeat;

		setOnLuas('curBeat', curBeat); //DAWGG?????
		callOnLuas('onBeatHit', []);

		if (script != null)
		{
			script.executeFunc("onBeatHit");
		}
	}

	override function sectionHit()
	{
		super.sectionHit();

		if (SONG.notes[curSection] != null)
		{
			if (generatedMusic && !endingSong && !isCameraOnForcedPos)
			{
				moveCameraSection();
			}

			if (camZooming && FlxG.camera.zoom < 1.35 && ClientPrefs.camZooms && SONG.song != 'Haxxer')
			{
				FlxG.camera.zoom += 0.015 * camZoomingMult;
				camHUD.zoom += 0.03 * camZoomingMult;
			}

			if (SONG.notes[curSection].changeBPM)
			{
				Conductor.changeBPM(SONG.notes[curSection].bpm);
				setOnLuas('curBpm', Conductor.bpm);
				setOnLuas('crochet', Conductor.crochet);
				setOnLuas('stepCrochet', Conductor.stepCrochet);
			}
			setOnLuas('mustHitSection', SONG.notes[curSection].mustHitSection);
			setOnLuas('altAnim', SONG.notes[curSection].altAnim);
			setOnLuas('altAnimPlayer', SONG.notes[curSection].altAnimPlayer);
			setOnLuas('gfSection', SONG.notes[curSection].gfSection);
			setOnLuas('bf2Section', SONG.notes[curSection].bf2Section);
		}
		
		setOnLuas('curSection', curSection);
		callOnLuas('onSectionHit', []);
	}

	public function callOnLuas(event:String, args:Array<Dynamic>, ignoreStops = true, exclusions:Array<String> = null):Dynamic {
		var returnVal:Dynamic = FunkinLua.Function_Continue;
		#if LUA_ALLOWED
		if(exclusions == null) exclusions = [];
		for (script in luaArray) {
			if(exclusions.contains(script.scriptName))
				continue;

			var ret:Dynamic = script.call(event, args);
			if(ret == FunkinLua.Function_StopLua && !ignoreStops)
				break;
			
			// had to do this because there is a bug in haxe where Stop != Continue doesnt work
			var bool:Bool = ret == FunkinLua.Function_Continue;
			if(!bool) {
				returnVal = cast ret;
			}
		}
		#end
		//trace(event, returnVal);
		return returnVal;
	}

	public function setOnLuas(variable:String, arg:Dynamic) {
		#if LUA_ALLOWED
		for (i in 0...luaArray.length) {
			luaArray[i].set(variable, arg);
		}
		#end
	}

	public function doTimeTravel(shiftPressed:Bool = false, ?skipExactly:Int = 0)
	{
		var multiplier:Int = 1;
		if (shiftPressed)multiplier = 6; //we skippin minutes now

		if (skipExactly != 0)
		{
			if (!usedTimeTravel && skipExactly < FlxG.sound.music.length) 
			{
				usedTimeTravel = true;
				FlxG.sound.music.pause();
				vocals.pause();
				Conductor.songPosition = skipExactly;
				notes.forEachAlive(function(daNote:Note)
				{
					if(daNote.strumTime - 500 < Conductor.songPosition) {
						daNote.active = false;
						daNote.visible = false;
					
						daNote.kill();
						notes.remove(daNote, true);
						daNote.destroy();
					}
				});
				for (i in 0...unspawnNotes.length) {
					var daNote:Note = unspawnNotes[0];
					if(daNote.strumTime - 500 >= Conductor.songPosition) {
						break;
					}
					unspawnNotes.splice(unspawnNotes.indexOf(daNote), 1);
				}
				FlxG.sound.music.time = Conductor.songPosition;
				FlxG.sound.music.play();
				vocals.time = Conductor.songPosition;
				vocals.play();
				new FlxTimer().start(0.5, function(tmr:FlxTimer)
					{
						usedTimeTravel = false;
					});
			}
		}
		else
		{
			if (!usedTimeTravel && Conductor.songPosition + 10000 * multiplier < FlxG.sound.music.length) 
			{
				usedTimeTravel = true;
				FlxG.sound.music.pause();
				vocals.pause();
				Conductor.songPosition += 10000 * multiplier;
				notes.forEachAlive(function(daNote:Note)
				{
					if(daNote.strumTime - 500 < Conductor.songPosition) {
						daNote.active = false;
						daNote.visible = false;
					
						daNote.kill();
						notes.remove(daNote, true);
						daNote.destroy();
					}
				});
				for (i in 0...unspawnNotes.length) {
					var daNote:Note = unspawnNotes[0];
					if(daNote.strumTime - 500 >= Conductor.songPosition) {
						break;
					}
					unspawnNotes.splice(unspawnNotes.indexOf(daNote), 1);
				}
				FlxG.sound.music.time = Conductor.songPosition;
				FlxG.sound.music.play();
				vocals.time = Conductor.songPosition;
				vocals.play();
				new FlxTimer().start(0.5, function(tmr:FlxTimer)
					{
						usedTimeTravel = false;
					});
			}
		}	
	}

	function StrumPlayAnim(note:Note = null, isDad:Bool, id:Int, time:Float) {
		var spr:StrumNote = null;
		if(isDad) {
			spr = strumLineNotes.members[id];
		} else {
			spr = playerStrums.members[id];
		}

		if(spr != null) {
			spr.playAnim('confirm', true);
			spr.resetAnim = time;
		}
	}

	public var ratingName:String = '?';
	public var ratingPercent:Float;
	public var ratingFC:String;
	public var judgementRatingFC:String; // i dont know basic words lol
	public var ratingIndexArray:Array<String> = ["sick", "good", "bad", "shit"];
	public var returnArray:Array<String> = [" [SFC]", " [GFC]", " [FC]", ""];
	public var smallestRating:String;
	public var ratingAward:String;
	public var ratingString:String;
	public function RecalculateRating(badHit:Bool = false, noKick:Bool = false) {
		setOnLuas('score', songScore);
		setOnLuas('misses', songMisses);
		setOnLuas('hits', songHits);

		ratingString = ratingFC;

		var ret:Dynamic = callOnLuas('onRecalculateRating', [], false);
		if(ret != FunkinLua.Function_Stop)
		{
			if(totalPlayed < 1) { //Prevent divide by 0
				if (ClientPrefs.gameHuds == "Blantados HUD")
				{
					ratingName = 'You Suck!';
				}
				else
				{
					ratingName = '?';
				}

				judgementRatingFC = " [?]";
				ratingAward = "N/A";
				if (ClientPrefs.gameHuds == "Vs Impostor HUD") ratingFC = "?";
			}
			else
			{
				// Rating Percent
				ratingPercent = Math.min(1, Math.max(0, totalNotesHit / totalPlayed));

				// Rating Name
				if(ratingPercent >= 1)
				{
					ratingName = ratingStuff[ratingStuff.length-1][0]; //Uses last string
					ratingAward = ratingRankStuff[ratingRankStuff.length-1][0]; //Uses last string
				}
				else
				{
					for (i in 0...ratingStuff.length-1)
					{
						if(ratingPercent < ratingStuff[i][1])
						{
							ratingName = ratingStuff[i][0];
							break;
						}
					}

					for (i in 0...ratingRankStuff.length-1)
					{
						if(ratingPercent < ratingRankStuff[i][1])
						{
							ratingAward = ratingRankStuff[i][0];
							break;
						}
					}
				}
			}

			// Rating FC
			ratingFC = "";
			if (sicks > 0) judgementRatingFC = " [SFC]";
			if (goods > 0) judgementRatingFC = " [GFC]";
			if (bads > 0) judgementRatingFC = " [FC]";
			else if (songMisses > 0 && songMisses < 10) judgementRatingFC = " [SDCB]";
			else if (songMisses >= 10) judgementRatingFC = " [Clear]";

			if (ClientPrefs.gameHuds != "Vs Impostor HUD")
			{
				if (sicks > 0) ratingFC = "MFC";
				if (goods > 0) ratingFC = "GFC";
				if (bads > 0 || shits > 0) ratingFC = "FC";
				if (songMisses > 0 && songMisses < 10) ratingFC = "SDCB";
				else if (songMisses >= 10) ratingFC = "Clear";
			}
			else
			{
				if (sicks > 0) ratingFC = " [SFC]";
				if (goods > 0) ratingFC = " [GFC]";
				if (bads > 0) ratingFC = " [FC]";
				else if (shits > 0 || songMisses > 0) ratingFC = "";
			}
		}
		updateScore(badHit, noKick); // score will only update after rating is calculated, if it's a badHit, it shouldn't bounce -Ghost
		setOnLuas('rating', ratingPercent);
		setOnLuas('ratingName', ratingName);
		setOnLuas('ratingFC', ratingFC);
	}

	#if ACHIEVEMENTS_ALLOWED
	private function checkForAchievement(achievesToCheck:Array<String> = null):String
	{
		// if(chartingMode) return null;

		var usedPractice:Bool = (ClientPrefs.getGameplaySetting('practice', false) || ClientPrefs.getGameplaySetting('botplay', false));
		for (i in 0...achievesToCheck.length) {
			var achievementName:String = achievesToCheck[i];
			if(!Achievements.isAchievementUnlocked(achievementName)) {
				var unlock:Bool = false;
				switch(achievementName)
				{
					case 'week1_nomiss' | 'week2_nomiss' | 'week3_nomiss' | 'week4_nomiss' | 'week5_nomiss' | 'week6_nomiss' | 'week7_nomiss':
						if(isStoryMode && campaignMisses + songMisses < 1 && CoolUtil.difficultyString() == 'HARD' && storyPlaylist.length <= 1 && !changedDifficulty && !usedPractice)
						{
							var weekName:String = WeekData.getWeekFileName();
							switch(weekName) //I know this is a lot of duplicated code, but it's easier readable and you can add weeks with different names than the achievement tag
							{
								case 'week1':
									if(achievementName == 'week1_nomiss') unlock = true;
								case 'week2':
									if(achievementName == 'week2_nomiss') unlock = true;
								case 'week3':
									if(achievementName == 'week3_nomiss') unlock = true;
								case 'week4':
									if(achievementName == 'week4_nomiss') unlock = true;
								case 'week5':
									if(achievementName == 'week5_nomiss') unlock = true;
								case 'week6':
									if(achievementName == 'week6_nomiss') unlock = true;
								case 'week7':
									if(achievementName == 'week7_nomiss') unlock = true;
							}
						}
					case 'ur_bad':
						if(ratingPercent < 0.2 && !practiceMode) {
							unlock = true;
						}
					case 'ur_good':
						if(ratingPercent >= 1 && !usedPractice) {
							unlock = true;
						}
					case 'roadkill_enthusiast':
						if(Achievements.henchmenDeath >= 100) {
							unlock = true;
						}
					case 'oversinging':
						if(boyfriend.holdTimer >= 10 && !usedPractice) {
							unlock = true;
						}
					case 'hype':
						if(!boyfriendIdled && !usedPractice) {
							unlock = true;
						}
					case 'two_keys':
						if(!usedPractice) {
							var howManyPresses:Int = 0;
							for (j in 0...keysPressed.length) {
								if(keysPressed[j]) howManyPresses++;
							}

							if(howManyPresses <= 2) {
								unlock = true;
							}
						}
					case 'toastie':
						if(ClientPrefs.lowQuality && !ClientPrefs.globalAntialiasing) {
							unlock = true;
						}
					case 'debugger':
						if(Paths.formatToSongPath(SONG.song) == 'test' && !usedPractice) {
							unlock = true;
						}
				}

				if(unlock) {
					Achievements.unlockAchievement(achievementName);
					return achievementName;
				}
			}
		}
		return null;
	}
	#end

	var curLight:Int = -1;
	var curLightEvent:Int = -1;

	public function startScript()
	{
		var formattedFolder:String = Paths.formatToSongPath(SONG.song);

		var path:String = Paths.hscript(formattedFolder + '/script');
		var pathMods:String = Paths.modsNhscript(formattedFolder + '/script');

		var hxdata:String = "";

		var foldersToCheck:Array<String> = [Paths.getPreloadPath('scripts/')];

		#if MODS_ALLOWED
		foldersToCheck.insert(0, Paths.mods('scripts/'));
		foldersToCheck.insert(0, Paths.mods('data/' + Paths.formatToSongPath(SONG.song) + '/' ));
		foldersToCheck.insert(0, Paths.getPreloadPath('data/' + Paths.formatToSongPath(SONG.song) + '/'));
		if(Paths.currentModDirectory != null && Paths.currentModDirectory.length > 0)
		{
			foldersToCheck.insert(0, Paths.mods(Paths.currentModDirectory + '/scripts/'));
			foldersToCheck.insert(0, Paths.mods(Paths.currentModDirectory + '/data/' + Paths.formatToSongPath(SONG.song) + '/'));
		}


		for(mod in Paths.getGlobalMods())
		{
			foldersToCheck.insert(0, Paths.mods(mod + '/scripts/'));
			foldersToCheck.insert(0, Paths.mods(mod + '/data/' + Paths.formatToSongPath(SONG.song) + '/'));
		}
		#end

		for (folder in foldersToCheck)
		{
			if(FileSystem.exists(folder))
			{
				for (file in FileSystem.readDirectory(folder))
				{
					if(file.endsWith('.hx'))
					{
						trace("found 'em");
						hxdata = File.getContent(folder + file);
					}
				}
			}
		}

		if (hxdata != "")
		{
			script = new Script();

			script.setVariable("onSongStart", function()
			{
			});

			script.setVariable("destroy", function()
			{
			});

			script.setVariable("onCreate", function()
			{
			});

			script.setVariable("onUpdateScore", function()
			{
			});

			script.setVariable("onBeatHit", function()
			{
			});

			script.setVariable("onCreatePost", function()
			{
			});

			script.setVariable("onStartCountdown", function()
			{
			});

			script.setVariable("onStepHit", function()
			{
			});

			script.setVariable("onUpdate", function(elapsed:Float = null)
			{
			});
			script.setVariable("onUpdatePost", function(elapsed:Float = null)
			{
			});
			script.setVariable("onMoveCamera", function(character:Character)
			{
			});

			script.setVariable("import", function(lib:String, ?as:Null<String>) // Does this even work?
			{
				if (lib != null && Type.resolveClass(lib) != null)
				{
					script.setVariable(as != null ? as : lib, Type.resolveClass(lib));
				}
			});

			script.setVariable("fromRGB", function(Red:Int, Green:Int, Blue:Int, Alpha:Int = 255)
			{
				return FlxColor.fromRGB(Red, Green, Blue, Alpha);
			});

			script.setVariable("curStep", curStep);
			script.setVariable("bpm", SONG.bpm);

			// PRESET CLASSES
			script.setVariable("PlayState", instance);
			script.setVariable("Playstate", PlayState);
			script.setVariable("game", instance);
			script.setVariable("FlxTween", FlxTween);
			script.setVariable("FlxEase", FlxEase);
			script.setVariable("FlxSprite", FlxSprite);
			script.setVariable("CoolUtil", CoolUtil);
			script.setVariable("Math", Math);
			script.setVariable("FlxG", FlxG);
			script.setVariable("gfSection", SONG.notes[curSection].gfSection);
			script.setVariable("bf2Section", SONG.notes[curSection].bf2Section);
			script.setVariable("mustHitSection", SONG.notes[curSection].mustHitSection);
			script.setVariable("ClientPrefs", ClientPrefs);
			script.setVariable("FlxTimer", FlxTimer);
			script.setVariable("Main", Main);
			script.setVariable("Event", Event);
			script.setVariable("Conductor", Conductor);
			script.setVariable("Std", Std);
			script.setVariable("FlxText", FlxText);
			script.setVariable("FlxTextBorderStyle", FlxTextBorderStyle);
			script.setVariable("Paths", Paths);
			script.setVariable("CENTER", FlxTextAlign.CENTER);
			script.setVariable("Alphabet", Alphabet);
			script.setVariable("FlxTextFormat", FlxTextFormat);
			script.setVariable("InputFormatter", InputFormatter);
			script.setVariable("FlxTextFormatMarkerPair", FlxTextFormatMarkerPair);

			script.runScript(hxdata);
		}
	}
}
