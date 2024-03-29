/*
 * GPUImage-x
 *
 * Copyright (C) 2017 Yijin Wang, Yiqian Wang
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef CannyEdgeDetectionFilter_hpp
#define CannyEdgeDetectionFilter_hpp

#include "../macros.h"
#include "FilterGroup.hpp"
#include "GrayscaleFilter.hpp"
#include "SingleComponentGaussianBlurFilter.hpp"
#include "DirectionalSobelEdgeDetectionFilter.hpp"
#include "DirectionalNonMaximumSuppressionFilter.hpp"
#include "WeakPixelInclusionFilter.hpp"

NS_GI_BEGIN

    class CannyEdgeDetectionFilter : public FilterGroup {
    public:
        static CannyEdgeDetectionFilter *create();

        bool init();

    protected:
        CannyEdgeDetectionFilter();

        ~CannyEdgeDetectionFilter();

        GrayscaleFilter *_grayscaleFilter;
        SingleComponentGaussianBlurFilter *_blurFilter;
        DirectionalSobelEdgeDetectionFilter *_edgeDetectionFilter;
        DirectionalNonMaximumSuppressionFilter *_nonMaximumSuppressionFilter;
        WeakPixelInclusionFilter *_weakPixelInclusionFilter;

    };

NS_GI_END

#endif /* CannyEdgeDetectionFilter_hpp */
