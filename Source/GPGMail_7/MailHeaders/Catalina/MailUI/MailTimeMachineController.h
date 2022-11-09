//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//#import <objc/NSObject.h>

#import "TerminationHandler-Protocol.h"

@class MessageViewer, NSString, NSTimer;

@interface MailTimeMachineController : NSObject <TerminationHandler>
{
    id _tableOfContentsSaveLock;
    NSTimer *_tableOfContentsSaveTimer;
    BOOL _savingTOC;
    MessageViewer *_messageViewer;
    struct CGRect _originalMailWindowFrame;
}

+ (id)sharedController;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)log;
@property(nonatomic) struct CGRect originalMailWindowFrame; // @synthesize originalMailWindowFrame=_originalMailWindowFrame;
@property(nonatomic) BOOL savingTOC; // @synthesize savingTOC=_savingTOC;
@property(retain, nonatomic) MessageViewer *messageViewer; // @synthesize messageViewer=_messageViewer;
//- (void).cxx_destruct;
- (void)relinquishTimeMachineAccess;
- (void)exitTimeMachine;
- (void)prepareToExitTimeMachineModeWithDisplayState:(id)arg1;
- (void)enterTimeMachineMode;
- (unsigned char)_launchTimeMachineHelperApp;
- (id)_mailTimeMachineDescriptionForMessage:(id)arg1 withColumns:(id)arg2 selected:(BOOL)arg3;
- (void)_threadedSaveTableOfContentsApprovedQuit:(BOOL)arg1;
- (BOOL)_timingOutSaveTableOfContents;
- (void)_threadedSaveTableOfContentsEnded:(id)arg1;
- (void)_thread_saveTableOfContents:(id)arg1;
- (void)_saveTableOfContents;
- (void)_approvedQuit;
- (void)nowWouldBeAGoodTimeToTerminate:(id)arg1;
- (void)unregisterTimeMachineHandlers;
- (void)registerTimeMachineHandlers;
- (void)disableTableOfContentsSaveTimer:(BOOL)arg1;
- (void)_setTableOfContentsTimer:(id)arg1;
- (void)_setTableOfContentsIsValid:(BOOL)arg1;
- (void)forceSaveTableOfContentsNow;
- (void)_saveTableOfContents:(id)arg1;
- (void)_invalidateTableOfContents:(id)arg1;
- (void)_invalidateTableOfContentsAndBackupManager:(id)arg1;
- (void)registerNotificationHandlers;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

