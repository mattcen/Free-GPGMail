//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//#import <AppKit/NSToolbarItemGroup.h>

@class NSSegmentedControl;

@interface SegmentedToolbarItem : NSToolbarItemGroup
{
    BOOL _disableWidthCalculation;
    double _fixedWidth;
}

@property(nonatomic) double fixedWidth; // @synthesize fixedWidth=_fixedWidth;
@property(nonatomic) BOOL disableWidthCalculation; // @synthesize disableWidthCalculation=_disableWidthCalculation;
- (void)setMenu:(id)arg1 forSegment:(long long)arg2;
- (void)setToolTip:(id)arg1 forSegment:(long long)arg2;
- (void)setTag:(long long)arg1 forSegment:(long long)arg2;
- (void)setTarget:(id)arg1 forSegment:(long long)arg2;
- (id)targetForSegment:(long long)arg1;
- (void)setAction:(SEL)arg1 forSegment:(long long)arg2;
- (SEL)actionForSegment:(long long)arg1;
- (void)setPaletteLabel:(id)arg1 forSegment:(long long)arg2;
- (id)paletteLabelForSegment:(long long)arg1;
- (void)setInsideLabel:(id)arg1 forSegment:(long long)arg2;
- (id)insideLabelForSegment:(long long)arg1;
- (void)setAlternateLabel:(id)arg1 forSegment:(long long)arg2;
- (void)setLabel:(id)arg1 forSegment:(long long)arg2;
- (id)labelForSegment:(long long)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
@property(nonatomic) long long segmentCount;
- (void)_controlAction:(id)arg1;
@property(readonly, nonatomic) NSSegmentedControl *control;
- (void)validate;
- (void)configureForDisplayMode:(unsigned long long)arg1 andSizeMode:(unsigned long long)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithItemIdentifier:(id)arg1;

@end

