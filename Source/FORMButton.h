@import UIKit;

@interface FORMButton : UIButton

- (void)setTitleLabelFont:(UIFont *)titleLabelFont UI_APPEARANCE_SELECTOR;
- (void)setBorderWidth:(CGFloat)borderWidth UI_APPEARANCE_SELECTOR;
- (void)setCornerRadius:(CGFloat)cornerRadius UI_APPEARANCE_SELECTOR;
- (void)setHighlightedTitleColor:(UIColor *)highlightedTitleColor UI_APPEARANCE_SELECTOR;
- (void)setBorderColor:(UIColor *)borderColor UI_APPEARANCE_SELECTOR;
- (void)setHighlightedBackgroundColor:(UIColor *)highlightedBackgroundColor UI_APPEARANCE_SELECTOR;
- (void)setTitleColor:(UIColor *)titleColor UI_APPEARANCE_SELECTOR;

@end
