/*
==============================================================================

This file was auto-generated by the Introjucer!

It contains the basic startup code for a Juce application.

==============================================================================
*/
#include "PluginProcessor.h"
#include "PluginEditor.h"
#include <utility>
#include "Gui/BinaryData.h"


//==============================================================================
ObxdAudioProcessorEditor::ObxdAudioProcessorEditor (ObxdAudioProcessor* ownerFilter)
	: AudioProcessorEditor (ownerFilter)
{
	rebuildComponents();
}

ObxdAudioProcessorEditor::~ObxdAudioProcessorEditor()
{
	getFilter()->removeChangeListener(this);

	deleteAllChildren();
}

void ObxdAudioProcessorEditor::placeLabel(int x , int y , String text)
{
	Label* lab = new Label();
	lab->setBounds(x,y,110,20);
	lab->setJustificationType(Justification::centred);
	lab->setText(text,dontSendNotification);lab->setInterceptsMouseClicks(false,true);
	addAndMakeVisible(lab);
}

ButtonList* ObxdAudioProcessorEditor::addNormalButtonList(int x, int y,int width, ObxdAudioProcessor* filter, int parameter,String name,Image img)
{
	ButtonList *bl = new ButtonList(img,24);
	bl->setBounds(x, y, width, 24);
	//bl->setValue(filter->getParameter(parameter),dontSendNotification);
	addAndMakeVisible(bl);
    bl->addListener (this);
	return bl;

}

Knob* ObxdAudioProcessorEditor::addNormalKnob(int x , int y ,ObxdAudioProcessor* filter, int parameter,String name,float defval)
{
	Knob* knob = new Knob(ImageCache::getFromMemory(BinaryData::knoblsd_png,BinaryData::knoblsd_pngSize),48);
	//Label* knobl = new Label();
	knob->setSliderStyle(Slider::RotaryVerticalDrag);
	knob->setTextBoxStyle(knob->NoTextBox,true,0,0);
	knob->setRange(0,1);
	addAndMakeVisible(knob);
	//addAndMakeVisible(knobl);
	knob->setBounds(x, y, 48,48);
	knob->setValue(filter->getParameter(parameter),dontSendNotification);
	//knobl->setJustificationType(Justification::centred);
	//knobl->setInterceptsMouseClicks(false,true);
	//knobl->setBounds(x-10,y+40,60,10);
	//knobl->setText(name,dontSendNotification);
	knob->setTextBoxIsEditable(false);
	knob->setDoubleClickReturnValue(true,defval);
	knob->addListener (this);
	return knob;
}

Knob* ObxdAudioProcessorEditor::addNormalKnobClassic(int x , int y ,ObxdAudioProcessor* filter, int parameter,String name,float defval)
{
    Knob* knob = new Knob(ImageCache::getFromMemory(BinaryData::knoblsd_png,BinaryData::knoblsd_pngSize),48);
    //Label* knobl = new Label();
    knob->setSliderStyle(Slider::RotaryVerticalDrag);
    knob->setTextBoxStyle(knob->NoTextBox,true,0,0);
    knob->setRange(0,1);
    addAndMakeVisible(knob);
    //addAndMakeVisible(knobl);
    knob->setBounds(x+2, y, 42,42);
    knob->setValue(filter->getParameter(parameter),dontSendNotification);
    //knobl->setJustificationType(Justification::centred);
    //knobl->setInterceptsMouseClicks(false,true);
    //knobl->setBounds(x-10,y+40,60,10);
    //knobl->setText(name,dontSendNotification);
    knob->setTextBoxIsEditable(false);
    knob->setDoubleClickReturnValue(true,defval);
    knob->addListener (this);
    return knob;
}

Knob* ObxdAudioProcessorEditor::addTinyKnob(int x , int y ,ObxdAudioProcessor* filter, int parameter,String name,float defval)
{
	//Knob* knob = new Knob(ImageCache::getFromMemory(BinaryData::knobssd_png,BinaryData::knobssd_pngSize),42);
    Knob* knob = new Knob(ImageCache::getFromMemory(BinaryData::knoblsd_png,BinaryData::knoblsd_pngSize),48);
	//Label* knobl = new Label();
	knob->setSliderStyle(Slider::RotaryVerticalDrag);
	knob->setTextBoxStyle(knob->NoTextBox,true,0,0);
	knob->setRange(0,1);
	addAndMakeVisible(knob);
	//addAndMakeVisible(knobl);
	knob->setBounds(x, y, 36,36);
	knob->setValue(filter->getParameter(parameter),dontSendNotification);
	//knobl->setJustificationType(Justification::centred);
	//knobl->setInterceptsMouseClicks(false,true);
	//knobl->setBounds(x-10,y+25,50,10);
	//knobl->setText(name,dontSendNotification);
	knob->setTextBoxIsEditable(false);
	knob->setDoubleClickReturnValue(true,defval);
	knob->addListener (this);
	return knob;
}

TooglableButton* ObxdAudioProcessorEditor::addNormalTooglableButton(int x , int y , ObxdAudioProcessor* filter,int parameter,String name)
{
	TooglableButton* button = new TooglableButton(ImageCache::getFromMemory(BinaryData::button_png,BinaryData::button_pngSize));
	//	button->setButtonStyle(DrawableButton::ButtonStyle::ImageAboveTextLabel);
	addAndMakeVisible(button);
	button->setBounds(x,y,19,35);
	button->setButtonText(name);
	button->setValue(filter->getParameter(parameter),0);
	button->addListener(this);
	return button;
}

TooglableButton* ObxdAudioProcessorEditor::addTinyTooglableButton(int x , int y , ObxdAudioProcessor* filter,int parameter,String name)
{
	TooglableButton* button = new TooglableButton(ImageCache::getFromMemory(BinaryData::button_png,BinaryData::button_pngSize));
	//	button->setButtonStyle(DrawableButton::ButtonStyle::ImageAboveTextLabel);
	addAndMakeVisible(button);
	button->setBounds(x,y,20,20);
	button->setButtonText(name);
	button->setValue(filter->getParameter(parameter),0);
	button->addListener(this);
	return button;
}

ButtonList* ObxdAudioProcessorEditor::addNormalButtonListClassic(int x, int y,int width, ObxdAudioProcessor* filter, int parameter,String name,Image img)
{
    ButtonList *bl = new ButtonList(img,32);
    bl->setBounds(x, y, width, 32);
    //bl->setValue(filter->getParameter(parameter),dontSendNotification);
    addAndMakeVisible(bl);
    bl->addListener (this);
    return bl;
}

Knob* ObxdAudioProcessorEditor::addTinyKnobClassic(int x , int y ,ObxdAudioProcessor* filter, int parameter,String name,float defval)
{
    Knob* knob = new Knob(ImageCache::getFromMemory(BinaryData::knoblsd_png,BinaryData::knoblsd_pngSize),48);
    //Label* knobl = new Label();
    knob->setSliderStyle(Slider::RotaryVerticalDrag);
    knob->setTextBoxStyle(knob->NoTextBox,true,0,0);
    knob->setRange(0,1);
    addAndMakeVisible(knob);
    //addAndMakeVisible(knobl);
    knob->setBounds(x+3, y+3, 36,36);
    knob->setValue(filter->getParameter(parameter),dontSendNotification);
    //knobl->setJustificationType(Justification::centred);
    //knobl->setInterceptsMouseClicks(false,true);
    //knobl->setBounds(x-10,y+25,50,10);
    //knobl->setText(name,dontSendNotification);
    knob->setTextBoxIsEditable(false);
    knob->setDoubleClickReturnValue(true,defval);
    knob->addListener (this);
    return knob;
}

TooglableButton* ObxdAudioProcessorEditor::addNormalTooglableButtonClassic(int x , int y , ObxdAudioProcessor* filter,int parameter,String name)
{
    TooglableButton* button = new TooglableButton(ImageCache::getFromFile(skinFolder.getChildFile("button.png")));
    //	button->setButtonStyle(DrawableButton::ButtonStyle::ImageAboveTextLabel);
    addAndMakeVisible(button);
    button->setBounds(x,y,28,35);
    button->setButtonText(name);
    button->setValue(filter->getParameter(parameter),0);
    button->addListener(this);
    return button;
}

void ObxdAudioProcessorEditor::rebuildComponents()
{
	ObxdAudioProcessor* ownerFilter = getFilter();

	skinFolder = ownerFilter->getCurrentSkinFolder();
	bool useClassicSkin = skinFolder.getChildFile("legato.png").existsAsFile();

	ownerFilter->removeChangeListener(this);

	deleteAllChildren();

	if (! useClassicSkin)
	{
		// This is where our plugin's editor size is set.

		setSize (1440, 450);
		cutoffKnob = addNormalKnob(893,77,ownerFilter,CUTOFF,"Cutoff",0.4);
		resonanceKnob = addNormalKnob(990,77,ownerFilter,RESONANCE,"Resonance",0);
		filterEnvelopeAmtKnob = addNormalKnob(1088,77,ownerFilter,ENVELOPE_AMT,"Envelope",0);
		multimodeKnob = addNormalKnob(990,167,ownerFilter,MULTIMODE,"Multimode",0.5);

		volumeKnob = addNormalKnob(56,77,ownerFilter,VOLUME,"Volume",0.4);
		portamentoKnob = addNormalKnob(188,77,ownerFilter,PORTAMENTO,"Portamento",0);
		osc1PitchKnob = addNormalKnob(593,77,ownerFilter,OSC1P,"Osc1Pitch",0);
		pulseWidthKnob = addNormalKnob(691,77,ownerFilter,PW,"PW",0);
		osc2PitchKnob = addNormalKnob(788,77,ownerFilter,OSC2P,"Osc2Pitch",0);

		osc1MixKnob = addNormalKnob(597,237,ownerFilter,OSC1MIX,"Osc1",1);
		osc2MixKnob = addNormalKnob(788,237,ownerFilter,OSC2MIX,"Osc2",1);
		noiseMixKnob = addNormalKnob(691,237,ownerFilter,NOISEMIX,"Noise",0);

		xmodKnob = addNormalKnob(656,324,ownerFilter,XMOD,"Xmod",0);
		osc2DetuneKnob = addNormalKnob(800,324,ownerFilter,OSC2_DET,"Detune",0);

		envPitchModKnob = addNormalKnob(728,324,ownerFilter,ENVPITCH,"PEnv",0);
		brightnessKnob = addNormalKnob(586,324,ownerFilter,BRIGHTNESS,"Bri",1);

		attackKnob = addNormalKnob(1182,165,ownerFilter,LATK,"Atk",0);
		decayKnob = addNormalKnob(1246,165,ownerFilter,LDEC,"Dec",0);
		sustainKnob = addNormalKnob(1309,165,ownerFilter,LSUS,"Sus",1);
		releaseKnob = addNormalKnob(1373,165,ownerFilter,LREL,"Rel",0);

		fattackKnob = addNormalKnob(1182,75,ownerFilter,FATK,"Atk",0);
		fdecayKnob = addNormalKnob(1246,75,ownerFilter,FDEC,"Dec",0);
		fsustainKnob = addNormalKnob(1309,75,ownerFilter,FSUS,"Sus",1);
		freleaseKnob = addNormalKnob(1373,75,ownerFilter,FREL,"Rel",0);

		lfoFrequencyKnob = addNormalKnob(293,77,ownerFilter,LFOFREQ,"Freq",0);
		lfoAmt1Knob = addNormalKnob(390,77,ownerFilter,LFO1AMT,"Pitch",0);
		lfoAmt2Knob = addNormalKnob(488,77,ownerFilter,LFO2AMT,"PWM",0);

		lfoSinButton = addNormalTooglableButton(309,162,ownerFilter,LFOSINWAVE,"Sin");
		lfoSquareButton = addNormalTooglableButton(309,252,ownerFilter,LFOSQUAREWAVE,"SQ");
		lfoSHButton = addNormalTooglableButton(309,335,ownerFilter,LFOSHWAVE,"S&H");

		lfoOsc1Button = addNormalTooglableButton(406,162,ownerFilter,LFOOSC1,"Osc1");
		lfoOsc2Button = addNormalTooglableButton(406,252,ownerFilter,LFOOSC2,"Osc2");
		lfoFilterButton = addNormalTooglableButton(406,335,ownerFilter,LFOFILTER,"Filt");

		lfoPwm1Button = addNormalTooglableButton(504,162,ownerFilter,LFOPW1,"Osc1");
		lfoPwm2Button = addNormalTooglableButton(504,252,ownerFilter,LFOPW2,"Osc2");

		hardSyncButton = addNormalTooglableButton(730,162,ownerFilter,OSC2HS,"Sync");
		osc1SawButton = addNormalTooglableButton(587,162,ownerFilter,OSC1Saw,"S");
		osc2SawButton = addNormalTooglableButton(782,162,ownerFilter,OSC2Saw,"S");

		osc1PulButton = addNormalTooglableButton(632,162,ownerFilter,OSC1Pul,"P");
		osc2PulButton = addNormalTooglableButton(827,162,ownerFilter,OSC2Pul,"P");

		pitchQuantButton =  addNormalTooglableButton(684,162,ownerFilter,OSCQuantize,"Step");

		filterBPBlendButton = addNormalTooglableButton(1082,162,ownerFilter,BANDPASS,"Bp");
		fourPoleButton = addNormalTooglableButton(1127,162,ownerFilter,FOURPOLE,"24");
		filterHQButton = addNormalTooglableButton(932,162,ownerFilter,FILTER_WARM,"HQ");

		filterKeyFollowButton =  addNormalTooglableButton(887,162,ownerFilter,FLT_KF,"Key");
		unisonButton = addNormalTooglableButton(205,162,ownerFilter,UNISON,"Uni");

		tuneKnob = addNormalKnob(30,252,ownerFilter,TUNE,"Tune",0.5);
		transposeKnob = addNormalKnob(90,252,ownerFilter,OCTAVE,"Transpose",0.5);

		voiceDetuneKnob =addNormalKnob(188,252,ownerFilter,UDET,"VoiceDet",0);

		bendLfoRateKnob = addTinyKnob(928,300,ownerFilter,BENDLFORATE,"ModRate",0.4);
		veloFltEnvKnob = addTinyKnob(1013,300,ownerFilter,VFLTENV,"VFE",0);
		veloAmpEnvKnob = addTinyKnob(1111,300,ownerFilter,VAMPENV,"VAE",0);

		midiLearnButton = addNormalTooglableButton(74,162,ownerFilter,MIDILEARN,"LEA");
		midiUnlearnButton = addNormalTooglableButton(122,162,ownerFilter,UNLEARN,"UNL");

		pan1Knob = addTinyKnob(914,368,ownerFilter,PAN1,"1",0.5);
		pan2Knob = addTinyKnob(977,368,ownerFilter,PAN2,"2",0.5);
		pan3Knob = addTinyKnob(1040,368,ownerFilter,PAN3,"3",0.5);
		pan4Knob = addTinyKnob(1103,368,ownerFilter,PAN4,"4",0.5);

		pan5Knob = addTinyKnob(1165,368,ownerFilter,PAN5,"5",0.5);
		pan6Knob = addTinyKnob(1228,368,ownerFilter,PAN6,"6",0.5);
		pan7Knob = addTinyKnob(1290,368,ownerFilter,PAN7,"7",0.5);
		pan8Knob = addTinyKnob(1353,368,ownerFilter,PAN8,"8",0.5);

		bendOsc2OnlyButton = addNormalTooglableButton(228,335,ownerFilter,BENDOSC2,"Osc2");
		bendRangeButton = addNormalTooglableButton(183,335,ownerFilter,BENDRANGE,"12");
		asPlayedAllocButton = addNormalTooglableButton(25,162,ownerFilter,ASPLAYEDALLOCATION,"APA");

		filterDetuneKnob = addTinyKnob(1228,300,ownerFilter,FILTERDER,"Flt",0.2);
		portamentoDetuneKnob = addTinyKnob(1291,300,ownerFilter,PORTADER,"Port",0.2);
		envelopeDetuneKnob = addTinyKnob(1353,300,ownerFilter,ENVDER,"Env",0.2);

		voiceSwitch = addNormalButtonList(124,338,17,ownerFilter,VOICE_COUNT,"VoiceCount",ImageCache::getFromMemory(BinaryData::voices_png,BinaryData::voices_pngSize));
		voiceSwitch ->addChoise("1");
		voiceSwitch ->addChoise("2");
		voiceSwitch ->addChoise("3");
		voiceSwitch ->addChoise("4");
		voiceSwitch ->addChoise("5");
		voiceSwitch ->addChoise("6");
		voiceSwitch ->addChoise("7");
		voiceSwitch ->addChoise("8");
		voiceSwitch ->setValue(ownerFilter->getParameter(VOICE_COUNT),dontSendNotification);

		legatoSwitch = addNormalButtonList(25,338,65,ownerFilter,LEGATOMODE,"Legato",ImageCache::getFromMemory(BinaryData::legato_png,BinaryData::legato_pngSize));
		legatoSwitch ->addChoise("Keep All");
		legatoSwitch ->addChoise("Keep Filter Envelope");
		legatoSwitch ->addChoise("Keep Amplitude Envelope");
		legatoSwitch ->addChoise("Retrig");
		legatoSwitch ->setValue(ownerFilter->getParameter(LEGATOMODE),dontSendNotification);
	}
	else
	{
		// This is where our plugin's editor size is set.

		setSize (1087, 442);
		cutoffKnob = addNormalKnobClassic(577,40,ownerFilter,CUTOFF,"Cutoff",0.4);
		resonanceKnob = addNormalKnobClassic(638,40,ownerFilter,RESONANCE,"Resonance",0);
		filterEnvelopeAmtKnob = addNormalKnobClassic(699,40,ownerFilter,ENVELOPE_AMT,"Envelope",0);
		multimodeKnob = addTinyKnobClassic(643,106,ownerFilter,MULTIMODE,"Multimode",0.5);

		volumeKnob = addNormalKnobClassic(53,120,ownerFilter,VOLUME,"Volume",0.4);
		portamentoKnob = addNormalKnobClassic(175,241,ownerFilter,PORTAMENTO,"Portamento",0);
		osc1PitchKnob = addNormalKnobClassic(271,40,ownerFilter,OSC1P,"Osc1Pitch",0);
		pulseWidthKnob = addNormalKnobClassic(334,40,ownerFilter,PW,"PW",0);
		osc2PitchKnob = addNormalKnobClassic(397,40,ownerFilter,OSC2P,"Osc2Pitch",0);

		osc1MixKnob = addNormalKnobClassic(490,40,ownerFilter,OSC1MIX,"Osc1",1);
		osc2MixKnob = addNormalKnobClassic(490,132,ownerFilter,OSC2MIX,"Osc2",1);
		noiseMixKnob = addNormalKnobClassic(490,224,ownerFilter,NOISEMIX,"Noise",0);

		xmodKnob = addNormalKnobClassic(334,168,ownerFilter,XMOD,"Xmod",0);
		osc2DetuneKnob = addNormalKnobClassic(334,104,ownerFilter,OSC2_DET,"Detune",0);

		envPitchModKnob = addNormalKnobClassic(376,232,ownerFilter,ENVPITCH,"PEnv",0);
		brightnessKnob = addNormalKnobClassic(291,232,ownerFilter,BRIGHTNESS,"Bri",1);

		attackKnob = addNormalKnobClassic(791,132,ownerFilter,LATK,"Atk",0);
		decayKnob = addNormalKnobClassic(853,132,ownerFilter,LDEC,"Dec",0);
		sustainKnob = addNormalKnobClassic(916,132,ownerFilter,LSUS,"Sus",1);
		releaseKnob = addNormalKnobClassic(980,132,ownerFilter,LREL,"Rel",0);

		fattackKnob = addNormalKnobClassic(791,40,ownerFilter,FATK,"Atk",0);
		fdecayKnob = addNormalKnobClassic(853,40,ownerFilter,FDEC,"Dec",0);
		fsustainKnob = addNormalKnobClassic(916,40,ownerFilter,FSUS,"Sus",1);
		freleaseKnob = addNormalKnobClassic(980,40,ownerFilter,FREL,"Rel",0);

		lfoFrequencyKnob = addNormalKnobClassic(576,207,ownerFilter,LFOFREQ,"Freq",0);
		lfoAmt1Knob = addNormalKnobClassic(640,207,ownerFilter,LFO1AMT,"Pitch",0);
		lfoAmt2Knob = addNormalKnobClassic(704,207,ownerFilter,LFO2AMT,"PWM",0);

		lfoSinButton = addNormalTooglableButtonClassic(587,269,ownerFilter,LFOSINWAVE,"Sin");
		lfoSquareButton = addNormalTooglableButtonClassic(587,323,ownerFilter,LFOSQUAREWAVE,"SQ");
		lfoSHButton = addNormalTooglableButtonClassic(587,378,ownerFilter,LFOSHWAVE,"S&H");

		lfoOsc1Button = addNormalTooglableButtonClassic(651,269,ownerFilter,LFOOSC1,"Osc1");
		lfoOsc2Button = addNormalTooglableButtonClassic(651,323,ownerFilter,LFOOSC2,"Osc2");
		lfoFilterButton = addNormalTooglableButtonClassic(651,378,ownerFilter,LFOFILTER,"Filt");

		lfoPwm1Button = addNormalTooglableButtonClassic(714,269,ownerFilter,LFOPW1,"Osc1");
		lfoPwm2Button = addNormalTooglableButtonClassic(714,323,ownerFilter,LFOPW2,"Osc2");

		hardSyncButton = addNormalTooglableButtonClassic(282,178,ownerFilter,OSC2HS,"Sync");
		osc1SawButton = addNormalTooglableButtonClassic(265,114,ownerFilter,OSC1Saw,"S");
		osc2SawButton = addNormalTooglableButtonClassic(394,114,ownerFilter,OSC2Saw,"S");

		osc1PulButton = addNormalTooglableButtonClassic(296,114,ownerFilter,OSC1Pul,"P");
		osc2PulButton = addNormalTooglableButtonClassic(425,114,ownerFilter,OSC2Pul,"P");

		pitchQuantButton =  addNormalTooglableButtonClassic(407,178,ownerFilter,OSCQuantize,"Step");

		filterBPBlendButton = addNormalTooglableButtonClassic(697,110,ownerFilter,BANDPASS,"Bp");
		fourPoleButton = addNormalTooglableButtonClassic(728,110,ownerFilter,FOURPOLE,"24");
		filterHQButton = addNormalTooglableButtonClassic(604,110,ownerFilter,FILTER_WARM,"HQ");

		filterKeyFollowButton =  addNormalTooglableButtonClassic(573,110,ownerFilter,FLT_KF,"Key");
		unisonButton = addNormalTooglableButtonClassic(125,251,ownerFilter,UNISON,"Uni");
		tuneKnob = addNormalKnobClassic(114,120,ownerFilter,TUNE,"Tune",0.5);
		voiceDetuneKnob =addNormalKnobClassic(53,241,ownerFilter,UDET,"VoiceDet",0);

		veloAmpEnvKnob = addNormalKnobClassic(486,345,ownerFilter,VAMPENV,"VAE",0);
		veloFltEnvKnob = addNormalKnobClassic(428,345,ownerFilter,VFLTENV,"VFE",0);
		midiLearnButton = addNormalTooglableButtonClassic(126,372,ownerFilter,MIDILEARN,"LEA");
		midiUnlearnButton = addNormalTooglableButtonClassic(185,372,ownerFilter,UNLEARN,"UNL");
		transposeKnob = addNormalKnobClassic(176,120,ownerFilter,OCTAVE,"Transpose",0.5);

		pan1Knob = addTinyKnobClassic(796,318,ownerFilter,PAN1,"1",0.5);
		pan2Knob = addTinyKnobClassic(858,318,ownerFilter,PAN2,"2",0.5);
		pan3Knob = addTinyKnobClassic(921,318,ownerFilter,PAN3,"3",0.5);
		pan4Knob = addTinyKnobClassic(984,318,ownerFilter,PAN4,"4",0.5);

		pan5Knob = addTinyKnobClassic(796,371,ownerFilter,PAN5,"5",0.5);
		pan6Knob = addTinyKnobClassic(858,371,ownerFilter,PAN6,"6",0.5);
		pan7Knob = addTinyKnobClassic(921,371,ownerFilter,PAN7,"7",0.5);
		pan8Knob = addTinyKnobClassic(984,371,ownerFilter,PAN8,"8",0.5);

		bendOsc2OnlyButton = addNormalTooglableButtonClassic(321,354,ownerFilter,BENDOSC2,"Osc2");
		bendRangeButton = addNormalTooglableButtonClassic(267,354,ownerFilter,BENDRANGE,"12");
		asPlayedAllocButton = addNormalTooglableButtonClassic(65,372,ownerFilter,ASPLAYEDALLOCATION,"APA");

		filterDetuneKnob = addTinyKnobClassic(817,240,ownerFilter,FILTERDER,"Flt",0.2);
		envelopeDetuneKnob = addTinyKnobClassic(963,240,ownerFilter,ENVDER,"Env",0.2);
		portamentoDetuneKnob = addTinyKnobClassic(890,240,ownerFilter,PORTADER,"Port",0.2);

		bendLfoRateKnob = addNormalKnobClassic(364,345,ownerFilter,BENDLFORATE,"ModRate",0.4);

		voiceSwitch = addNormalButtonListClassic(172,321,38,ownerFilter,VOICE_COUNT,"VoiceCount",ImageCache::getFromFile(skinFolder.getChildFile("voices.png")));
		voiceSwitch ->addChoise("1");
		voiceSwitch ->addChoise("2");
		voiceSwitch ->addChoise("3");
		voiceSwitch ->addChoise("4");
		voiceSwitch ->addChoise("5");
		voiceSwitch ->addChoise("6");
		voiceSwitch ->addChoise("7");
		voiceSwitch ->addChoise("8");
		voiceSwitch ->setValue(ownerFilter->getParameter(VOICE_COUNT),dontSendNotification);

		legatoSwitch = addNormalButtonListClassic(65,321,95,ownerFilter,LEGATOMODE,"Legato",ImageCache::getFromFile(skinFolder.getChildFile("legato.png")));
		legatoSwitch ->addChoise("Keep all");
		legatoSwitch ->addChoise("Keep fenv");
		legatoSwitch ->addChoise("Keep aenv");
		legatoSwitch ->addChoise("Retrig");
		legatoSwitch ->setValue(ownerFilter->getParameter(LEGATOMODE),dontSendNotification);
	}

	ownerFilter->addChangeListener(this);

	repaint();
}

void ObxdAudioProcessorEditor::buttonClicked(Button * b)
{
	TooglableButton* tb = (TooglableButton*)(b);
	ObxdAudioProcessor* flt = getFilter();
#define bp(T) {flt->setParameterNotifyingHost(T,tb->getValue());}
#define handleBParam(K,T)  if (tb == K) {bp(T)} else
	handleBParam(hardSyncButton,OSC2HS)
		handleBParam(osc1SawButton,OSC1Saw)
		handleBParam(osc2SawButton,OSC2Saw)
		handleBParam(osc1PulButton,OSC1Pul)
		handleBParam(osc2PulButton,OSC2Pul)
		handleBParam(filterKeyFollowButton,FLT_KF)
		handleBParam(pitchQuantButton,OSCQuantize)
		handleBParam(unisonButton,UNISON)
		handleBParam(filterHQButton,FILTER_WARM)
		handleBParam(filterBPBlendButton,BANDPASS)

		handleBParam(lfoSinButton,LFOSINWAVE)
		handleBParam(lfoSquareButton,LFOSQUAREWAVE)
		handleBParam(lfoSHButton,LFOSHWAVE)

		handleBParam(lfoOsc1Button,LFOOSC1)
		handleBParam(lfoOsc2Button,LFOOSC2)
		handleBParam(lfoFilterButton,LFOFILTER)
		handleBParam(lfoPwm1Button,LFOPW1)
		handleBParam(lfoPwm2Button,LFOPW2)
		handleBParam(bendOsc2OnlyButton,BENDOSC2)
		handleBParam(bendRangeButton,BENDRANGE)
		handleBParam(fourPoleButton,FOURPOLE)
		handleBParam(asPlayedAllocButton,ASPLAYEDALLOCATION)
		handleBParam(midiLearnButton,MIDILEARN)
		handleBParam(midiUnlearnButton,UNLEARN)
	{};

}

void ObxdAudioProcessorEditor::comboBoxChanged (ComboBox* cb)
{
	ButtonList* bl = (ButtonList*)(cb);
	ObxdAudioProcessor* flt = getFilter();
	#define cp(T) {flt->setParameterNotifyingHost(T,bl->getValue());}
#define handleCParam(K,T)  if (bl == K) {cp(T)} else
	handleCParam(voiceSwitch,VOICE_COUNT)
		handleCParam(legatoSwitch,LEGATOMODE)
	{};
}

void ObxdAudioProcessorEditor::sliderValueChanged (Slider* c)
{
	ObxdAudioProcessor* flt = getFilter();
	//		flt->beginParameterChangeGesture();
#define sp(T) {flt->setParameterNotifyingHost(T,c->getValue());}
#define handleSParam(K,T)  if (c == K) {sp(T)} else
	handleSParam(cutoffKnob,CUTOFF)
		handleSParam(resonanceKnob,RESONANCE)
		handleSParam(volumeKnob,VOLUME)
		handleSParam(osc1PitchKnob,OSC1P)
		handleSParam(osc2PitchKnob,OSC2P)
		handleSParam(osc2DetuneKnob,OSC2_DET)
		handleSParam(portamentoKnob,PORTAMENTO)
		handleSParam(filterEnvelopeAmtKnob,ENVELOPE_AMT)
		handleSParam(pulseWidthKnob,PW)
		handleSParam(xmodKnob,XMOD)
		handleSParam(multimodeKnob,MULTIMODE)

		handleSParam(attackKnob,LATK)
		handleSParam(decayKnob,LDEC)
		handleSParam(sustainKnob,LSUS)
		handleSParam(releaseKnob,LREL)

		handleSParam(fattackKnob,FATK)
		handleSParam(fdecayKnob,FDEC)
		handleSParam(fsustainKnob,FSUS)
		handleSParam(freleaseKnob,FREL)

		handleSParam(osc1MixKnob,OSC1MIX)
		handleSParam(osc2MixKnob,OSC2MIX)
		handleSParam(noiseMixKnob,NOISEMIX)
		handleSParam(voiceDetuneKnob,UDET)

		handleSParam(filterDetuneKnob,FILTERDER)
		handleSParam(envelopeDetuneKnob,ENVDER)
		handleSParam(portamentoDetuneKnob,PORTADER)

		handleSParam(lfoFrequencyKnob,LFOFREQ)
		handleSParam(lfoAmt1Knob,LFO1AMT)
		handleSParam(lfoAmt2Knob,LFO2AMT)

				handleSParam(pan1Knob,PAN1)
		handleSParam(pan2Knob,PAN2)
		handleSParam(pan3Knob,PAN3)
		handleSParam(pan4Knob,PAN4)
		handleSParam(pan5Knob,PAN5)
		handleSParam(pan6Knob,PAN6)
		handleSParam(pan7Knob,PAN7)
		handleSParam(pan8Knob,PAN8)

		handleSParam(tuneKnob,TUNE)
		handleSParam(brightnessKnob,BRIGHTNESS)
		handleSParam(envPitchModKnob,ENVPITCH)

		handleSParam(bendLfoRateKnob,BENDLFORATE)
		handleSParam(veloAmpEnvKnob,VAMPENV)
		handleSParam(veloFltEnvKnob,VFLTENV)
		handleSParam(transposeKnob,OCTAVE)
		//magic crystal
	{};

	//else if(c == cutoffKnob)
	//{sp(CUTOFF);}
	//else if(c == resonanceKnob)
	//{sp(RESONANCE);}
	//else if(c == portamentoKnob)
	//{sp(PORTAMENTO);}
	//else if(c == volumeKnob)
	//{sp(VOLUME);}
	//else if(c == osc1PitchKnob)
	//{sp(OSC1P);}
	//else if (c == osc2PitchKnob)
	//{sp(OSC2P);}
}

//==============================================================================
void ObxdAudioProcessorEditor::changeListenerCallback (ChangeBroadcaster* source)
{
	ObxdAudioProcessor* filter = getFilter();

	float pr[PARAM_COUNT];
	filter->getCallbackLock().enter();
	for(int i = 0 ; i < PARAM_COUNT;++i)
		pr[i] = filter->getPrograms().currentProgramPtr->values[i];
	filter->getCallbackLock().exit();
#define rn(T,P) (T->setValue(pr[P],dontSendNotification));
	rn(cutoffKnob,CUTOFF)
		rn(resonanceKnob,RESONANCE)
		rn(volumeKnob,VOLUME)
		rn(osc1PitchKnob,OSC1P)
		rn(osc2PitchKnob,OSC2P)
		rn(osc2DetuneKnob,OSC2_DET)
		rn(portamentoKnob,PORTAMENTO)
		rn(filterEnvelopeAmtKnob,ENVELOPE_AMT)
		rn(pulseWidthKnob,PW)
		rn(xmodKnob,XMOD)
		rn(multimodeKnob,MULTIMODE)
		rn(brightnessKnob,BRIGHTNESS)
		rn(envPitchModKnob,ENVPITCH)

		rn(attackKnob,LATK)
		rn(decayKnob,LDEC)
		rn(sustainKnob,LSUS)
		rn(releaseKnob,LREL)

		rn(fattackKnob,FATK)
		rn(fdecayKnob,FDEC)
		rn(fsustainKnob,FSUS)
		rn(freleaseKnob,FREL)

		rn(osc1MixKnob,OSC1MIX)
		rn(osc2MixKnob,OSC2MIX)
		rn(noiseMixKnob,NOISEMIX)
		rn(voiceDetuneKnob,UDET)

		rn(lfoFrequencyKnob,LFOFREQ)
		rn(lfoAmt1Knob,LFO1AMT)
		rn(lfoAmt2Knob,LFO2AMT)
		rn(tuneKnob,TUNE)
		rn(bendLfoRateKnob,BENDLFORATE)
		rn(veloAmpEnvKnob,VAMPENV)
		rn(veloFltEnvKnob,VFLTENV)
		//buttons
		rn(hardSyncButton,OSC2HS)
		rn(osc1SawButton,OSC1Saw)
		rn(osc2SawButton,OSC2Saw)
		rn(osc1PulButton,OSC1Pul)
		rn(osc2PulButton,OSC2Pul)

		rn(filterKeyFollowButton,FLT_KF)
		rn(pitchQuantButton,OSCQuantize)
		rn(unisonButton,UNISON)

		rn(filterDetuneKnob,FILTERDER)
		rn(envelopeDetuneKnob,ENVDER)
		rn(portamentoDetuneKnob,PORTADER)

		rn(filterHQButton,FILTER_WARM)
		rn(filterBPBlendButton,BANDPASS)
		rn(lfoSinButton,LFOSINWAVE)
		rn(lfoSquareButton,LFOSQUAREWAVE)
		rn(lfoSHButton,LFOSHWAVE)

		rn(bendOsc2OnlyButton,BENDOSC2)
		rn(bendRangeButton,BENDRANGE)

		rn(lfoOsc1Button,LFOOSC1)
		rn(lfoOsc2Button,LFOOSC2)
		rn(lfoFilterButton,LFOFILTER)
		rn(lfoPwm1Button,LFOPW1)
		rn(lfoPwm2Button,LFOPW2)
		rn(fourPoleButton,FOURPOLE)

		rn(transposeKnob,OCTAVE)

		rn(pan1Knob,PAN1)
		rn(pan2Knob,PAN2)
		rn(pan3Knob,PAN3)
		rn(pan4Knob,PAN4)
		rn(pan5Knob,PAN5)
		rn(pan6Knob,PAN6)
		rn(pan7Knob,PAN7)
		rn(pan8Knob,PAN8)

		rn(voiceSwitch,VOICE_COUNT)
		rn(legatoSwitch,LEGATOMODE)
		rn(asPlayedAllocButton,ASPLAYEDALLOCATION)
		rn(midiLearnButton,MIDILEARN)
		rn(midiUnlearnButton,UNLEARN)
}

void ObxdAudioProcessorEditor::mouseUp(const MouseEvent& e)
{
	if (e.mods.isRightButtonDown() || e.mods.isCommandDown())
	{
		PopupMenu menu;
		PopupMenu skinMenu;
		PopupMenu bankMenu;

		Array<File> skins;
		const Array<File>& banks = getFilter()->getBankFiles();

		int skinStart = 0;
		{
			DirectoryIterator it(getFilter()->getSkinFolder(), false, "*", File::findDirectories);
			while (it.next())
			{
				skins.add(it.getFile());
			}

			for (int i = 0; i < skins.size(); ++i)
			{
				const File skin = skins.getUnchecked(i);
				skinMenu.addItem(i + skinStart + 1, skin.getFileName(), true, skin.getFileName() == skinFolder.getFileName());
			}

			menu.addSubMenu("Skins", skinMenu);
		}

		int bankStart = 1000;
		{
			const String currentBank = getFilter()->getCurrentBankFile().getFileName();

			for (int i = 0; i < banks.size(); ++i)
			{
				const File bank = banks.getUnchecked(i);
				bankMenu.addItem(i + bankStart + 1, bank.getFileName(), true, bank.getFileName() == currentBank);
			}

			menu.addSubMenu("Banks", bankMenu);
		}

		const Point<int> pos = e.getMouseDownScreenPosition();

		int result = menu.showAt(Rectangle<int>(pos.getX(), pos.getY(), 1, 1));
		if (result >= (skinStart + 1) && result <= (skinStart + skins.size()))
		{
			result -= 1;
			result -= skinStart;

			const File newSkinFolder = skins.getUnchecked(result);
			getFilter()->setCurrentSkinFolder(newSkinFolder.getFileName());

			rebuildComponents();
		}
		else if (result >= (bankStart + 1) && result <= (bankStart + banks.size()))
		{
			result -= 1;
			result -= bankStart;

			const File bankFile = banks.getUnchecked(result);
			getFilter()->loadFromFXBFile(bankFile);
		}
	}
}

void ObxdAudioProcessorEditor::paint(Graphics& g)
{
	g.fillAll (Colours::white);

	const File mainFile(skinFolder.getChildFile("main.png"));

    if (skinFolder.exists() && mainFile.exists())
	{
		const Image image = ImageCache::getFromFile(mainFile);

		g.drawImage (image,
					 0, 0, image.getWidth(), image.getHeight(),
					 0, 0, image.getWidth(), image.getHeight());
	}
	else
	{
		const Image image = ImageCache::getFromMemory(BinaryData::main_png, BinaryData::main_pngSize);

		g.drawImage (image,
					 0, 0, image.getWidth(), image.getHeight(),
					 0, 0, image.getWidth(), image.getHeight());
	}
}
