//
//  OPEConstants.h
//  OSM POI Editor
//
//  Created by David Chiles on 4/19/12.
//  Copyright (c) 2011 David Chiles. All rights reserved.
//
//  This file is part of POI+.
//
//  POI+ is free software: you can redistribute it and/or modify
//  it under the terms of the GNU General Public License as published by
//  the Free Software Foundation, either version 3 of the License, or
//  (at your option) any later version.
//
//  POI+ is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU General Public License for more details.
//
//  You should have received a copy of the GNU General Public License
//  along with POI+.  If not, see <http://www.gnu.org/licenses/>.

#import <Foundation/Foundation.h>

@interface OPEConstants : NSObject

@end

#define kTypeText @"text"
#define KTypeName @"name"
#define kTypeList @"list"
#define kTypeLabel @"label"
#define kTypeNumber @"number"
#define kTypeUrl @"url"
#define kTypePhone @"phone"
#define kTypeEmail @"email"

typedef enum{
    OPEOptionalTypeNone,
    OPEOptionalTypeList,
    OPEOptionalTypeText,
    OPEOptionalTypeName,
    OPEOptionalTypeLabel,
    OPEOptionalTypeNumber,
    OPEOptionalTypeUrl,
    OPEOptionalTypePhone,
    OPEOptionalTypeEmail
}OPEOptionalType;

#define kLeftTextDefaultSize 76

#define kOPEAPIURL2 @"http://www.overpass-api.de/api/xapi?*"
#define kOPEAPIURL1 @"http://overpass.osm.rambler.ru/cgi/xapi?*"
#define kOPEAPIURL3 @"http://api.openstreetmap.fr/xapi?*"
#define kOPEAPIURL4 @"http://api.openstreetmap.org/api/0.6/"
#define kOPEAPIURL5 @"http://api.openstreetmap.fr/api/0.6/"

#define kOPENominatimURL2 @"http://open.mapquestapi.com/nominatim/v1/reverse.php"
#define kOPENominatimURL1 @"http://nominatim.openstreetmap.org/reverse"

#define kPointTypeNode @"node"
#define kPointTypeWay @"way"
#define kPointTypePoint @"point"

#define kLastDownloadedKey @"lastFileDownload"

#define kLastImportHashKey @"kLastImportHashKey"
#define kLastImportFileDate @"kLastImportFileDate"


#define kExpandedAddressArray @[@"addr:housenumber",@"addr:street",@"addr:city",@"addr:postcode",@"addr:state",@"addr:country",@"addr:province"]
#define kExpandedContactArray @[@"website",@"phone",@"fax",@"email",@"wikipedia"]

#define kActionTypeModify @"update"
#define kActionTypeDelete @"delete"

#define kOPEOsmElementNode @"node"
#define kOPEOsmElementWay @"way"
#define kOPEOsmElementRelation @"relation"
#define kOPEOsmElementNone @"none"

#define highwayTypes @[@"residential",@"unclassified",@"track",@"tertiary",@"secondary",@"primary",@"trunk",@"footway",@"path",@"cycleway",@"steps",@"bridleway"]

//settings key
#define kShowNoNameStreetsKey @"kShowNoNameStreetsKey"
#define kTileSourceNumber @"tileSourceNumber"

#define kOTRAppleLanguagesKey @"AppleLanguages"
#define kOTRUserSetLanguageKey @"userSetLanguageKey"
#define kDatabasePath [[NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES) lastObject] stringByAppendingPathComponent:@"spatialdb.sqlite"]



