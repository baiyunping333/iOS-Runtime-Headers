/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUPrototypeLayoutOptionsEditorViewController : UITableViewController <HUSliderValueTableViewCellDelegate> {
    <HUPrototypeLayoutOptionsEditorViewControllerDelegate> * _delegate;
    HUGridLayoutOptions * _layoutOptions;
    NSArray * _layoutOptionsKeys;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HUPrototypeLayoutOptionsEditorViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) HUGridLayoutOptions *layoutOptions;
@property (nonatomic, retain) NSArray *layoutOptionsKeys;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_done:(id)arg1;
- (id)_viewSizeSubclassDescription;
- (id)delegate;
- (id)layoutOptions;
- (id)layoutOptionsKeys;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLayoutOptions:(id)arg1;
- (void)setLayoutOptionsKeys:(id)arg1;
- (void)sliderValueTableViewCell:(id)arg1 didChangeValue:(float)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
- (void)viewDidLoad;

@end