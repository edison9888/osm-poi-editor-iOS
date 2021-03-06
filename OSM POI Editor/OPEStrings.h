//
//  OPEStrings.h
//  OSM POI Editor
//
//  Created by David on 4/18/13.
//
//

#import <Foundation/Foundation.h>

@interface OPEStrings : NSObject


#define UPLOADING_STRING NSLocalizedString(@"Uploading",@"Status message infomring user something is being uploaded")
#define SAVING_STRING NSLocalizedString(@"Saving",@"Status message infomring user something is being saved")
#define ERROR_STRING NSLocalizedString(@"Error",@"Status message infomring user there was an error")
#define ZOOM_ERROR_STRING NSLocalizedString(@"Zoom in to load data",@"Status message infomring user they need to zoom in to load data")
#define ZOOM_ALERT_STRING NSLocalizedString(@"You need to zoom in to add a new POI",@"Alert message for user to zoom in on map more to add new POI")
#define OK_STRING NSLocalizedString(@"OK",@"affirmative ok")
#define ZOOM_ALERT_TITLE_STRING NSLocalizedString(@"Zoom Level",@"Title of alert for zoom")
#define FINDING_STRING NSLocalizedString(@"Finding",@"Message to User alerting that the app is parsing or finding the nodes/ways/relations")
#define DOWNLOAD_ERROR_STRING NSLocalizedString(@"Download Error",@"Error shown to user that error downloading existing data")

#define SETTINGS_TITLE_STRING NSLocalizedString(@"Settings",@"title for view where settings can be changed")
#define BING_AERIAL_STRING NSLocalizedString(@"Bing Aerial",@"Setting to select background layer")
#define MAPQUEST_AERIAL_STRING NSLocalizedString(@"OpenMapquest Aerial",@"Setting to select background layer")
#define OSM_DEFAULT_STRING NSLocalizedString(@"OSM Default",@"Setting to select background layer")
#define NO_NAME_HIGHWAY_STRING NSLocalizedString(@"Show No Name Streets",@"Setting to show or hide streets or highways with no names")
#define LOGIN_STRING NSLocalizedString(@"Login to OpenStreetMap",@"Login button label")
#define LOGOUT_STRING NSLocalizedString(@"Logout of OpenStreetMap",@"Logout button label")
#define FEEDBACK_STRING NSLocalizedString(@"Feedback",@"label for feedback button")
#define ABOUT_STRING NSLocalizedString(@"About POI+",@"label for about button")
#define TILE_SOURCE_STRING NSLocalizedString(@"Tile Source",@"Section label for tile source setting")

#define REMOVE_STRING NSLocalizedString(@"Remove",@"Button label to remove tag")
#define CANCEL_STRING NSLocalizedString(@"Cancel",@"Button label to cancel action")
#define DELETE_STRING NSLocalizedString(@"Delete",@"Button label to delete item")
#define DELETE_ALERT_TITLE_STRING NSLocalizedString(@"Delete Point of Interest",@"Title to aler to delete node")
#define DELETE_ALERT_STRING NSLocalizedString(@"Are you Sure you want to delete this node?",@"Message when deleting a node")
#define DELETING_STRING NSLocalizedString(@"Deleting",@"Message to user while deleting node")
#define INFO_TITLE_STRING NSLocalizedString(@"Info",@"Title for detailed view of node")
#define SAVE_STRING NSLocalizedString(@"Save",@"Button label to save any changes")
#define NAME_STRING NSLocalizedString(@"Name",@"Label for name")
#define CATEGORY_STRING NSLocalizedString(@"Category",@"Label for category")
#define TYPE_STRING NSLocalizedString(@"Type",@"Label for type")

#define NO_NAME_STRING NSLocalizedString(@"No Name Street",@"label for street with missing name tag")

#define LOCA_DATA_STRING NSLocalizedString(@"Local Data",@"Button label for signifying using local or downloaded data")
#define MOVE_NODE_STRING NSLocalizedString(@"Move Node",@"Button label and title for view to move location of node/point")



@end
