//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ECTransferActionReplayer.h>

#import <ECTransferActionReplayerSubclassMethods-Protocol.h>

@class MFEWSConnection, NSString;

@interface MFEWSTransferActionSyncReplayer : ECTransferActionReplayer <ECTransferActionReplayerSubclassMethods>
{
    MFEWSConnection *_connection;
}

@property(retain, nonatomic) MFEWSConnection *connection; // @synthesize connection=_connection;
//- (void).cxx_destruct;
- (id)_folderIDStringForMailboxURLString:(id)arg1;
- (id)_folderIDStringForMailbox:(id)arg1;
- (id)_bodyRequestShape;
- (id)appendItem:(id)arg1 mailboxURL:(id)arg2;
- (BOOL)isRecoverableError:(id)arg1;
- (BOOL)downloadFailed;
- (id)fetchBodyDataForRemoteID:(id)arg1 mailboxURL:(id)arg2;
- (BOOL)deleteSourceMessagesFromTransferItems:(id)arg1;
- (id)moveItems:(id)arg1 destinationMailboxURL:(id)arg2;
- (id)copyItems:(id)arg1 destinationMailboxURL:(id)arg2;
- (id)replayActionUsingEWSConnection:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

