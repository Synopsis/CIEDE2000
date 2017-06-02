/*
 * CIEDE2000.h
 * Part of http://github.com/gfiumara/CIEDE2000 by Gregory Fiumara.
 * See LICENSE for details.
 */
 
#ifndef GPF_CIEDE2000_H_
#define GPF_CIEDE2000_H_

#include <ctime>
#include <cmath>
#include "core.hpp"

#ifndef M_PI
#define M_PI        3.14159265358979323846264338327950288   /* pi */
#endif

/** Namespace containing all necessary objects and methods for CIEDE2000 */
namespace CIEDE2000
{
	/***********************************************************************
	 * Operations.
	 **********************************************************************/

	/**
	 * @brief
	 * Obtain Delta-E 2000 value.
	 * @details
	 * Based on the paper "The CIEDE2000 Color-Difference Formula: 
	 * Implementation Notes, Supplementary Test Data, and Mathematical 
	 * Observations" by Gaurav Sharma, Wencheng Wu, and Edul N. Dalal,
	 * from http://www.ece.rochester.edu/~gsharma/ciede2000/.
	 *
	 * @param lab1
	 * First color in LAB colorspace.
	 * @param lab2
	 * Second color in LAB colorspace.
	 *
	 * @return
	 * Delta-E difference between lab1 and lab2.
	 */
	double
	CIEDE2000(
              const cv::Vec3f &lab1,
              const cv::Vec3f &lab2);
	    
	/***********************************************************************
	 * Conversions.
	 **********************************************************************/
		
    	/**
    	 * @brief
    	 * Convert degrees to radians.
    	 *
    	 * @param deg
    	 * Angle in degrees.
    	 *
    	 * @return
    	 * deg in radians.
    	 */
	constexpr double
	deg2Rad(
	    const double deg);
	
	/**
    	 * @brief
    	 * Convert radians to degrees.
    	 *
    	 * @param rad
    	 * Angle in radians.
    	 *
    	 * @return
    	 * rad in degrees.
    	 */
        constexpr double
	rad2Deg(
	    const double rad);
}

/*******************************************************************************
 * Conversions.
 ******************************************************************************/

/**
 * @brief
 * LAB output stream operator.
 *
 * @param s
 * Output stream.
 * @param labColor
 * Color to output.
 *
 * @return
 * s with labColor appended.
 */
std::ostream&
operator<<(
    std::ostream &s,
    const cv::Vec3f &labColor);
    
#endif /* GPF_CIEDE2000_H_ */

