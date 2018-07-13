//
//  AXWireButton.h
//  Pods
//

#import <UIKit/UIKit.h>
#import <objc/runtime.h>

typedef enum : NSUInteger {
  AXWireButtonHighlightStyleSimple = 0,
  AXWireButtonHighlightStyleFilled,
} AXWireButtonHighlightStyle;

typedef void (^EmptyBlock)(void);
static char UIButtonBlockKey;

@interface AXWireButton : UIButton
@property (nonatomic) AXWireButtonHighlightStyle highlightStyle;
@property (nonatomic) CGFloat borderWidth;
@property (nonatomic, getter = isEmphasized) BOOL emphasized;
- (void)handleControlEvent:(UIControlEvents)event withBlock:(EmptyBlock)block;
- (void)callBlock:(id)sender;
@end
