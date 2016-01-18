#ifndef NATIVE_EXTENSION_VTK_H
#define NATIVE_EXTENSION_VTK_H

#include <nan.h>

#include "vtkObjectBaseWrap.h"
#include "vtkObjectWrap.h"
#include "vtkAlgorithmWrap.h"
#include "vtkPolyDataAlgorithmWrap.h"
#include "vtkConeSourceWrap.h"

NAN_METHOD( render );

#endif

