--borrowed from V.S OHAGI
--amazing mod 10/10

local xOffset = 30;
function onCreatePost()
    setProperty('judgementCounter.visible', false)
    -- Defult HUD visible --

    setProperty('scoreTxt.visible', false);
    --setProperty('timeBarBG.visible', false);
    --setProperty('timeBar.visible', false);
    setProperty('timeTxt.visible', false);

    setProperty('timeTxt.y', getProperty('timeTxt.y') - 10)

    -- Game Score --

    makeLuaText('Score', 'Score: 0', 0, 30, 40);
    setTextSize('Score', 21);
    setProperty('Score.alpha', 0);
    addLuaText('Score');

    makeLuaText('Miss', 'Misses: 0', 0, 30, 60);
    setTextSize('Miss', 21);
    setProperty('Miss.alpha', 0);
    addLuaText('Miss');

    makeLuaText('Accuracy', 'Accuracy: 0%', 0, 30, 80);
    setTextSize('Accuracy', 21);
    setProperty('Accuracy.alpha', 0);
    addLuaText('Accuracy');

    makeLuaText('Rating', 'Rating: ?', 0, 30, 100);
    setTextSize('Rating', 21);
    setProperty('Rating.alpha', 0);
    addLuaText('Rating');

    makeLuaText('Letter', '', 0, 30, 120);
    setTextSize('Letter', 21);
    setProperty('Letter.alpha', 0);
    addLuaText('Letter');

    makeLuaText('Song', '', screenWidth + xOffset, 0, 10);
    --screenCenter('Song', 'x')
    setTextString('Song', getProperty('songNameHey.text'));
    setTextSize('Song', 21);
    setTextString('Song', songName);
    setProperty('Song.alpha', 0);
    addLuaText('Song');

    makeLuaText('Elapsed', '', 0, 30, 10);
    setTextSize('Elapsed', 21);
    setTextString('Elapsed', getProperty('songPercent'));
    setProperty('Elapsed.alpha', 0);
    addLuaText('Elapsed');

    makeLuaText('Total', '', 0, 1100, 10);
    setTextSize('Total', 21);
    setTextString('Total', getProperty('endSongPercent'));
    setProperty('Total.alpha', 0);
    addLuaText('Total');

    -- Evaluation --

    makeLuaText('Sick', 'Sick: 0', 0, 1100, 15);
	setTextSize('Sick', 21);
    setProperty('Sick.alpha', 0);
	addLuaText('Sick');

	makeLuaText('Good', 'Good: 0', 0, 1100, 35);
	setTextSize('Good', 21);
    setProperty('Good.alpha', 0);
	addLuaText('Good');

	makeLuaText('Bad', 'Bad: 0', 0, 1100, 55);
	setTextSize('Bad', 21);
    setProperty('Bad.alpha', 0);
	addLuaText('Bad');

	makeLuaText('Shit', 'Shit: 0', 0, 1100, 75);
	setTextSize('Shit', 21);
    setProperty('Shit.alpha', 0);
	addLuaText('Shit');

    plusNum = -20

    -- UP Scroll Setting --

    if getPropertyFromClass("ClientPrefs", "downScroll") == false then

        setProperty('timeTxt.y', getProperty('timeTxt.y') + 30)
        setProperty('Score.y', 585 + plusNum);
        setProperty('Miss.y', 605 + plusNum);
        setProperty('Accuracy.y', 625 + plusNum);
        setProperty('Rating.y', 645 + plusNum);
        setProperty('Letter.y', 665 + plusNum);
        setProperty('Song.y', 683);
        setProperty('Sick.y', 585 + 0);
        setProperty('Good.y', 605 + 0);
        setProperty('Bad.y', 625 + 0);
        setProperty('Shit.y', 645 + 0);
        setProperty('Elapsed.y', 683 + 0);
        setProperty('Total.y', 683 + 0);

    end

    if getPropertyFromClass("ClientPrefs", "globalAntialiasing") then

        setProperty('Score.antialiasing', true);
        setProperty('Miss.antialiasing', true);
        setProperty('Accuracy.antialiasing', true);
        setProperty('Rating.antialiasing', true);
        setProperty('Letter.antialiasing', true);
        setProperty('Elapsed.antialiasing', true);
        setProperty('Total.antialiasing', true);
        setProperty('Song.antialiasing', true);
        setProperty('Sick.antialiasing', true);
        setProperty('Good.antialiasing', true);
        setProperty('Bad.antialiasing', true);
        setProperty('Shit.antialiasing', true);
        setProperty('botplayTxt.antialiasing', true);

    end

    if not getProperty("showTime") then
    
        setProperty('Total.visible', false);
        setProperty('Elapsed.visible', false);
        setProperty('Song.visible', false);
        setProperty('timeBarBG.visible', false);
        setProperty('timeBar.visible', false);
    
    end

    font = 'PhantomMuff.ttf';

    setTextFont('Score', font)
    setTextFont('Miss', font)
    setTextFont('Accuracy', font)
    setTextFont('Rating', font)
    setTextFont('Letter', font)
    setTextFont('Sick', font)
    setTextFont('Good', font)
    setTextFont('Bad', font)
    setTextFont('Shit', font)
    setTextFont('Song', font)
    setTextFont('Elapsed', font)
    setTextFont('Total', font)

end

-- Add Score --

function onUpdate()
    -----------------code from SaraHUD-------------------------
    local timeElapsed = math.floor(getProperty('songTime')/1000)
    local timeTotal = math.floor(getProperty('songLength')/1000)
    local timeElapsedFixed = string.format("%.2d:%.2d", timeElapsed/60%60, timeElapsed%60)
    local timeTotalFixed = string.format("%.2d:%.2d", timeTotal/60%60, timeTotal%60)
    setTextString('Elapsed', timeElapsedFixed)
    setTextString('Total', timeTotalFixed)
    -----------------------------------------------------------

    x = getProperty('Song.width')
    --setObjectOrderForSong('Song');
    --debugPrint(x)

    --[[if getProperty('Song.width') == 304 then
        setProperty('Song.x', fixedX);
    elseif getProperty('Song.width') == 316 then
        setProperty('Song.x', fixeedX);
    end]]

    RPC = getProperty('convertedAccDisplay');
    RPC2 = getProperty('ratingPercent');

    ratingName = getProperty('ratingName');
    ratingFC = getProperty('ratingFC');

    if ratingFC == ''  or ratingFC == '?' then
        setProperty('ratingFC', '?')
    end

    setTextString('Score', 'Score: '..getProperty('songScore'));
    setTextString('Miss', 'Misses: '..getProperty('songMisses'));
    setTextString('Accuracy', 'Accuracy: '..math.floor((RPC2 * 100) * 100) / 100 ..'%');
    --setTextString('Accuracy', 'Accuracy: '..RPC ..'%');
    setTextString('Rating', 'Rating: '..ratingFC);
    setTextString('Letter', 'Rank: '..ratingName);
    setTextString('Sick', 'Sick: '..getProperty('sicks'));
    setTextString('Good', 'Good: '..getProperty('goods'));
	setTextString('Bad', 'Bad: '..getProperty('bads'));
	setTextString('Shit', 'Shit: '..getProperty('shits'));

end

function onEndSong()
    setTextString('Elapsed', timeTotalFixed)
end

function onSongStart()
 
    --doTweenX('one', 'JukeBox', 0, 1.5, 'CircInOut');
    --runTimer('TxtFadeIn', 1.5, 1);

    --debugPrint(getProperty('songNameDisplay.width'))

    if getPropertyFromClass("ClientPrefs", "hideHud") == false then
        doTweenAlpha('ScoreInOne', 'Score', 1, 0.2);
        doTweenAlpha('ScoreInTwo', 'Miss', 1, 0.2);
        doTweenAlpha('ScoreInThree', 'Accuracy', 1, 0.2);
        doTweenAlpha('ScoreInFour', 'Rating', 1, 0.2);
        doTweenAlpha('ScoreInFive', 'Letter', 1, 0.2);
        doTweenAlpha('ScoreInSix', 'Elapsed', 1, 0.2);
        doTweenAlpha('ScoreInSeven', 'Total', 1, 0.2);
        doTweenAlpha('ScoreInEight', 'Song', 1, 0.2);
        doTweenAlpha('ScoreInNine', 'Sick', 1, 0.2);
        doTweenAlpha('ScoreInTen', 'Good', 1, 0.2);
        doTweenAlpha('ScoreInEleven', 'Bad', 1, 0.2);
        doTweenAlpha('ScoreInTwelve', 'Shit', 1, 0.2);
    end

    if getPropertyFromClass("ClientPrefs", "hideHud") == true then
        doTweenAlpha('ScoreInSix', 'Elapsed', 1, 0.2);
        doTweenAlpha('ScoreInSeven', 'Total', 1, 0.2);
        doTweenAlpha('ScoreInEight', 'Song', 1, 0.2);
    end
end