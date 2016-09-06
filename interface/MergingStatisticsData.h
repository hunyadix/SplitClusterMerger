#ifndef MERGING_STATISTICS_STRUCTURE_H
#define MERGING_STATISTICS_STRUCTURE_H

#include "../ModuleDataFetcher/interface/ModuleData.h"

#include <string>

#ifndef NOVAL_I
#define NOVAL_I -9999
#endif
#ifndef NOVAL_F
#define NOVAL_F -9999
#endif

class MergingStatisticsData
{
	public:
		int clusterSize_1;
		int clusterSize_2;
		int sizeDifference;
		float clusterCharge_1;
		float clusterCharge_2;
		float chargeDifference;
		float clusterAngle_1;
		float clusterAngle_2;
		float angleDifference;
		int isMarkedAsSplitCluster_1;
		int isMarkedAsSplitCluster_2;
		int distanceInPixels;
		// Module
		ModuleData mod;
		ModuleData mod_on;
		// Instantiation
		MergingStatisticsData() { init(); };
		void init()
		{
			mod.init();
			mod_on.init();
			clusterSize_1 = NOVAL_I;
			clusterSize_2 = NOVAL_I;
			sizeDifference = NOVAL_I;
			clusterCharge_1 = NOVAL_F;
			clusterCharge_2 = NOVAL_F;
			chargeDifference = NOVAL_F;
			clusterAngle_1 = NOVAL_F;
			clusterAngle_2 = NOVAL_F;
			angleDifference = NOVAL_F;
			isMarkedAsSplitCluster_1 = NOVAL_I;
			isMarkedAsSplitCluster_2 = NOVAL_I;
			distanceInPixels = NOVAL_I;
		};
		// Data list
		std::string list = "clusterSize_1/I:clusterSize_2/I:sizeDifference/I:clusterCharge_1/F:clusterCharge_2/F:chargeDifference/F:clusterAngle_1/F:clusterAngle_2/F:angleDifference/F:isMarkedAsSplitCluster_1/I:isMarkedAsSplitCluster_2/I:distanceInPixels/I";
};
 
#endif