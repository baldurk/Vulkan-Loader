/* THIS FILE IS GENERATED.  DO NOT EDIT. */

/*
 * Vulkan
 *
 * Copyright (C) 2014 LunarG, Inc.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included
 * in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL
 * THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 */

#pragma once

#include "vulkan.h"
#include "vk_debug_marker_lunarg.h"


// Hooked function prototypes

VKTRACER_EXPORT void VKAPI __HOOKED_vkCmdDbgMarkerBegin(VkCmdBuffer cmdBuffer, const char* pMarker);
VKTRACER_EXPORT void VKAPI __HOOKED_vkCmdDbgMarkerEnd(VkCmdBuffer cmdBuffer);
VKTRACER_EXPORT VkResult VKAPI __HOOKED_vkDbgSetObjectTag(VkDevice device, VkDbgObjectType objType, uint64_t object, size_t tagSize, const void* pTag);
VKTRACER_EXPORT VkResult VKAPI __HOOKED_vkDbgSetObjectName(VkDevice device, VkDbgObjectType objType, uint64_t object, size_t nameSize, const char* pName);
