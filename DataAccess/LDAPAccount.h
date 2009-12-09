/**
 * This header is generated by class-dump-z 0.2-1.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import "DataAccess-Structs.h"
#import "DAAccount.h"

@class NSMutableSet, LDAPTaskManager;

@interface LDAPAccount : DAAccount {
	CFDictionaryRef _consumers;
	LDAPTaskManager* _taskManager;
	NSMutableSet* _searchTaskSet;
}
@property(assign, setter=setLDAPAccountVersion:) int ldapAccountVersion;
// inherited: +(Class)accountClass;
// inherited: +(Class)clientClass;
// inherited: +(Class)daemonClass;
+(id)supportedDataclasses;
// inherited: +(id)defaultProperties;
+(id)displayedAccountTypeString;
+(id)displayedShortAccountTypeString;
-(void)cancelTaskWithID:(int)anId;
-(id)taskManager;
// inherited: -(id)initWithProperties:(id)properties;
// inherited: -(id)propertiesToSave;
// inherited: -(void)dealloc;
// inherited: -(id)urlForKeychain;
// inherited: -(void)saveAccountSettings;
-(void)setConsumer:(id)consumer forTask:(id)task;
-(id)consumerForTask:(id)task;
-(void)removeConsumerForTask:(id)task;
-(void)cancelSearchQuery:(id)query;
-(void)cancelAllSearchQueries;
-(void)performSearchQuery:(id)query consumer:(id)consumer;
-(void)ldapSearchTask:(id)task finishedWithError:(id)error foundItems:(id)items;
// inherited: -(void)checkValidityWithConsumer:(id)consumer;
-(void)ldapGetDefaultSearchBaseTask:(id)task completedWithStatus:(int)status error:(id)error defaultSearchBase:(id)base;
// inherited: -(id)displayName;
-(void)addSearchSettings:(id)settings;
-(void)removeSearchSettings:(id)settings;
-(BOOL)_upgradeSelfFromVersion:(int)version superClassUpgraded:(BOOL)upgraded accountManager:(id)manager;
// inherited: -(BOOL)upgradeAccountIfNecessaryWithAccountManager:(id)accountManager;
// inherited: -(BOOL)resetCertWarnings;
// inherited: -(void)tearDown;
-(id)connectionURLWithSSL:(BOOL)ssl;
-(id)connectionURL;
// inherited: -(BOOL)supportsAccountType:(int)type;
// inherited: -(id)username;
// inherited: -(void)setUsername:(id)username;
// inherited: -(id)host;
// inherited: -(void)setHost:(id)host;
// inherited: -(int)port;
// inherited: -(void)setPort:(int)port;
// inherited: -(BOOL)useSSL;
// inherited: -(void)setUseSSL:(BOOL)ssl;
-(id)searchSettings;
-(int)authType;
-(void)setAuthType:(int)type;
@end
