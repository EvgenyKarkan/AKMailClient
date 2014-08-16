//
//  AKMailManager.h
//  AKMailClientApp
//
//  Created by Arcilite on 11.08.14.
//  Copyright (c) 2014 Arcilite. All rights reserved.
//

#import <Foundation/Foundation.h>
#import  "MailCore/MailCore.h"

@interface AKMailManager : NSObject

@property(nonatomic,retain) NSString * folder;
@property(nonatomic,assign) MCOIMAPMessagesRequestKind requestKind;
@property (nonatomic,assign) int totalNumberOfInboxMessages;

-(void)getMailHTMLBodyForMessageUID:(int)uid complete:(void (^)(NSString* msgHTMLBody))completionBlock fail:(void (^)(NSError* error))failBlock;

-(void)getIMAPMailHeadersWithCountForLoadedMail:(NSInteger)сountCoreDataMail complete:(void (^)( NSArray * fetchedMessages, MCOIndexSet * vanishedMessages,BOOL newMailRecived))completionBlock fail:(void (^)(NSError* error))failBlock;
@end
