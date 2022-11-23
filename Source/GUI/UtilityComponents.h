/*
  ==============================================================================

    UtilityComponents.h

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>

struct Placeholder : juce::Component
{
    Placeholder();
    
    void paint(juce::Graphics& g) override;
    
    juce::Colour customColor;
};

struct RotarySlider : juce::Slider
{
    RotarySlider();
};
