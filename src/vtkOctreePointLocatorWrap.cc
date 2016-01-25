/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkAbstractPointLocatorWrap.h"
#include "vtkOctreePointLocatorWrap.h"
#include "vtkObjectWrap.h"
#include "vtkIdTypeArrayWrap.h"
#include "vtkPolyDataWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkOctreePointLocatorWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkOctreePointLocatorWrap::ptpl;

VtkOctreePointLocatorWrap::VtkOctreePointLocatorWrap()
{ }

VtkOctreePointLocatorWrap::VtkOctreePointLocatorWrap(vtkSmartPointer<vtkOctreePointLocator> _native)
{ native = _native; }

VtkOctreePointLocatorWrap::~VtkOctreePointLocatorWrap()
{ }

void VtkOctreePointLocatorWrap::Init(v8::Local<v8::Object> exports)
{
	if (!constructor.IsEmpty()) return;
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkAbstractPointLocatorWrap::Init( exports );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkAbstractPointLocatorWrap::ptpl));

	tpl->SetClassName(Nan::New("VtkOctreePointLocatorWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );

	exports->Set(Nan::New("vtkOctreePointLocator").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("OctreePointLocator").ToLocalChecked(),tpl->GetFunction());
}

void VtkOctreePointLocatorWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "BuildLocator", BuildLocator);
	Nan::SetPrototypeMethod(tpl, "buildLocator", BuildLocator);

	Nan::SetPrototypeMethod(tpl, "FreeSearchStructure", FreeSearchStructure);
	Nan::SetPrototypeMethod(tpl, "freeSearchStructure", FreeSearchStructure);

	Nan::SetPrototypeMethod(tpl, "GenerateRepresentation", GenerateRepresentation);
	Nan::SetPrototypeMethod(tpl, "generateRepresentation", GenerateRepresentation);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetCreateCubicOctants", GetCreateCubicOctants);
	Nan::SetPrototypeMethod(tpl, "getCreateCubicOctants", GetCreateCubicOctants);

	Nan::SetPrototypeMethod(tpl, "GetFudgeFactor", GetFudgeFactor);
	Nan::SetPrototypeMethod(tpl, "getFudgeFactor", GetFudgeFactor);

	Nan::SetPrototypeMethod(tpl, "GetMaximumPointsPerRegion", GetMaximumPointsPerRegion);
	Nan::SetPrototypeMethod(tpl, "getMaximumPointsPerRegion", GetMaximumPointsPerRegion);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfLeafNodes", GetNumberOfLeafNodes);
	Nan::SetPrototypeMethod(tpl, "getNumberOfLeafNodes", GetNumberOfLeafNodes);

	Nan::SetPrototypeMethod(tpl, "GetPointsInRegion", GetPointsInRegion);
	Nan::SetPrototypeMethod(tpl, "getPointsInRegion", GetPointsInRegion);

	Nan::SetPrototypeMethod(tpl, "GetRegionContainingPoint", GetRegionContainingPoint);
	Nan::SetPrototypeMethod(tpl, "getRegionContainingPoint", GetRegionContainingPoint);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetCreateCubicOctants", SetCreateCubicOctants);
	Nan::SetPrototypeMethod(tpl, "setCreateCubicOctants", SetCreateCubicOctants);

	Nan::SetPrototypeMethod(tpl, "SetFudgeFactor", SetFudgeFactor);
	Nan::SetPrototypeMethod(tpl, "setFudgeFactor", SetFudgeFactor);

	Nan::SetPrototypeMethod(tpl, "SetMaximumPointsPerRegion", SetMaximumPointsPerRegion);
	Nan::SetPrototypeMethod(tpl, "setMaximumPointsPerRegion", SetMaximumPointsPerRegion);

}

void VtkOctreePointLocatorWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkOctreePointLocator> native = vtkSmartPointer<vtkOctreePointLocator>::New();
		VtkOctreePointLocatorWrap* obj = new VtkOctreePointLocatorWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkOctreePointLocatorWrap::BuildLocator(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOctreePointLocatorWrap *wrapper = ObjectWrap::Unwrap<VtkOctreePointLocatorWrap>(info.Holder());
	vtkOctreePointLocator *native = (vtkOctreePointLocator *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->BuildLocator();
}

void VtkOctreePointLocatorWrap::FreeSearchStructure(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOctreePointLocatorWrap *wrapper = ObjectWrap::Unwrap<VtkOctreePointLocatorWrap>(info.Holder());
	vtkOctreePointLocator *native = (vtkOctreePointLocator *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->FreeSearchStructure();
}

void VtkOctreePointLocatorWrap::GenerateRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOctreePointLocatorWrap *wrapper = ObjectWrap::Unwrap<VtkOctreePointLocatorWrap>(info.Holder());
	vtkOctreePointLocator *native = (vtkOctreePointLocator *)wrapper->native.GetPointer();
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

void VtkOctreePointLocatorWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOctreePointLocatorWrap *wrapper = ObjectWrap::Unwrap<VtkOctreePointLocatorWrap>(info.Holder());
	vtkOctreePointLocator *native = (vtkOctreePointLocator *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkOctreePointLocatorWrap::GetCreateCubicOctants(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOctreePointLocatorWrap *wrapper = ObjectWrap::Unwrap<VtkOctreePointLocatorWrap>(info.Holder());
	vtkOctreePointLocator *native = (vtkOctreePointLocator *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCreateCubicOctants();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkOctreePointLocatorWrap::GetFudgeFactor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOctreePointLocatorWrap *wrapper = ObjectWrap::Unwrap<VtkOctreePointLocatorWrap>(info.Holder());
	vtkOctreePointLocator *native = (vtkOctreePointLocator *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetFudgeFactor();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkOctreePointLocatorWrap::GetMaximumPointsPerRegion(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOctreePointLocatorWrap *wrapper = ObjectWrap::Unwrap<VtkOctreePointLocatorWrap>(info.Holder());
	vtkOctreePointLocator *native = (vtkOctreePointLocator *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMaximumPointsPerRegion();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkOctreePointLocatorWrap::GetNumberOfLeafNodes(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOctreePointLocatorWrap *wrapper = ObjectWrap::Unwrap<VtkOctreePointLocatorWrap>(info.Holder());
	vtkOctreePointLocator *native = (vtkOctreePointLocator *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfLeafNodes();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkOctreePointLocatorWrap::GetPointsInRegion(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOctreePointLocatorWrap *wrapper = ObjectWrap::Unwrap<VtkOctreePointLocatorWrap>(info.Holder());
	vtkOctreePointLocator *native = (vtkOctreePointLocator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		vtkIdTypeArray * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetPointsInRegion(
			info[0]->Int32Value()
		);
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::Function>(VtkIdTypeArrayWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkIdTypeArrayWrap *w = new VtkIdTypeArrayWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkOctreePointLocatorWrap::GetRegionContainingPoint(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOctreePointLocatorWrap *wrapper = ObjectWrap::Unwrap<VtkOctreePointLocatorWrap>(info.Holder());
	vtkOctreePointLocator *native = (vtkOctreePointLocator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
			if(info.Length() > 2 && info[2]->IsNumber())
			{
				int r;
				if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				r = native->GetRegionContainingPoint(
					info[0]->NumberValue(),
					info[1]->NumberValue(),
					info[2]->NumberValue()
				);
				info.GetReturnValue().Set(Nan::New(r));
				return;
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkOctreePointLocatorWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOctreePointLocatorWrap *wrapper = ObjectWrap::Unwrap<VtkOctreePointLocatorWrap>(info.Holder());
	vtkOctreePointLocator *native = (vtkOctreePointLocator *)wrapper->native.GetPointer();
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

void VtkOctreePointLocatorWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOctreePointLocatorWrap *wrapper = ObjectWrap::Unwrap<VtkOctreePointLocatorWrap>(info.Holder());
	vtkOctreePointLocator *native = (vtkOctreePointLocator *)wrapper->native.GetPointer();
	vtkOctreePointLocator * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkOctreePointLocatorWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkOctreePointLocatorWrap *w = new VtkOctreePointLocatorWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkOctreePointLocatorWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOctreePointLocatorWrap *wrapper = ObjectWrap::Unwrap<VtkOctreePointLocatorWrap>(info.Holder());
	vtkOctreePointLocator *native = (vtkOctreePointLocator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkOctreePointLocator * r;
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
			Nan::New<v8::Function>(VtkOctreePointLocatorWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkOctreePointLocatorWrap *w = new VtkOctreePointLocatorWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkOctreePointLocatorWrap::SetCreateCubicOctants(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOctreePointLocatorWrap *wrapper = ObjectWrap::Unwrap<VtkOctreePointLocatorWrap>(info.Holder());
	vtkOctreePointLocator *native = (vtkOctreePointLocator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetCreateCubicOctants(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkOctreePointLocatorWrap::SetFudgeFactor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOctreePointLocatorWrap *wrapper = ObjectWrap::Unwrap<VtkOctreePointLocatorWrap>(info.Holder());
	vtkOctreePointLocator *native = (vtkOctreePointLocator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetFudgeFactor(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkOctreePointLocatorWrap::SetMaximumPointsPerRegion(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOctreePointLocatorWrap *wrapper = ObjectWrap::Unwrap<VtkOctreePointLocatorWrap>(info.Holder());
	vtkOctreePointLocator *native = (vtkOctreePointLocator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetMaximumPointsPerRegion(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

