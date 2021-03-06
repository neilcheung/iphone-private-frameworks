/**
 * This header is generated by class-dump-z 0.2-1.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import "Message-Structs.h"
#import "LibraryStore.h"

@class IMAPMailboxSyncEngine, NSString, IMAPCommandPipeline, IMAPDownloadCache;

@interface LibraryIMAPStore : LibraryStore {
	unsigned _supportsCustomPermanentFlags : 1;
	unsigned _supportsJunkFlag : 1;
	unsigned _supportsDollarJunkFlag : 1;
	unsigned _supportsNotJunkFlag : 1;
	unsigned _supportsDollarNotJunkFlag : 1;
	unsigned _supportsForwardedFlag : 1;
	unsigned _supportsDollarForwardedFlag : 1;
	unsigned _updatingCache : 1;
	unsigned _updateMetadata : 1;
	unsigned _readyToDealloc : 1;
	unsigned _didSynchronizeOldMessages : 1;
	unsigned _recentsExist : 1;
	unsigned _settingServerCount : 1;
	unsigned _reserved : 16;
	NSString* _mailboxName;
	IMAPDownloadCache* _downloadCache;
	IMAPCommandPipeline* _fetchPipeline;
	IMAPMailboxSyncEngine* _syncEngine;
	unsigned _serverDeletedCount;
	unsigned _serverUidNext;
	NSString* _selectedUID;
	unsigned _currentFetchUid;
	NSString* _relativePath;
	id _downloadDelegate;
}
// inherited: -(id)initWithMailboxUid:(id)mailboxUid readOnly:(BOOL)only;
// inherited: -(void)dealloc;
-(void)focusedMessageDidChange:(id)focusedMessage;
-(int)_fetchMessagesWithArguments:(id)arguments idRange:(id)range onConnection:(id)connection synchronize:(BOOL)synchronize limit:(unsigned)limit topUIDToCompact:(unsigned)compact topKnownUID:(unsigned)uid success:(BOOL*)success examinedRange:(NSRange*)range9 fetchableUIDsFound:(unsigned*)found preserveUID:(unsigned*)uid11;
-(void)updateDeletedCountWithNotDeletedCount:(unsigned)notDeletedCount;
-(void)updateDeletedCount;
-(BOOL)_shouldContinueToPreservedUID:(unsigned)preservedUID;
// inherited: -(int)fetchNumMessages:(unsigned)messages preservingUID:(id)uid beforeUID:(unsigned)uid3 synchronize:(BOOL)synchronize compact:(BOOL)compact;
// inherited: -(void)syncOlderMessages;
-(int)syncMessagesInIMAPRange:(NSRange)imaprange withConnection:(id)connection compactingExpungedMessagesToUid:(unsigned)uid;
// inherited: -(int)fetchNewMessagesAndSynchronizeOldMessages:(BOOL)messages;
// inherited: -(BOOL)canFetchSearchResults;
// inherited: -(int)fetchMessagesMatchingCriterion:(id)criterion limit:(unsigned)limit;
// inherited: -(BOOL)canRebuild;
-(void)removeAllLocalMessages;
-(id)mailboxName;
-(void)setMailboxUidValidity:(unsigned)validity;
// inherited: -(BOOL)canCompact;
// inherited: -(void)doCompact;
// inherited: -(void)deleteMessagesOlderThanNumberOfDays:(int)days compact:(BOOL)compact;
// inherited: -(BOOL)allowsAppend;
-(void)_addOfflineTransferMessages:(id)messages;
-(BOOL)_doUidCopy:(XXStruct_sY4QuD*)copy toStore:(id)store newMessages:(id)messages;
-(int)_doAppend:(XXStruct_sY4QuD*)append;
-(int)appendMessages:(id)messages unsuccessfulOnes:(id)ones newMessageIDs:(id)ids newMessages:(id)messages4 flagsToSet:(id)set customIMAPFlagsToSet:(id)set6;
// inherited: -(int)appendMessages:(id)messages unsuccessfulOnes:(id)ones newMessageIDs:(id)ids newMessages:(id)messages4 flagsToSet:(id)set;
-(id)createDictionaryForLocalFlags:(unsigned long)localFlags serverFlags:(unsigned long)flags existingDictionary:(id)dictionary;
-(void)_synchronouslySetFlags:(id)flags clearFlags:(id)flags2 forMessages:(id)messages originalChanges:(id)changes;
-(void)_setFlagsFromDictionary:(id)dictionary forMessages:(id)messages;
-(void)addFlagChanges:(id)changes forMessages:(id)messages;
// inherited: -(id)setFlagsFromDictionary:(id)dictionary forMessages:(id)messages;
// inherited: -(id)willSetFlagsFromDictionary:(id)dictionary forMessages:(id)messages;
// inherited: -(void)setFlagsCancelled:(id)cancelled forMessages:(id)messages;
// inherited: -(BOOL)setPreferredEncoding:(unsigned long)encoding forMessage:(id)message;
// inherited: -(id)_cachedBodyForMessage:(id)message valueIfNotPresent:(id)present;
// inherited: -(id)_cachedHeadersForMessage:(id)message valueIfNotPresent:(id)present;
// inherited: -(id)_cachedHeaderDataForMessage:(id)message valueIfNotPresent:(id)present;
-(id)_dataForMessage:(id)message readHeadersOnly:(BOOL)only;
// inherited: -(id)_fetchDataForMimePart:(id)mimePart range:(NSRange)range isComplete:(BOOL*)complete;
-(id)dataForMimePart:(id)mimePart inRange:(NSRange)range;
// inherited: -(id)dataForMimePart:(id)mimePart;
// inherited: -(id)_fetchFullBodyDataForMessage:(id)message andHeaderDataIfReadilyAvailable:(id*)available downloadIfNecessary:(BOOL)necessary;
-(id)_downloadForMessageBodyData:(id)messageBodyData;
-(id)_performBodyDataDownload:(id)download usingConnection:(id)connection isPartial:(BOOL*)partial;
-(BOOL)shouldRetryEmptyBodyDownloadForMessage:(id)message;
// inherited: -(id)_fetchBodyDataForMessage:(id)message andHeaderDataIfReadilyAvailable:(id*)available downloadIfNecessary:(BOOL)necessary partial:(BOOL*)partial;
// inherited: -(id)_fetchHeaderDataForMessage:(id)message downloadIfNecessary:(BOOL)necessary;
-(id)connectionWithOptions:(int)options;
-(id)connectionCreateIfNeeded:(BOOL)needed;
-(id)connection;
-(id)lockedConnection;
-(BOOL)_changedFlagsForMessage:(id)message fetchResponse:(id)response newFlags:(unsigned*)flags;
-(void)connection:(id)connection didReceiveResponse:(id)response forCommand:(XXStruct_rpKdCA*)command;
// inherited: -(void)startSynchronization;
-(id)_uidsForMessages:(id)messages;
-(BOOL)connection:(id)connection shouldHandleUntaggedResponse:(id)response forCommand:(XXStruct_rpKdCA*)command;
-(void)connectionDidDisconnect:(id)connection;
-(void)_retrieveNewMessagesForCheckingNewMail:(BOOL)checkingNewMail;
-(void)forceResync;
-(BOOL)hasValidCacheFileForMessage:(id)message;
-(void)setUid:(unsigned long)uid forMessageWithTemporaryUid:(unsigned long)temporaryUid;
-(id)addMessages:(id)messages newMessagesByOldMessage:(id)message;
-(id)deletedMessages;
// inherited: -(void)_handleFlagsChangedForMessages:(id)messages oldFlagsByMessage:(id)message;
-(void)_setFlagsForMessages:(id)messages mask:(unsigned long)mask;
-(void)_setFlagsAndColorForMessages:(id)messages;
-(id)fetchPipeline;
-(id)downloadCache;
-(id)offlineCache;
-(id)offlineCacheIfOffline;
-(BOOL)canPerformOfflineAppend;
// inherited: -(void)close;
// inherited: -(id)messageForRemoteID:(id)remoteID;
// inherited: -(BOOL)hasMoreMessages:(unsigned)messages;
-(void)setServerMessageCount:(unsigned)count;
// inherited: -(unsigned)serverMessageCount;
// inherited: -(unsigned)serverUnreadOnlyOnServerCount;
// inherited: -(unsigned)serverUnreadCount;
-(id)relativePath;
-(void)setDownloadDelegate:(id)delegate;
-(void)connection:(id)connection didBeginBodyLoad:(id)load;
-(void)connection:(id)connection didLoadMoreBodyData:(id)data;
-(void)connection:(id)connection didFinishLoadingBodyData:(id)data;
@end

