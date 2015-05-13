//
//  OKSourceEditViewController.h
//  PEGKit
//
//  Created by Todd Ditchendorf on 4/24/13.
//
//

#import <Cocoa/Cocoa.h>

@class OKSyntaxHighlighter;
@class OKTextView;
@class OKGutterView;

@interface OKViewController : NSViewController <NSTextViewDelegate, NSLayoutManagerDelegate>

- (id)initWithDefaultNib;

- (void)reloadStylesheets:(id)sender;
- (void)refresh:(id)sender;

@property (nonatomic, retain) IBOutlet OKTextView *textView;
@property (nonatomic, retain) IBOutlet OKGutterView *gutterView;

@property (nonatomic, copy) NSString *grammarName;
@property (nonatomic, retain) NSString *sourceString;
@end
