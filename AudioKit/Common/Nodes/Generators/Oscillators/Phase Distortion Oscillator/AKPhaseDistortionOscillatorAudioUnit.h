//
//  AKPhaseDistortionOscillatorAudioUnit.h
//  AudioKit
//
//  Created by Aurelius Prochazka, revision history on Github.
//  Copyright © 2017 Aurelius Prochazka. All rights reserved.
//

#pragma once

#import "AKAudioUnit.h"

@interface AKPhaseDistortionOscillatorAudioUnit : AKAudioUnit
@property (nonatomic) float frequency;
@property (nonatomic) float amplitude;
@property (nonatomic) float phaseDistortion;
@property (nonatomic) float detuningOffset;
@property (nonatomic) float detuningMultiplier;

- (void)setupWaveform:(int)size;
- (void)setWaveformValue:(float)value atIndex:(UInt32)index;

@end

