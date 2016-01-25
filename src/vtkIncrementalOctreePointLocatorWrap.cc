/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkIncrementalPointLocatorWrap.h"
#include "vtkIncrementalOctreePointLocatorWrap.h"
#include "vtkObjectWrap.h"
#include "vtkPointsWrap.h"
#include "vtkPolyDataWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkIncrementalOctreePointLocatorWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkIncrementalOctreePointLocatorWrap::ptpl;

VtkIncrementalOctreePointLocatorWrap::VtkIncrementalOctreePointLocatorWrap()
{ }

VtkIncrementalOctreePointLocatorWrap::VtkIncrementalOctreePointLocatorWrap(vtkSmartPointer<vtkIncrementalOctreePointLocator> _native)
{ native = _native; }

VtkIncrementalOctreePointLocatorWrap::~VtkIncrementalOctreePointLocatorWrap()
{ }

void VtkIncrementalOctreePointLocatorWrap::Init(v8::Local<v8::Object> exports)
{
	if (!constructor.IsEmpty()) return;
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkIncrementalPointLocatorWrap::Init( exports );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkIncrementalPointLocatorWrap::ptpl));

	tpl->SetClassName(Nan::New("VtkIncrementalOctreePointLocatorWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );

	exports->Set(Nan::New("vtkIncrementalOctreePointLocator").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("IncrementalOctreePointLocator").ToLocalChecked(),tpl->GetFunction());
}

void VtkIncrementalOctreePointLocatorWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "BuildCubicOctreeOff", BuildCubicOctreeOff);
	Nan::SetPrototypeMethod(tpl, "buildCubicOctreeOff", BuildCubicOctreeOff);

	Nan::SetPrototypeMethod(tpl, "BuildCubicOctreeOn", BuildCubicOctreeOn);
	Nan::SetPrototypeMethod(tpl, "buildCubicOctreeOn", BuildCubicOctreeOn);

	Nan::SetPrototypeMethod(tpl, "BuildLocator", BuildLocator);
	Nan::SetPrototypeMethod(tpl, "buildLocator", BuildLocator);

	Nan::SetPrototypeMethod(tpl, "FreeSearchStructure", FreeSearchStructure);
	Nan::SetPrototypeMethod(tpl, "freeSearchStructure", FreeSearchStructure);

	Nan::SetPrototypeMethod(tpl, "GenerateRepresentation", GenerateRepresentation);
	Nan::SetPrototypeMethod(tpl, "generateRepresentation", GenerateRepresentation);

	Nan::SetPrototypeMethod(tpl, "GetBuildCubicOctree", GetBuildCubicOctree);
	Nan::SetPrototypeMethod(tpl, "getBuildCubicOctree", GetBuildCubicOctree);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

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

	Nan::SetPrototypeMethod(tpl, "Initialize", Initialize);
	Nan::SetPrototypeMethod(tpl, "initialize", Initialize);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetBuildCubicOctree", SetBuildCubicOctree);
	Nan::SetPrototypeMethod(tpl, "setBuildCubicOctree", SetBuildCubicOctree);

	Nan::SetPrototypeMethod(tpl, "SetMaxPointsPerLeaf", SetMaxPointsPerLeaf);
	Nan::SetPrototypeMethod(tpl, "setMaxPointsPerLeaf", SetMaxPointsPerLeaf);

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
		VtkIncrementalOctreePointLocatorWrap* obj = new VtkIncrementalOctreePointLocatorWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
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
		if(info.Length() > 1 && info[1]->IsObject())
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

void VtkIncrementalOctreePointLocatorWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkIncrementalOctreePointLocatorWrap *wrapper = ObjectWrap::Unwrap<VtkIncrementalOctreePointLocatorWrap>(info.Holder());
	vtkIncrementalOctreePointLocator *native = (vtkIncrementalOctreePointLocator *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
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
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkPointsWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPointsWrap *w = new VtkPointsWrap();
	w->native.TakeReference(r);
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

void VtkIncrementalOctreePointLocatorWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkIncrementalOctreePointLocatorWrap *wrapper = ObjectWrap::Unwrap<VtkIncrementalOctreePointLocatorWrap>(info.Holder());
	vtkIncrementalOctreePointLocator *native = (vtkIncrementalOctreePointLocator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
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
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkIncrementalOctreePointLocatorWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkIncrementalOctreePointLocatorWrap *w = new VtkIncrementalOctreePointLocatorWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkIncrementalOctreePointLocatorWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkIncrementalOctreePointLocatorWrap *wrapper = ObjectWrap::Unwrap<VtkIncrementalOctreePointLocatorWrap>(info.Holder());
	vtkIncrementalOctreePointLocator *native = (vtkIncrementalOctreePointLocator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkIncrementalOctreePointLocator * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::Function>(VtkIncrementalOctreePointLocatorWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkIncrementalOctreePointLocatorWrap *w = new VtkIncrementalOctreePointLocatorWrap();
		w->native.TakeReference(r);
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
