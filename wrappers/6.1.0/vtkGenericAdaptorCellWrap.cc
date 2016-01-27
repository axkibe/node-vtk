/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkObjectWrap.h"
#include "vtkGenericAdaptorCellWrap.h"
#include "vtkGenericAttributeWrap.h"
#include "vtkGenericAttributeCollectionWrap.h"
#include "vtkGenericPointIteratorWrap.h"
#include "vtkGenericCellIteratorWrap.h"
#include "vtkContourValuesWrap.h"
#include "vtkImplicitFunctionWrap.h"
#include "vtkGenericCellTessellatorWrap.h"
#include "vtkIncrementalPointLocatorWrap.h"
#include "vtkCellArrayWrap.h"
#include "vtkPointDataWrap.h"
#include "vtkCellDataWrap.h"
#include "vtkPointsWrap.h"
#include "vtkUnsignedCharArrayWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkGenericAdaptorCellWrap::ptpl;

VtkGenericAdaptorCellWrap::VtkGenericAdaptorCellWrap()
{ }

VtkGenericAdaptorCellWrap::VtkGenericAdaptorCellWrap(vtkSmartPointer<vtkGenericAdaptorCell> _native)
{ native = _native; }

VtkGenericAdaptorCellWrap::~VtkGenericAdaptorCellWrap()
{ }

void VtkGenericAdaptorCellWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkGenericAdaptorCell").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("GenericAdaptorCell").ToLocalChecked(), ConstructorGetter);
}

void VtkGenericAdaptorCellWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkGenericAdaptorCellWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkObjectWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkObjectWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkGenericAdaptorCellWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "Clip", Clip);
	Nan::SetPrototypeMethod(tpl, "clip", Clip);

	Nan::SetPrototypeMethod(tpl, "Contour", Contour);
	Nan::SetPrototypeMethod(tpl, "contour", Contour);

	Nan::SetPrototypeMethod(tpl, "CountNeighbors", CountNeighbors);
	Nan::SetPrototypeMethod(tpl, "countNeighbors", CountNeighbors);

	Nan::SetPrototypeMethod(tpl, "GetAttributeOrder", GetAttributeOrder);
	Nan::SetPrototypeMethod(tpl, "getAttributeOrder", GetAttributeOrder);

	Nan::SetPrototypeMethod(tpl, "GetBoundaryIterator", GetBoundaryIterator);
	Nan::SetPrototypeMethod(tpl, "getBoundaryIterator", GetBoundaryIterator);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetDimension", GetDimension);
	Nan::SetPrototypeMethod(tpl, "getDimension", GetDimension);

	Nan::SetPrototypeMethod(tpl, "GetGeometryOrder", GetGeometryOrder);
	Nan::SetPrototypeMethod(tpl, "getGeometryOrder", GetGeometryOrder);

	Nan::SetPrototypeMethod(tpl, "GetHighestOrderAttribute", GetHighestOrderAttribute);
	Nan::SetPrototypeMethod(tpl, "getHighestOrderAttribute", GetHighestOrderAttribute);

	Nan::SetPrototypeMethod(tpl, "GetLength2", GetLength2);
	Nan::SetPrototypeMethod(tpl, "getLength2", GetLength2);

	Nan::SetPrototypeMethod(tpl, "GetNeighbors", GetNeighbors);
	Nan::SetPrototypeMethod(tpl, "getNeighbors", GetNeighbors);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfBoundaries", GetNumberOfBoundaries);
	Nan::SetPrototypeMethod(tpl, "getNumberOfBoundaries", GetNumberOfBoundaries);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfDOFNodes", GetNumberOfDOFNodes);
	Nan::SetPrototypeMethod(tpl, "getNumberOfDOFNodes", GetNumberOfDOFNodes);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfPoints", GetNumberOfPoints);
	Nan::SetPrototypeMethod(tpl, "getNumberOfPoints", GetNumberOfPoints);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfVerticesOnFace", GetNumberOfVerticesOnFace);
	Nan::SetPrototypeMethod(tpl, "getNumberOfVerticesOnFace", GetNumberOfVerticesOnFace);

	Nan::SetPrototypeMethod(tpl, "GetPointIterator", GetPointIterator);
	Nan::SetPrototypeMethod(tpl, "getPointIterator", GetPointIterator);

	Nan::SetPrototypeMethod(tpl, "GetType", GetType);
	Nan::SetPrototypeMethod(tpl, "getType", GetType);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "IsAttributeLinear", IsAttributeLinear);
	Nan::SetPrototypeMethod(tpl, "isAttributeLinear", IsAttributeLinear);

	Nan::SetPrototypeMethod(tpl, "IsGeometryLinear", IsGeometryLinear);
	Nan::SetPrototypeMethod(tpl, "isGeometryLinear", IsGeometryLinear);

	Nan::SetPrototypeMethod(tpl, "IsInDataSet", IsInDataSet);
	Nan::SetPrototypeMethod(tpl, "isInDataSet", IsInDataSet);

	Nan::SetPrototypeMethod(tpl, "IsOnBoundary", IsOnBoundary);
	Nan::SetPrototypeMethod(tpl, "isOnBoundary", IsOnBoundary);

	Nan::SetPrototypeMethod(tpl, "IsPrimary", IsPrimary);
	Nan::SetPrototypeMethod(tpl, "isPrimary", IsPrimary);

	Nan::SetPrototypeMethod(tpl, "NewCellIterator", NewCellIterator);
	Nan::SetPrototypeMethod(tpl, "newCellIterator", NewCellIterator);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "Tessellate", Tessellate);
	Nan::SetPrototypeMethod(tpl, "tessellate", Tessellate);

	Nan::SetPrototypeMethod(tpl, "TriangulateFace", TriangulateFace);
	Nan::SetPrototypeMethod(tpl, "triangulateFace", TriangulateFace);

	ptpl.Reset( tpl );
}

void VtkGenericAdaptorCellWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		Nan::ThrowError("Cannot create instance of abstract class.");
		return;
	}
	else
	{
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkGenericAdaptorCellWrap::Clip(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericAdaptorCellWrap *wrapper = ObjectWrap::Unwrap<VtkGenericAdaptorCellWrap>(info.Holder());
	vtkGenericAdaptorCell *native = (vtkGenericAdaptorCell *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() > 1 && info[1]->IsObject() && (Nan::New(VtkImplicitFunctionWrap::ptpl))->HasInstance(info[1]))
		{
			VtkImplicitFunctionWrap *a1 = ObjectWrap::Unwrap<VtkImplicitFunctionWrap>(info[1]->ToObject());
			if(info.Length() > 2 && info[2]->IsObject() && (Nan::New(VtkGenericAttributeCollectionWrap::ptpl))->HasInstance(info[2]))
			{
				VtkGenericAttributeCollectionWrap *a2 = ObjectWrap::Unwrap<VtkGenericAttributeCollectionWrap>(info[2]->ToObject());
				if(info.Length() > 3 && info[3]->IsObject() && (Nan::New(VtkGenericCellTessellatorWrap::ptpl))->HasInstance(info[3]))
				{
					VtkGenericCellTessellatorWrap *a3 = ObjectWrap::Unwrap<VtkGenericCellTessellatorWrap>(info[3]->ToObject());
					if(info.Length() > 4 && info[4]->IsInt32())
					{
						if(info.Length() > 5 && info[5]->IsObject() && (Nan::New(VtkIncrementalPointLocatorWrap::ptpl))->HasInstance(info[5]))
						{
							VtkIncrementalPointLocatorWrap *a5 = ObjectWrap::Unwrap<VtkIncrementalPointLocatorWrap>(info[5]->ToObject());
							if(info.Length() > 6 && info[6]->IsObject() && (Nan::New(VtkCellArrayWrap::ptpl))->HasInstance(info[6]))
							{
								VtkCellArrayWrap *a6 = ObjectWrap::Unwrap<VtkCellArrayWrap>(info[6]->ToObject());
								if(info.Length() > 7 && info[7]->IsObject() && (Nan::New(VtkPointDataWrap::ptpl))->HasInstance(info[7]))
								{
									VtkPointDataWrap *a7 = ObjectWrap::Unwrap<VtkPointDataWrap>(info[7]->ToObject());
									if(info.Length() > 8 && info[8]->IsObject() && (Nan::New(VtkCellDataWrap::ptpl))->HasInstance(info[8]))
									{
										VtkCellDataWrap *a8 = ObjectWrap::Unwrap<VtkCellDataWrap>(info[8]->ToObject());
										if(info.Length() > 9 && info[9]->IsObject() && (Nan::New(VtkPointDataWrap::ptpl))->HasInstance(info[9]))
										{
											VtkPointDataWrap *a9 = ObjectWrap::Unwrap<VtkPointDataWrap>(info[9]->ToObject());
											if(info.Length() > 10 && info[10]->IsObject() && (Nan::New(VtkPointDataWrap::ptpl))->HasInstance(info[10]))
											{
												VtkPointDataWrap *a10 = ObjectWrap::Unwrap<VtkPointDataWrap>(info[10]->ToObject());
												if(info.Length() > 11 && info[11]->IsObject() && (Nan::New(VtkCellDataWrap::ptpl))->HasInstance(info[11]))
												{
													VtkCellDataWrap *a11 = ObjectWrap::Unwrap<VtkCellDataWrap>(info[11]->ToObject());
													if(info.Length() != 12)
													{
														Nan::ThrowError("Too many parameters.");
														return;
													}
													native->Clip(
														info[0]->NumberValue(),
														(vtkImplicitFunction *) a1->native.GetPointer(),
														(vtkGenericAttributeCollection *) a2->native.GetPointer(),
														(vtkGenericCellTessellator *) a3->native.GetPointer(),
														info[4]->Int32Value(),
														(vtkIncrementalPointLocator *) a5->native.GetPointer(),
														(vtkCellArray *) a6->native.GetPointer(),
														(vtkPointData *) a7->native.GetPointer(),
														(vtkCellData *) a8->native.GetPointer(),
														(vtkPointData *) a9->native.GetPointer(),
														(vtkPointData *) a10->native.GetPointer(),
														(vtkCellData *) a11->native.GetPointer()
													);
													return;
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGenericAdaptorCellWrap::Contour(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericAdaptorCellWrap *wrapper = ObjectWrap::Unwrap<VtkGenericAdaptorCellWrap>(info.Holder());
	vtkGenericAdaptorCell *native = (vtkGenericAdaptorCell *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkContourValuesWrap::ptpl))->HasInstance(info[0]))
	{
		VtkContourValuesWrap *a0 = ObjectWrap::Unwrap<VtkContourValuesWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsObject() && (Nan::New(VtkImplicitFunctionWrap::ptpl))->HasInstance(info[1]))
		{
			VtkImplicitFunctionWrap *a1 = ObjectWrap::Unwrap<VtkImplicitFunctionWrap>(info[1]->ToObject());
			if(info.Length() > 2 && info[2]->IsObject() && (Nan::New(VtkGenericAttributeCollectionWrap::ptpl))->HasInstance(info[2]))
			{
				VtkGenericAttributeCollectionWrap *a2 = ObjectWrap::Unwrap<VtkGenericAttributeCollectionWrap>(info[2]->ToObject());
				if(info.Length() > 3 && info[3]->IsObject() && (Nan::New(VtkGenericCellTessellatorWrap::ptpl))->HasInstance(info[3]))
				{
					VtkGenericCellTessellatorWrap *a3 = ObjectWrap::Unwrap<VtkGenericCellTessellatorWrap>(info[3]->ToObject());
					if(info.Length() > 4 && info[4]->IsObject() && (Nan::New(VtkIncrementalPointLocatorWrap::ptpl))->HasInstance(info[4]))
					{
						VtkIncrementalPointLocatorWrap *a4 = ObjectWrap::Unwrap<VtkIncrementalPointLocatorWrap>(info[4]->ToObject());
						if(info.Length() > 5 && info[5]->IsObject() && (Nan::New(VtkCellArrayWrap::ptpl))->HasInstance(info[5]))
						{
							VtkCellArrayWrap *a5 = ObjectWrap::Unwrap<VtkCellArrayWrap>(info[5]->ToObject());
							if(info.Length() > 6 && info[6]->IsObject() && (Nan::New(VtkCellArrayWrap::ptpl))->HasInstance(info[6]))
							{
								VtkCellArrayWrap *a6 = ObjectWrap::Unwrap<VtkCellArrayWrap>(info[6]->ToObject());
								if(info.Length() > 7 && info[7]->IsObject() && (Nan::New(VtkCellArrayWrap::ptpl))->HasInstance(info[7]))
								{
									VtkCellArrayWrap *a7 = ObjectWrap::Unwrap<VtkCellArrayWrap>(info[7]->ToObject());
									if(info.Length() > 8 && info[8]->IsObject() && (Nan::New(VtkPointDataWrap::ptpl))->HasInstance(info[8]))
									{
										VtkPointDataWrap *a8 = ObjectWrap::Unwrap<VtkPointDataWrap>(info[8]->ToObject());
										if(info.Length() > 9 && info[9]->IsObject() && (Nan::New(VtkCellDataWrap::ptpl))->HasInstance(info[9]))
										{
											VtkCellDataWrap *a9 = ObjectWrap::Unwrap<VtkCellDataWrap>(info[9]->ToObject());
											if(info.Length() > 10 && info[10]->IsObject() && (Nan::New(VtkPointDataWrap::ptpl))->HasInstance(info[10]))
											{
												VtkPointDataWrap *a10 = ObjectWrap::Unwrap<VtkPointDataWrap>(info[10]->ToObject());
												if(info.Length() > 11 && info[11]->IsObject() && (Nan::New(VtkPointDataWrap::ptpl))->HasInstance(info[11]))
												{
													VtkPointDataWrap *a11 = ObjectWrap::Unwrap<VtkPointDataWrap>(info[11]->ToObject());
													if(info.Length() > 12 && info[12]->IsObject() && (Nan::New(VtkCellDataWrap::ptpl))->HasInstance(info[12]))
													{
														VtkCellDataWrap *a12 = ObjectWrap::Unwrap<VtkCellDataWrap>(info[12]->ToObject());
														if(info.Length() != 13)
														{
															Nan::ThrowError("Too many parameters.");
															return;
														}
														native->Contour(
															(vtkContourValues *) a0->native.GetPointer(),
															(vtkImplicitFunction *) a1->native.GetPointer(),
															(vtkGenericAttributeCollection *) a2->native.GetPointer(),
															(vtkGenericCellTessellator *) a3->native.GetPointer(),
															(vtkIncrementalPointLocator *) a4->native.GetPointer(),
															(vtkCellArray *) a5->native.GetPointer(),
															(vtkCellArray *) a6->native.GetPointer(),
															(vtkCellArray *) a7->native.GetPointer(),
															(vtkPointData *) a8->native.GetPointer(),
															(vtkCellData *) a9->native.GetPointer(),
															(vtkPointData *) a10->native.GetPointer(),
															(vtkPointData *) a11->native.GetPointer(),
															(vtkCellData *) a12->native.GetPointer()
														);
														return;
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGenericAdaptorCellWrap::CountNeighbors(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericAdaptorCellWrap *wrapper = ObjectWrap::Unwrap<VtkGenericAdaptorCellWrap>(info.Holder());
	vtkGenericAdaptorCell *native = (vtkGenericAdaptorCell *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkGenericAdaptorCellWrap::ptpl))->HasInstance(info[0]))
	{
		VtkGenericAdaptorCellWrap *a0 = ObjectWrap::Unwrap<VtkGenericAdaptorCellWrap>(info[0]->ToObject());
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->CountNeighbors(
			(vtkGenericAdaptorCell *) a0->native.GetPointer()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGenericAdaptorCellWrap::GetAttributeOrder(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericAdaptorCellWrap *wrapper = ObjectWrap::Unwrap<VtkGenericAdaptorCellWrap>(info.Holder());
	vtkGenericAdaptorCell *native = (vtkGenericAdaptorCell *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkGenericAttributeWrap::ptpl))->HasInstance(info[0]))
	{
		VtkGenericAttributeWrap *a0 = ObjectWrap::Unwrap<VtkGenericAttributeWrap>(info[0]->ToObject());
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetAttributeOrder(
			(vtkGenericAttribute *) a0->native.GetPointer()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGenericAdaptorCellWrap::GetBoundaryIterator(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericAdaptorCellWrap *wrapper = ObjectWrap::Unwrap<VtkGenericAdaptorCellWrap>(info.Holder());
	vtkGenericAdaptorCell *native = (vtkGenericAdaptorCell *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkGenericCellIteratorWrap::ptpl))->HasInstance(info[0]))
	{
		VtkGenericCellIteratorWrap *a0 = ObjectWrap::Unwrap<VtkGenericCellIteratorWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->GetBoundaryIterator(
				(vtkGenericCellIterator *) a0->native.GetPointer(),
				info[1]->Int32Value()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGenericAdaptorCellWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericAdaptorCellWrap *wrapper = ObjectWrap::Unwrap<VtkGenericAdaptorCellWrap>(info.Holder());
	vtkGenericAdaptorCell *native = (vtkGenericAdaptorCell *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkGenericAdaptorCellWrap::GetDimension(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericAdaptorCellWrap *wrapper = ObjectWrap::Unwrap<VtkGenericAdaptorCellWrap>(info.Holder());
	vtkGenericAdaptorCell *native = (vtkGenericAdaptorCell *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDimension();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkGenericAdaptorCellWrap::GetGeometryOrder(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericAdaptorCellWrap *wrapper = ObjectWrap::Unwrap<VtkGenericAdaptorCellWrap>(info.Holder());
	vtkGenericAdaptorCell *native = (vtkGenericAdaptorCell *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetGeometryOrder();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkGenericAdaptorCellWrap::GetHighestOrderAttribute(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericAdaptorCellWrap *wrapper = ObjectWrap::Unwrap<VtkGenericAdaptorCellWrap>(info.Holder());
	vtkGenericAdaptorCell *native = (vtkGenericAdaptorCell *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkGenericAttributeCollectionWrap::ptpl))->HasInstance(info[0]))
	{
		VtkGenericAttributeCollectionWrap *a0 = ObjectWrap::Unwrap<VtkGenericAttributeCollectionWrap>(info[0]->ToObject());
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetHighestOrderAttribute(
			(vtkGenericAttributeCollection *) a0->native.GetPointer()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGenericAdaptorCellWrap::GetLength2(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericAdaptorCellWrap *wrapper = ObjectWrap::Unwrap<VtkGenericAdaptorCellWrap>(info.Holder());
	vtkGenericAdaptorCell *native = (vtkGenericAdaptorCell *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLength2();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkGenericAdaptorCellWrap::GetNeighbors(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericAdaptorCellWrap *wrapper = ObjectWrap::Unwrap<VtkGenericAdaptorCellWrap>(info.Holder());
	vtkGenericAdaptorCell *native = (vtkGenericAdaptorCell *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkGenericAdaptorCellWrap::ptpl))->HasInstance(info[0]))
	{
		VtkGenericAdaptorCellWrap *a0 = ObjectWrap::Unwrap<VtkGenericAdaptorCellWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsObject() && (Nan::New(VtkGenericCellIteratorWrap::ptpl))->HasInstance(info[1]))
		{
			VtkGenericCellIteratorWrap *a1 = ObjectWrap::Unwrap<VtkGenericCellIteratorWrap>(info[1]->ToObject());
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->GetNeighbors(
				(vtkGenericAdaptorCell *) a0->native.GetPointer(),
				(vtkGenericCellIterator *) a1->native.GetPointer()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGenericAdaptorCellWrap::GetNumberOfBoundaries(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericAdaptorCellWrap *wrapper = ObjectWrap::Unwrap<VtkGenericAdaptorCellWrap>(info.Holder());
	vtkGenericAdaptorCell *native = (vtkGenericAdaptorCell *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetNumberOfBoundaries(
			info[0]->Int32Value()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGenericAdaptorCellWrap::GetNumberOfDOFNodes(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericAdaptorCellWrap *wrapper = ObjectWrap::Unwrap<VtkGenericAdaptorCellWrap>(info.Holder());
	vtkGenericAdaptorCell *native = (vtkGenericAdaptorCell *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfDOFNodes();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkGenericAdaptorCellWrap::GetNumberOfPoints(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericAdaptorCellWrap *wrapper = ObjectWrap::Unwrap<VtkGenericAdaptorCellWrap>(info.Holder());
	vtkGenericAdaptorCell *native = (vtkGenericAdaptorCell *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfPoints();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkGenericAdaptorCellWrap::GetNumberOfVerticesOnFace(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericAdaptorCellWrap *wrapper = ObjectWrap::Unwrap<VtkGenericAdaptorCellWrap>(info.Holder());
	vtkGenericAdaptorCell *native = (vtkGenericAdaptorCell *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetNumberOfVerticesOnFace(
			info[0]->Int32Value()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGenericAdaptorCellWrap::GetPointIterator(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericAdaptorCellWrap *wrapper = ObjectWrap::Unwrap<VtkGenericAdaptorCellWrap>(info.Holder());
	vtkGenericAdaptorCell *native = (vtkGenericAdaptorCell *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkGenericPointIteratorWrap::ptpl))->HasInstance(info[0]))
	{
		VtkGenericPointIteratorWrap *a0 = ObjectWrap::Unwrap<VtkGenericPointIteratorWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->GetPointIterator(
			(vtkGenericPointIterator *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGenericAdaptorCellWrap::GetType(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericAdaptorCellWrap *wrapper = ObjectWrap::Unwrap<VtkGenericAdaptorCellWrap>(info.Holder());
	vtkGenericAdaptorCell *native = (vtkGenericAdaptorCell *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetType();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkGenericAdaptorCellWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericAdaptorCellWrap *wrapper = ObjectWrap::Unwrap<VtkGenericAdaptorCellWrap>(info.Holder());
	vtkGenericAdaptorCell *native = (vtkGenericAdaptorCell *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->IsA(
			*a0
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGenericAdaptorCellWrap::IsAttributeLinear(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericAdaptorCellWrap *wrapper = ObjectWrap::Unwrap<VtkGenericAdaptorCellWrap>(info.Holder());
	vtkGenericAdaptorCell *native = (vtkGenericAdaptorCell *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkGenericAttributeWrap::ptpl))->HasInstance(info[0]))
	{
		VtkGenericAttributeWrap *a0 = ObjectWrap::Unwrap<VtkGenericAttributeWrap>(info[0]->ToObject());
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->IsAttributeLinear(
			(vtkGenericAttribute *) a0->native.GetPointer()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGenericAdaptorCellWrap::IsGeometryLinear(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericAdaptorCellWrap *wrapper = ObjectWrap::Unwrap<VtkGenericAdaptorCellWrap>(info.Holder());
	vtkGenericAdaptorCell *native = (vtkGenericAdaptorCell *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->IsGeometryLinear();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkGenericAdaptorCellWrap::IsInDataSet(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericAdaptorCellWrap *wrapper = ObjectWrap::Unwrap<VtkGenericAdaptorCellWrap>(info.Holder());
	vtkGenericAdaptorCell *native = (vtkGenericAdaptorCell *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->IsInDataSet();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkGenericAdaptorCellWrap::IsOnBoundary(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericAdaptorCellWrap *wrapper = ObjectWrap::Unwrap<VtkGenericAdaptorCellWrap>(info.Holder());
	vtkGenericAdaptorCell *native = (vtkGenericAdaptorCell *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->IsOnBoundary();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkGenericAdaptorCellWrap::IsPrimary(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericAdaptorCellWrap *wrapper = ObjectWrap::Unwrap<VtkGenericAdaptorCellWrap>(info.Holder());
	vtkGenericAdaptorCell *native = (vtkGenericAdaptorCell *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->IsPrimary();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkGenericAdaptorCellWrap::NewCellIterator(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericAdaptorCellWrap *wrapper = ObjectWrap::Unwrap<VtkGenericAdaptorCellWrap>(info.Holder());
	vtkGenericAdaptorCell *native = (vtkGenericAdaptorCell *)wrapper->native.GetPointer();
	vtkGenericCellIterator * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewCellIterator();
		VtkGenericCellIteratorWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkGenericCellIteratorWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkGenericCellIteratorWrap *w = new VtkGenericCellIteratorWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkGenericAdaptorCellWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericAdaptorCellWrap *wrapper = ObjectWrap::Unwrap<VtkGenericAdaptorCellWrap>(info.Holder());
	vtkGenericAdaptorCell *native = (vtkGenericAdaptorCell *)wrapper->native.GetPointer();
	vtkGenericAdaptorCell * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkGenericAdaptorCellWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkGenericAdaptorCellWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkGenericAdaptorCellWrap *w = new VtkGenericAdaptorCellWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkGenericAdaptorCellWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericAdaptorCellWrap *wrapper = ObjectWrap::Unwrap<VtkGenericAdaptorCellWrap>(info.Holder());
	vtkGenericAdaptorCell *native = (vtkGenericAdaptorCell *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkGenericAdaptorCell * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkGenericAdaptorCellWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkGenericAdaptorCellWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkGenericAdaptorCellWrap *w = new VtkGenericAdaptorCellWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGenericAdaptorCellWrap::Tessellate(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericAdaptorCellWrap *wrapper = ObjectWrap::Unwrap<VtkGenericAdaptorCellWrap>(info.Holder());
	vtkGenericAdaptorCell *native = (vtkGenericAdaptorCell *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkGenericAttributeCollectionWrap::ptpl))->HasInstance(info[0]))
	{
		VtkGenericAttributeCollectionWrap *a0 = ObjectWrap::Unwrap<VtkGenericAttributeCollectionWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsObject() && (Nan::New(VtkGenericCellTessellatorWrap::ptpl))->HasInstance(info[1]))
		{
			VtkGenericCellTessellatorWrap *a1 = ObjectWrap::Unwrap<VtkGenericCellTessellatorWrap>(info[1]->ToObject());
			if(info.Length() > 2 && info[2]->IsObject() && (Nan::New(VtkPointsWrap::ptpl))->HasInstance(info[2]))
			{
				VtkPointsWrap *a2 = ObjectWrap::Unwrap<VtkPointsWrap>(info[2]->ToObject());
				if(info.Length() > 3 && info[3]->IsObject() && (Nan::New(VtkIncrementalPointLocatorWrap::ptpl))->HasInstance(info[3]))
				{
					VtkIncrementalPointLocatorWrap *a3 = ObjectWrap::Unwrap<VtkIncrementalPointLocatorWrap>(info[3]->ToObject());
					if(info.Length() > 4 && info[4]->IsObject() && (Nan::New(VtkCellArrayWrap::ptpl))->HasInstance(info[4]))
					{
						VtkCellArrayWrap *a4 = ObjectWrap::Unwrap<VtkCellArrayWrap>(info[4]->ToObject());
						if(info.Length() > 5 && info[5]->IsObject() && (Nan::New(VtkPointDataWrap::ptpl))->HasInstance(info[5]))
						{
							VtkPointDataWrap *a5 = ObjectWrap::Unwrap<VtkPointDataWrap>(info[5]->ToObject());
							if(info.Length() > 6 && info[6]->IsObject() && (Nan::New(VtkPointDataWrap::ptpl))->HasInstance(info[6]))
							{
								VtkPointDataWrap *a6 = ObjectWrap::Unwrap<VtkPointDataWrap>(info[6]->ToObject());
								if(info.Length() > 7 && info[7]->IsObject() && (Nan::New(VtkCellDataWrap::ptpl))->HasInstance(info[7]))
								{
									VtkCellDataWrap *a7 = ObjectWrap::Unwrap<VtkCellDataWrap>(info[7]->ToObject());
									if(info.Length() > 8 && info[8]->IsObject() && (Nan::New(VtkUnsignedCharArrayWrap::ptpl))->HasInstance(info[8]))
									{
										VtkUnsignedCharArrayWrap *a8 = ObjectWrap::Unwrap<VtkUnsignedCharArrayWrap>(info[8]->ToObject());
										if(info.Length() != 9)
										{
											Nan::ThrowError("Too many parameters.");
											return;
										}
										native->Tessellate(
											(vtkGenericAttributeCollection *) a0->native.GetPointer(),
											(vtkGenericCellTessellator *) a1->native.GetPointer(),
											(vtkPoints *) a2->native.GetPointer(),
											(vtkIncrementalPointLocator *) a3->native.GetPointer(),
											(vtkCellArray *) a4->native.GetPointer(),
											(vtkPointData *) a5->native.GetPointer(),
											(vtkPointData *) a6->native.GetPointer(),
											(vtkCellData *) a7->native.GetPointer(),
											(vtkUnsignedCharArray *) a8->native.GetPointer()
										);
										return;
									}
								}
							}
						}
					}
				}
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGenericAdaptorCellWrap::TriangulateFace(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGenericAdaptorCellWrap *wrapper = ObjectWrap::Unwrap<VtkGenericAdaptorCellWrap>(info.Holder());
	vtkGenericAdaptorCell *native = (vtkGenericAdaptorCell *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkGenericAttributeCollectionWrap::ptpl))->HasInstance(info[0]))
	{
		VtkGenericAttributeCollectionWrap *a0 = ObjectWrap::Unwrap<VtkGenericAttributeCollectionWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsObject() && (Nan::New(VtkGenericCellTessellatorWrap::ptpl))->HasInstance(info[1]))
		{
			VtkGenericCellTessellatorWrap *a1 = ObjectWrap::Unwrap<VtkGenericCellTessellatorWrap>(info[1]->ToObject());
			if(info.Length() > 2 && info[2]->IsInt32())
			{
				if(info.Length() > 3 && info[3]->IsObject() && (Nan::New(VtkPointsWrap::ptpl))->HasInstance(info[3]))
				{
					VtkPointsWrap *a3 = ObjectWrap::Unwrap<VtkPointsWrap>(info[3]->ToObject());
					if(info.Length() > 4 && info[4]->IsObject() && (Nan::New(VtkIncrementalPointLocatorWrap::ptpl))->HasInstance(info[4]))
					{
						VtkIncrementalPointLocatorWrap *a4 = ObjectWrap::Unwrap<VtkIncrementalPointLocatorWrap>(info[4]->ToObject());
						if(info.Length() > 5 && info[5]->IsObject() && (Nan::New(VtkCellArrayWrap::ptpl))->HasInstance(info[5]))
						{
							VtkCellArrayWrap *a5 = ObjectWrap::Unwrap<VtkCellArrayWrap>(info[5]->ToObject());
							if(info.Length() > 6 && info[6]->IsObject() && (Nan::New(VtkPointDataWrap::ptpl))->HasInstance(info[6]))
							{
								VtkPointDataWrap *a6 = ObjectWrap::Unwrap<VtkPointDataWrap>(info[6]->ToObject());
								if(info.Length() > 7 && info[7]->IsObject() && (Nan::New(VtkPointDataWrap::ptpl))->HasInstance(info[7]))
								{
									VtkPointDataWrap *a7 = ObjectWrap::Unwrap<VtkPointDataWrap>(info[7]->ToObject());
									if(info.Length() > 8 && info[8]->IsObject() && (Nan::New(VtkCellDataWrap::ptpl))->HasInstance(info[8]))
									{
										VtkCellDataWrap *a8 = ObjectWrap::Unwrap<VtkCellDataWrap>(info[8]->ToObject());
										if(info.Length() != 9)
										{
											Nan::ThrowError("Too many parameters.");
											return;
										}
										native->TriangulateFace(
											(vtkGenericAttributeCollection *) a0->native.GetPointer(),
											(vtkGenericCellTessellator *) a1->native.GetPointer(),
											info[2]->Int32Value(),
											(vtkPoints *) a3->native.GetPointer(),
											(vtkIncrementalPointLocator *) a4->native.GetPointer(),
											(vtkCellArray *) a5->native.GetPointer(),
											(vtkPointData *) a6->native.GetPointer(),
											(vtkPointData *) a7->native.GetPointer(),
											(vtkCellData *) a8->native.GetPointer()
										);
										return;
									}
								}
							}
						}
					}
				}
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

