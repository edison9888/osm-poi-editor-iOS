//
//  OPENodeViewController.m
//  OSM POI Editor
//
//  Created by David Chiles on 2/8/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import "OPENodeViewController.h"
#import "OPETagInterpreter.h"
#import "OPETextEdit.h"
#import "OPECategoryViewController.h"



@implementation OPENodeViewController

@synthesize node;
@synthesize tableView;
@synthesize catAndType;

- (id)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil
{
    self = [super initWithNibName:nibNameOrNil bundle:nibBundleOrNil];
    if (self) {
        // Custom initialization
    }
    return self;
}

- (void)didReceiveMemoryWarning
{
    // Releases the view if it doesn't have a superview.
    [super didReceiveMemoryWarning];
    
    // Release any cached data, images, etc that aren't in use.
}

#pragma mark - View lifecycle

- (void)viewDidLoad
{
    [super viewDidLoad];
    
    [self.navigationController setNavigationBarHidden:NO animated:YES];
    
    UIBarButtonItem *saveButton = [[UIBarButtonItem alloc] initWithTitle: @"Save" style: UIBarButtonItemStyleBordered target: self action: @selector(saveButtonPressed)];
    
    [[self navigationItem] setRightBarButtonItem:saveButton];
    OPETagInterpreter * tagInterpreter = [OPETagInterpreter sharedInstance];
    
    catAndType = [[NSArray alloc] initWithObjects:[tagInterpreter getCategory:node],[tagInterpreter getType:node], nil];
    
}

- (NSInteger)numberOfSectionsInTableView:(UITableView *)tableView {
    // Return the number of sections.
    return 2;
}

- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section {
    // Return the number of rows in the section.
    if(section == 1)
        return 2;
    return 1;
}

- (NSString *)tableView:(UITableView *)tableView titleForHeaderInSection:(NSInteger)section {
	if (section == 0) {
		return @"Name";
	}
	else if (section == 1) {
		return @"Category";
	}
	else if (section == 2) {
		return @"Value2 Style";
	}
	else {
		return @"Subtitle Style";
	}
}

// Customize the appearance of table view cells.
- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath {
    
    NSString *CellIdentifier1 = @"Cell_Section_1";
    NSString *CellIdentifier2 = @"Cell_Section_2";
    
    NSArray * catAndTypeName = [[NSArray alloc] initWithObjects:@"Category",@"Type", nil];

    
    
    UITableViewCell *cell;
	if (indexPath.section == 0) {
		cell = [self.tableView dequeueReusableCellWithIdentifier:CellIdentifier1];
		if (cell == nil) {
			cell = [[UITableViewCell alloc] initWithStyle:UITableViewCellStyleDefault reuseIdentifier:CellIdentifier1];
		}
        cell.textLabel.text = [node.tags objectForKey:@"name"];

	}
	else if (indexPath.section == 1) {
		cell = [self.tableView dequeueReusableCellWithIdentifier:CellIdentifier2];
		if (cell == nil) {
			cell = [[UITableViewCell alloc] initWithStyle:UITableViewCellStyleValue2 reuseIdentifier:CellIdentifier2];
        }
        cell.textLabel.text = [catAndTypeName objectAtIndex:indexPath.row];
        cell.detailTextLabel.text = [catAndType objectAtIndex:indexPath.row];
        //cell.detailTextLabel.text = [NSString stringWithFormat:@"%d",indexPath.row];
	}
    cell.accessoryType= UITableViewCellAccessoryDisclosureIndicator;
	
	// Configure the cell...
	//cell.textLabel.text = @"Text Label";
	//cell.detailTextLabel.text = @"Detail Text Label";
    
    return cell;
}

- (void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath {
    [self.tableView deselectRowAtIndexPath:indexPath animated:YES];
    if (indexPath.section == 0) {
        OPETextEdit * viewer = [[OPETextEdit alloc] initWithNibName:@"OPETextEdit" bundle:nil];
        
        viewer.title = @"Name";
        viewer.text = [node.tags objectForKey:@"name"];
        [viewer setDelegate:self];
        
        [self.navigationController pushViewController:viewer animated:YES];
    }
    else if(indexPath.section == 1)
    {
        
        if(indexPath.row == 1)
        {
            OPETypeViewController * viewer = [[OPETypeViewController alloc] initWithNibName:@"OPETypeViewController" bundle:nil];
            viewer.title = @"Type";
            viewer.category = [catAndType objectAtIndex:0];
            [viewer setDelagate:self];
            NSLog(@"category previous: %@",viewer.category);
            
            [self.navigationController pushViewController:viewer animated:YES];
            
        }
        else
        {
            OPECategoryViewController * viewer = [[OPECategoryViewController alloc] initWithNibName:@"OpeCategoryViewController" bundle:nil];
            viewer.title = @"Category";
            
            [self.navigationController pushViewController:viewer animated:YES];
        }
    }
}

- (void) saveButtonPressed
{
    NSLog(@"saveBottoPressed");
    // This is where the uploading needs to happen  
}

- (void) setupTags
{
    if([node.tags objectForKey:@"name"])
    {
        
    }
    
}

- (void) setText:(NSString *)text
{
    [node.tags setObject:text forKey:@"name"];
    //NSLog(@"we're back %@", text);
    //[self.tableView reloadData];
    [self.tableView reloadSections:[NSIndexSet indexSetWithIndex:0] withRowAnimation:UITableViewRowAnimationFade];
}

- (void) setCategoryAndType:(NSArray *)cAndT
{
    catAndType = cAndT;
    NSLog(@"catAndType: %@",catAndType);
    //[self.tableView reloadData];
    [self.tableView reloadSections:[NSIndexSet indexSetWithIndex:1] withRowAnimation:UITableViewRowAnimationFade];
}

- (void) viewDidAppear:(BOOL)animated
{
    [self.tableView reloadData];
}

- (void)viewDidUnload
{
    [super viewDidUnload];
    // Release any retained subviews of the main view.
    // e.g. self.myOutlet = nil;
}

- (BOOL)shouldAutorotateToInterfaceOrientation:(UIInterfaceOrientation)interfaceOrientation
{
    // Return YES for supported orientations
    return (interfaceOrientation == UIInterfaceOrientationPortrait);
}

@end
