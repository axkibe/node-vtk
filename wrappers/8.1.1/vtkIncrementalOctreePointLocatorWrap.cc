/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkIncrementalPointLocatorWrap.h"
#include "vtkIncrementalOctreePointLocatorWrap.h"
#include "vtkObjectBaseWrap.h"
#include "vtkPointsWrap.h"
#include "vtkPolyDataWrap.h"
#include "vtkIdListWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkIncrementalOctreePointLocatorWrap::ptpl;

VtkIncrementalOctreePointLocatorWrap::VtkIncrementalOctreePointLocatorWrap()
{ }

VtkIncrementalOctreePointLocatorWrap::VtkIncrementalOctreePointLocatorWrap(vtkSmartPointer<vtkIncrementalOctreePointLocator> _native)
{ native = _native; }

VtkIncrementalOctreePointLocatorWrap::~VtkIncrementalOctreePointLocatorWrap()
{ }

void VtkIncrementalOctreePointLocatorWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkIncrementalOctreePointLocator").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("IncrementalOctreePointLocator").ToLocalChecked(), ConstructorGetter);
}

void VtkIncrementalOctreePointLocatorWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkIncrementalOctreePointLocatorWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkIncrementalPointLocatorWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkIncrementalPointLocatorWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkIncrementalOctreePointLocatorWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "BuildCubicOctreeOff", BuildCubicOctreeOff);
	Nan::SetPrototypeMethod(tpl, "buildCubicOctreeOff", BuildCubicOctreeOff);

	Nan::SetPrototypeMethod(tpl, "BuildCubicOctreeOn", BuildCubicOctreeOn);
	Nan::SetPrototypeMethod(tpl, "buildCubicOctreeOn", BuildCubicOctreeOn);

	Nan::SetPrototypeMethod(tpl, "BuildLocator", BuildLocator);
	Nan::SetPrototypeMethod(tpl, "buildLocator", BuildLocator);

	Nan::SetPrototypeMethod(tpl, "FindClosestNPoints", FindClosestNPoints);
	Nan::SetPrototypeMethod(tpl, "findClosestNPoints", FindClosestNPoints);

	Nan::SetPrototypeMethod(tpl, "FindPointsWithinRadius", FindPointsWithinRadius);
	Nan::SetPrototypeMethod(tpl, "findPointsWithinRadius", FindPointsWithinRadius);

	Nan::SetPrototypeMethod(tpl, "FindPointsWithinSquaredRadius", FindPointsWithinSquaredRadius);
	Nan::SetPrototypeMethod(tpl, "findPointsWithinSquaredRadius", FindPointsWithinSquaredRadius);

	Nan::SetPrototypeMethod(tpl, "FreeSearchStructure", FreeSearchStructure);
	Nan::SetPrototypeMethod(tpl, "freeSearchStructure", FreeSearchStructure);

	Nan::SetPrototypeMethod(tpl, "GenerateRepresentation", GenerateRepresentation);
	Nan::SetPrototypeMethod(tpl, "generateRepresentation", GenerateRepresentation);

	Nan::SetPrototypeMethod(tpl, "GetBuildCubicOctree", GetBuildCubicOctree);
	Nan::SetPrototypeMethod(tpl, "getBuildCubicOctree", GetBuildCubicOctree);

	Nan::SetPrototypeMethod(tpl, "GetLocatorPoints", GetLocatorPoints);
	Nan::SetPrototypeMethod(tpl, "getLocatorPoints", GetLocatorPoints);

	Nan::SetPrototypeMethod(tpl, "GetMaxPointsPerLeaf", GetMaxPointsPerLeaf);
	Nan::SetPrototypeMethod(tpl, "getMaxPointsPerLeaf", GetMaxPointsPerLeaf);

	Nan::SetPrototypeMethod(tpl, "GetMaxPointsPerLeafMaxValue", GetMaxPointsPerLeafMaxValue);
	Nan::SetPrototypeMethod(tpl, "getMaxPointsPerLeafMaxValue", GetMaxPointsPerLeafMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetMaxPointsPerLeafMinValue", GetMaxPointsPerLeafMinValue);
	Nan::SetPrototypeMethod(tpl, "getMaxPointsPerLeafMinValue", GetMaxPointsPerLeafMinValue);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfPoints", GetNumberOfPoints);
	Nan::SetPrototypeMethod(tpl, "getNumberOfPoints", GetNumberOfPoints);

	Nan::SetPrototypeMethod(tpl, "InitPointInsertion", InitPointInsertion);
	Nan::SetPrototypeMethod(tpl, "initPointInsertion", InitPointInsertion);

	Nan::SetPrototypeMethod(tpl, "Initialize", Initialize);
	Nan::SetPrototypeMethod(tpl, "initialize", Initialize);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetBuildCubicOctree", SetBuildCubicOctree);
	Nan::SetPrototypeMethod(tpl, "setBuildCubicOctree", SetBuildCubicOctree);

	Nan::SetPrototypeMethod(tpl, "SetMaxPointsPerLeaf", SetMaxPointsPerLeaf);
	Nan::SetPrototypeMethod(tpl, "setMaxPointsPerLeaf", SetMaxPointsPerLeaf);

#ifdef VTK_NODE_PLUS_VTKINCREMENTALOCTREEPOINTLOCATORWRAP_INITPTPL
	VTK_NODE_PLUS_VTKINCREMENTALOCTREEPOINTLOCATORWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkIncrementalOctreePointLocatorWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkIncrementalOctreePointLocator> native = vtkSmartPointer<vtkIncrementalOctreePointLocator>::New();
		VtkIncrementalOctreePointLocatorWrap* obj = new VtkIncrementalOctreePointLocatorWrap(native);
		obj->Wrap(info.This());
	}
	else
	{
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
		{
			Nan::ThrowError("Parameter Error");
			return;
		}
	}

	info.GetReturnValue().Set(info.This());
}

void VtkIncrementalOctreePointLocatorWrap::BuildCubicOctreeOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkIncrementalOctreePointLocatorWrap *wrapper = ObjectWrap::Unwrap<VtkIncrementalOctreePointLocatorWrap>(info.Holder());
	vtkIncrementalOctreePointLocator *native = (vtkIncrementalOctreePointLocator *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->BuildCubicOctreeOff();
}

void VtkIncrementalOctreePointLocatorWrap::BuildCubicOctreeOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkIncrementalOctreePointLocatorWrap *wrapper = ObjectWrap::Unwrap<VtkIncrementalOctreePointLocatorWrap>(info.Holder());
	vtkIncrementalOctreePointLocator *native = (vtkIncrementalOctreePointLocator *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->BuildCubicOctreeOn();
}

void VtkIncrementalOctreePointLocatorWrap::BuildLocator(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkIncrementalOctreePointLocatorWrap *wrapper = ObjectWrap::Unwrap<VtkIncrementalOctreePointLocatorWrap>(info.Holder());
	vtkIncrementalOctreePointLocator *native = (vtkIncrementalOctreePointLocator *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->BuildLocator();
}

void VtkIncrementalOctreePointLocatorWrap::FindClosestNPoints(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkIncrementalOctreePointLocatorWrap *wrapper = ObjectWrap::Unwrap<VtkIncrementalOctreePointLocatorWrap>(info.Holder());
	vtkIncrementalOctreePointLocator *native = (vtkIncrementalOctreePointLocator *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsFloat64Array())
		{
			v8::Local<v8::Float64Array>a1(v8::Local<v8::Float64Array>::Cast(info[1]->ToObject()));
			if( a1->Length() < 3 )
			{
				Nan::ThrowError("Array too short.");
				return;
			}

			if(info.Length() > 2 && info[2]->IsObject() && (Nan::New(VtkIdListWrap::ptpl))->HasInstance(info[2]))
			{
				VtkIdListWrap *a2 = ObjectWrap::Unwrap<VtkIdListWrap>(info[2]->ToObject());
								if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				native->FindClosestNPoints(
					info[0]->Int32Value(),
					(double *)(a1->Buffer()->GetContents().Data()),
					(vtkIdList *) a2->native.GetPointer()
				);
				return;
			}
		}
		else if(info.Length() > 1 && info[1]->IsArray())
		{
			v8::Local<v8::Array>a1(v8::Local<v8::Array>::Cast(info[1]->ToObject()));
			double b1[3];
			if( a1->Length() < 3 )
			{
				Nan::ThrowError("Array too short.");
				return;
			}

			for( i = 0; i < 3; i++ )
			{
				if( !a1->Get(i)->IsNumber() )
				{
					Nan::ThrowError("Array contents invalid.");
					return;
				}
				b1[i] = a1->Get(i)->NumberValue();
			}
			if(info.Length() > 2 && info[2]->IsObject() && (Nan::New(VtkIdListWrap::ptpl))->HasInstance(info[2]))
			{
				VtkIdListWrap *a2 = ObjectWrap::Unwrap<VtkIdListWrap>(info[2]->ToObject());
								if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				native->FindClosestNPoints(
					info[0]->Int32Value(),
					b1,
					(vtkIdList *) a2->native.GetPointer()
				);
				return;
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkIncrementalOctreePointLocatorWrap::FindPointsWithinRadius(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkIncrementalOctreePointLocatorWrap *wrapper = ObjectWrap::Unwrap<VtkIncrementalOctreePointLocatorWrap>(info.Holder());
	vtkIncrementalOctreePointLocator *native = (vtkIncrementalOctreePointLocator *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() > 1 && info[1]->IsFloat64Array())
		{
			v8::Local<v8::Float64Array>a1(v8::Local<v8::Float64Array>::Cast(info[1]->ToObject()));
			if( a1->Length() < 3 )
			{
				Nan::ThrowError("Array too short.");
				return;
			}

			if(info.Length() > 2 && info[2]->IsObject() && (Nan::New(VtkIdListWrap::ptpl))->HasInstance(info[2]))
			{
				VtkIdListWrap *a2 = ObjectWrap::Unwrap<VtkIdListWrap>(info[2]->ToObject());
								if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				native->FindPointsWithinRadius(
					info[0]->NumberValue(),
					(double *)(a1->Buffer()->GetContents().Data()),
					(vtkIdList *) a2->native.GetPointer()
				);
				return;
			}
		}
		else if(info.Length() > 1 && info[1]->IsArray())
		{
			v8::Local<v8::Array>a1(v8::Local<v8::Array>::Cast(info[1]->ToObject()));
			double b1[3];
			if( a1->Length() < 3 )
			{
				Nan::ThrowError("Array too short.");
				return;
			}

			for( i = 0; i < 3; i++ )
			{
				if( !a1->Get(i)->IsNumber() )
				{
					Nan::ThrowError("Array contents invalid.");
					return;
				}
				b1[i] = a1->Get(i)->NumberValue();
			}
			if(info.Length() > 2 && info[2]->IsObject() && (Nan::New(VtkIdListWrap::ptpl))->HasInstance(info[2]))
			{
				VtkIdListWrap *a2 = ObjectWrap::Unwrap<VtkIdListWrap>(info[2]->ToObject());
								if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				native->FindPointsWithinRadius(
					info[0]->NumberValue(),
					b1,
					(vtkIdList *) a2->native.GetPointer()
				);
				return;
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkIncrementalOctreePointLocatorWrap::FindPointsWithinSquaredRadius(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkIncrementalOctreePointLocatorWrap *wrapper = ObjectWrap::Unwrap<VtkIncrementalOctreePointLocatorWrap>(info.Holder());
	vtkIncrementalOctreePointLocator *native = (vtkIncrementalOctreePointLocator *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() > 1 && info[1]->IsFloat64Array())
		{
			v8::Local<v8::Float64Array>a1(v8::Local<v8::Float64Array>::Cast(info[1]->ToObject()));
			if( a1->Length() < 3 )
			{
				Nan::ThrowError("Array too short.");
				return;
			}

			if(info.Length() > 2 && info[2]->IsObject() && (Nan::New(VtkIdListWrap::ptpl))->HasInstance(info[2]))
			{
				VtkIdListWrap *a2 = ObjectWrap::Unwrap<VtkIdListWrap>(info[2]->ToObject());
								if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				native->FindPointsWithinSquaredRadius(
					info[0]->NumberValue(),
					(double *)(a1->Buffer()->GetContents().Data()),
					(vtkIdList *) a2->native.GetPointer()
				);
				return;
			}
		}
		else if(info.Length() > 1 && info[1]->IsArray())
		{
			v8::Local<v8::Array>a1(v8::Local<v8::Array>::Cast(info[1]->ToObject()));
			double b1[3];
			if( a1->Length() < 3 )
			{
				Nan::ThrowError("Array too short.");
				return;
			}

			for( i = 0; i < 3; i++ )
			{
				if( !a1->Get(i)->IsNumber() )
				{
					Nan::ThrowError("Array contents invalid.");
					return;
				}
				b1[i] = a1->Get(i)->NumberValue();
			}
			if(info.Length() > 2 && info[2]->IsObject() && (Nan::New(VtkIdListWrap::ptpl))->HasInstance(info[2]))
			{
				VtkIdListWrap *a2 = ObjectWrap::Unwrap<VtkIdListWrap>(info[2]->ToObject());
								if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				native->FindPointsWithinSquaredRadius(
					info[0]->NumberValue(),
					b1,
					(vtkIdList *) a2->native.GetPointer()
				);
				return;
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkIncrementalOctreePointLocatorWrap::FreeSearchStructure(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkIncrementalOctreePointLocatorWrap *wrapper = ObjectWrap::Unwrap<VtkIncrementalOctreePointLocatorWrap>(info.Holder());
	vtkIncrementalOctreePointLocator *native = (vtkIncrementalOctreePointLocator *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->FreeSearchStructure();
}

void VtkIncrementalOctreePointLocatorWrap::GenerateRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkIncrementalOctreePointLocatorWrap *wrapper = ObjectWrap::Unwrap<VtkIncrementalOctreePointLocatorWrap>(info.Holder());
	vtkIncrementalOctreePointLocator *native = (vtkIncrementalOctreePointLocator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsObject() && (Nan::New(VtkPolyDataWrap::ptpl))->HasInstance(info[1]))
		{
			VtkPolyDataWrap *a1 = ObjectWrap::Unwrap<VtkPolyDataWrap>(info[1]->ToObject());
						if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->GenerateRepresentation(
				info[0]->Int32Value(),
				(vtkPolyData *) a1->native.GetPointer()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkIncrementalOctreePointLocatorWrap::GetBuildCubicOctree(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkIncrementalOctreePointLocatorWrap *wrapper = ObjectWrap::Unwrap<VtkIncrementalOctreePointLocatorWrap>(info.Holder());
	vtkIncrementalOctreePointLocator *native = (vtkIncrementalOctreePointLocator *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetBuildCubicOctree();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkIncrementalOctreePointLocatorWrap::GetLocatorPoints(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkIncrementalOctreePointLocatorWrap *wrapper = ObjectWrap::Unwrap<VtkIncrementalOctreePointLocatorWrap>(info.Holder());
	vtkIncrementalOctreePointLocator *native = (vtkIncrementalOctreePointLocator *)wrapper->native.GetPointer();
	vtkPoints * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLocatorPoints();
	VtkPointsWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkPointsWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPointsWrap *w = new VtkPointsWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkIncrementalOctreePointLocatorWrap::GetMaxPointsPerLeaf(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkIncrementalOctreePointLocatorWrap *wrapper = ObjectWrap::Unwrap<VtkIncrementalOctreePointLocatorWrap>(info.Holder());
	vtkIncrementalOctreePointLocator *native = (vtkIncrementalOctreePointLocator *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMaxPointsPerLeaf();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkIncrementalOctreePointLocatorWrap::GetMaxPointsPerLeafMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkIncrementalOctreePointLocatorWrap *wrapper = ObjectWrap::Unwrap<VtkIncrementalOctreePointLocatorWrap>(info.Holder());
	vtkIncrementalOctreePointLocator *native = (vtkIncrementalOctreePointLocator *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMaxPointsPerLeafMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkIncrementalOctreePointLocatorWrap::GetMaxPointsPerLeafMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkIncrementalOctreePointLocatorWrap *wrapper = ObjectWrap::Unwrap<VtkIncrementalOctreePointLocatorWrap>(info.Holder());
	vtkIncrementalOctreePointLocator *native = (vtkIncrementalOctreePointLocator *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMaxPointsPerLeafMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkIncrementalOctreePointLocatorWrap::GetNumberOfPoints(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkIncrementalOctreePointLocatorWrap *wrapper = ObjectWrap::Unwrap<VtkIncrementalOctreePointLocatorWrap>(info.Holder());
	vtkIncrementalOctreePointLocator *native = (vtkIncrementalOctreePointLocator *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfPoints();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkIncrementalOctreePointLocatorWrap::InitPointInsertion(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkIncrementalOctreePointLocatorWrap *wrapper = ObjectWrap::Unwrap<VtkIncrementalOctreePointLocatorWrap>(info.Holder());
	vtkIncrementalOctreePointLocator *native = (vtkIncrementalOctreePointLocator *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkPointsWrap::ptpl))->HasInstance(info[0]))
	{
		VtkPointsWrap *a0 = ObjectWrap::Unwrap<VtkPointsWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsFloat64Array())
		{
			v8::Local<v8::Float64Array>a1(v8::Local<v8::Float64Array>::Cast(info[1]->ToObject()));
			if( a1->Length() < 6 )
			{
				Nan::ThrowError("Array too short.");
				return;
			}

			int r;
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			r = native->InitPointInsertion(
				(vtkPoints *) a0->native.GetPointer(),
				(double *)(a1->Buffer()->GetContents().Data())
			);
			info.GetReturnValue().Set(Nan::New(r));
			return;
		}
		else if(info.Length() > 1 && info[1]->IsArray())
		{
			v8::Local<v8::Array>a1(v8::Local<v8::Array>::Cast(info[1]->ToObject()));
			double b1[6];
			if( a1->Length() < 6 )
			{
				Nan::ThrowError("Array too short.");
				return;
			}

			for( i = 0; i < 6; i++ )
			{
				if( !a1->Get(i)->IsNumber() )
				{
					Nan::ThrowError("Array contents invalid.");
					return;
				}
				b1[i] = a1->Get(i)->NumberValue();
			}
			int r;
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			r = native->InitPointInsertion(
				(vtkPoints *) a0->native.GetPointer(),
				b1
			);
			info.GetReturnValue().Set(Nan::New(r));
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkIncrementalOctreePointLocatorWrap::Initialize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkIncrementalOctreePointLocatorWrap *wrapper = ObjectWrap::Unwrap<VtkIncrementalOctreePointLocatorWrap>(info.Holder());
	vtkIncrementalOctreePointLocator *native = (vtkIncrementalOctreePointLocator *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Initialize();
}

void VtkIncrementalOctreePointLocatorWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkIncrementalOctreePointLocatorWrap *wrapper = ObjectWrap::Unwrap<VtkIncrementalOctreePointLocatorWrap>(info.Holder());
	vtkIncrementalOctreePointLocator *native = (vtkIncrementalOctreePointLocator *)wrapper->native.GetPointer();
	vtkIncrementalOctreePointLocator * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkIncrementalOctreePointLocatorWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkIncrementalOctreePointLocatorWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkIncrementalOctreePointLocatorWrap *w = new VtkIncrementalOctreePointLocatorWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkIncrementalOctreePointLocatorWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkIncrementalOctreePointLocatorWrap *wrapper = ObjectWrap::Unwrap<VtkIncrementalOctreePointLocatorWrap>(info.Holder());
	vtkIncrementalOctreePointLocator *native = (vtkIncrementalOctreePointLocator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectBaseWrap *a0 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[0]->ToObject());
		vtkIncrementalOctreePointLocator * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObjectBase *) a0->native.GetPointer()
		);
		VtkIncrementalOctreePointLocatorWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkIncrementalOctreePointLocatorWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkIncrementalOctreePointLocatorWrap *w = new VtkIncrementalOctreePointLocatorWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkIncrementalOctreePointLocatorWrap::SetBuildCubicOctree(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkIncrementalOctreePointLocatorWrap *wrapper = ObjectWrap::Unwrap<VtkIncrementalOctreePointLocatorWrap>(info.Holder());
	vtkIncrementalOctreePointLocator *native = (vtkIncrementalOctreePointLocator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetBuildCubicOctree(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkIncrementalOctreePointLocatorWrap::SetMaxPointsPerLeaf(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkIncrementalOctreePointLocatorWrap *wrapper = ObjectWrap::Unwrap<VtkIncrementalOctreePointLocatorWrap>(info.Holder());
	vtkIncrementalOctreePointLocator *native = (vtkIncrementalOctreePointLocator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetMaxPointsPerLeaf(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

