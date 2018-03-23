//
//  MeReusableView.h
//  Yelish
//
//  Created by Vishisht Mani Tiwari on 21/01/16.
//  Copyright © 2016 Vishisht Mani Tiwari. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MapKit/Mapkit.h>

@interface MeReusableView : UICollectionReusableView

@property (strong, nonatomic) IBOutlet MKMapView *mapView;
@property (strong, nonatomic) IBOutlet UISegmentedControl *segmentedControl;

@end
