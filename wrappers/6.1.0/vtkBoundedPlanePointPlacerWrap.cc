/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkPointPlacerWrap.h"
#include "vtkBoundedPlanePointPlacerWrap.h"
#include "vtkObjectWrap.h"
#include "vtkPlaneWrap.h"
#include "vtkPlaneCollectionWrap.h"
#include "vtkPlanesWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkBoundedPlanePointPlacerWrap::ptpl;

VtkBoundedPlanePointPlacerWrap::VtkBoundedPlanePointPlacerWrap()
{ }

VtkBoundedPlanePointPlacerWrap::VtkBoundedPlanePointPlacerWrap(vtkSmartPointer<vtkBoundedPlanePointPlacer> _native)
{ native = _native; }

VtkBoundedPlanePointPlacerWrap::~VtkBoundedPlanePointPlacerWrap()
{ }

void VtkBoundedPlanePointPlacerWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkBoundedPlanePointPlacer").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("BoundedPlanePointPlacer").ToLocalChecked(), ConstructorGetter);
}

void VtkBoundedPlanePointPlacerWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkBoundedPlanePointPlacerWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkPointPlacerWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkPointPlacerWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkBoundedPlanePointPlacerWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "AddBoundingPlane", AddBoundingPlane);
	Nan::SetPrototypeMethod(tpl, "addBoundingPlane", AddBoundingPlane);

	Nan::SetPrototypeMethod(tpl, "GetBoundingPlanes", GetBoundingPlanes);
	Nan::SetPrototypeMethod(tpl, "getBoundingPlanes", GetBoundingPlanes);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetObliquePlane", GetObliquePlane);
	Nan::SetPrototypeMethod(tpl, "getObliquePlane", GetObliquePlane);

	Nan::SetPrototypeMethod(tpl, "GetProjectionNormal", GetProjectionNormal);
	Nan::SetPrototypeMethod(tpl, "getProjectionNormal", GetProjectionNormal);

	Nan::SetPrototypeMethod(tpl, "GetProjectionNormalMaxValue", GetProjectionNormalMaxValue);
	Nan::SetPrototypeMethod(tpl, "getProjectionNormalMaxValue", GetProjectionNormalMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetProjectionNormalMinValue", GetProjectionNormalMinValue);
	Nan::SetPrototypeMethod(tpl, "getProjectionNormalMinValue", GetProjectionNormalMinValue);

	Nan::SetPrototypeMethod(tpl, "GetProjectionPosition", GetProjectionPosition);
	Nan::SetPrototypeMethod(tpl, "getProjectionPosition", GetProjectionPosition);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "RemoveAllBoundingPlanes", RemoveAllBoundingPlanes);
	Nan::SetPrototypeMethod(tpl, "removeAllBoundingPlanes", RemoveAllBoundingPlanes);

	Nan::SetPrototypeMethod(tpl, "RemoveBoundingPlane", RemoveBoundingPlane);
	Nan::SetPrototypeMethod(tpl, "removeBoundingPlane", RemoveBoundingPlane);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetBoundingPlanes", SetBoundingPlanes);
	Nan::SetPrototypeMethod(tpl, "setBoundingPlanes", SetBoundingPlanes);

	Nan::SetPrototypeMethod(tpl, "SetObliquePlane", SetObliquePlane);
	Nan::SetPrototypeMethod(tpl, "setObliquePlane", SetObliquePlane);

	Nan::SetPrototypeMethod(tpl, "SetProjectionNormal", SetProjectionNormal);
	Nan::SetPrototypeMethod(tpl, "setProjectionNormal", SetProjectionNormal);

	Nan::SetPrototypeMethod(tpl, "SetProjectionNormalToOblique", SetProjectionNormalToOblique);
	Nan::SetPrototypeMethod(tpl, "setProjectionNormalToOblique", SetProjectionNormalToOblique);

	Nan::SetPrototypeMethod(tpl, "SetProjectionNormalToXAxis", SetProjectionNormalToXAxis);
	Nan::SetPrototypeMethod(tpl, "setProjectionNormalToXAxis", SetProjectionNormalToXAxis);

	Nan::SetPrototypeMethod(tpl, "SetProjectionNormalToYAxis", SetProjectionNormalToYAxis);
	Nan::SetPrototypeMethod(tpl, "setProjectionNormalToYAxis", SetProjectionNormalToYAxis);

	Nan::SetPrototypeMethod(tpl, "SetProjectionNormalToZAxis", SetProjectionNormalToZAxis);
	Nan::SetPrototypeMethod(tpl, "setProjectionNormalToZAxis", SetProjectionNormalToZAxis);

	Nan::SetPrototypeMethod(tpl, "SetProjectionPosition", SetProjectionPosition);
	Nan::SetPrototypeMethod(tpl, "setProjectionPosition", SetProjectionPosition);

	ptpl.Reset( tpl );
}

void VtkBoundedPlanePointPlacerWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkBoundedPlanePointPlacer> native = vtkSmartPointer<vtkBoundedPlanePointPlacer>::New();
		VtkBoundedPlanePointPlacerWrap* obj = new VtkBoundedPlanePointPlacerWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkBoundedPlanePointPlacerWrap::AddBoundingPlane(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBoundedPlanePointPlacerWrap *wrapper = ObjectWrap::Unwrap<VtkBoundedPlanePointPlacerWrap>(info.Holder());
	vtkBoundedPlanePointPlacer *native = (vtkBoundedPlanePointPlacer *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkPlaneWrap::ptpl))->HasInstance(info[0]))
	{
		VtkPlaneWrap *a0 = ObjectWrap::Unwrap<VtkPlaneWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->AddBoundingPlane(
			(vtkPlane *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkBoundedPlanePointPlacerWrap::GetBoundingPlanes(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBoundedPlanePointPlacerWrap *wrapper = ObjectWrap::Unwrap<VtkBoundedPlanePointPlacerWrap>(info.Holder());
	vtkBoundedPlanePointPlacer *native = (vtkBoundedPlanePointPlacer *)wrapper->native.GetPointer();
	vtkPlaneCollection * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetBoundingPlanes();
		VtkPlaneCollectionWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkPlaneCollectionWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPlaneCollectionWrap *w = new VtkPlaneCollectionWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkBoundedPlanePointPlacerWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBoundedPlanePointPlacerWrap *wrapper = ObjectWrap::Unwrap<VtkBoundedPlanePointPlacerWrap>(info.Holder());
	vtkBoundedPlanePointPlacer *native = (vtkBoundedPlanePointPlacer *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkBoundedPlanePointPlacerWrap::GetObliquePlane(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBoundedPlanePointPlacerWrap *wrapper = ObjectWrap::Unwrap<VtkBoundedPlanePointPlacerWrap>(info.Holder());
	vtkBoundedPlanePointPlacer *native = (vtkBoundedPlanePointPlacer *)wrapper->native.GetPointer();
	vtkPlane * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetObliquePlane();
		VtkPlaneWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkPlaneWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPlaneWrap *w = new VtkPlaneWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkBoundedPlanePointPlacerWrap::GetProjectionNormal(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBoundedPlanePointPlacerWrap *wrapper = ObjectWrap::Unwrap<VtkBoundedPlanePointPlacerWrap>(info.Holder());
	vtkBoundedPlanePointPlacer *native = (vtkBoundedPlanePointPlacer *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetProjectionNormal();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkBoundedPlanePointPlacerWrap::GetProjectionNormalMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBoundedPlanePointPlacerWrap *wrapper = ObjectWrap::Unwrap<VtkBoundedPlanePointPlacerWrap>(info.Holder());
	vtkBoundedPlanePointPlacer *native = (vtkBoundedPlanePointPlacer *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetProjectionNormalMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkBoundedPlanePointPlacerWrap::GetProjectionNormalMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBoundedPlanePointPlacerWrap *wrapper = ObjectWrap::Unwrap<VtkBoundedPlanePointPlacerWrap>(info.Holder());
	vtkBoundedPlanePointPlacer *native = (vtkBoundedPlanePointPlacer *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetProjectionNormalMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkBoundedPlanePointPlacerWrap::GetProjectionPosition(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBoundedPlanePointPlacerWrap *wrapper = ObjectWrap::Unwrap<VtkBoundedPlanePointPlacerWrap>(info.Holder());
	vtkBoundedPlanePointPlacer *native = (vtkBoundedPlanePointPlacer *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetProjectionPosition();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkBoundedPlanePointPlacerWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBoundedPlanePointPlacerWrap *wrapper = ObjectWrap::Unwrap<VtkBoundedPlanePointPlacerWrap>(info.Holder());
	vtkBoundedPlanePointPlacer *native = (vtkBoundedPlanePointPlacer *)wrapper->native.GetPointer();
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

void VtkBoundedPlanePointPlacerWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBoundedPlanePointPlacerWrap *wrapper = ObjectWrap::Unwrap<VtkBoundedPlanePointPlacerWrap>(info.Holder());
	vtkBoundedPlanePointPlacer *native = (vtkBoundedPlanePointPlacer *)wrapper->native.GetPointer();
	vtkBoundedPlanePointPlacer * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkBoundedPlanePointPlacerWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkBoundedPlanePointPlacerWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkBoundedPlanePointPlacerWrap *w = new VtkBoundedPlanePointPlacerWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkBoundedPlanePointPlacerWrap::RemoveAllBoundingPlanes(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBoundedPlanePointPlacerWrap *wrapper = ObjectWrap::Unwrap<VtkBoundedPlanePointPlacerWrap>(info.Holder());
	vtkBoundedPlanePointPlacer *native = (vtkBoundedPlanePointPlacer *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->RemoveAllBoundingPlanes();
}

void VtkBoundedPlanePointPlacerWrap::RemoveBoundingPlane(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBoundedPlanePointPlacerWrap *wrapper = ObjectWrap::Unwrap<VtkBoundedPlanePointPlacerWrap>(info.Holder());
	vtkBoundedPlanePointPlacer *native = (vtkBoundedPlanePointPlacer *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkPlaneWrap::ptpl))->HasInstance(info[0]))
	{
		VtkPlaneWrap *a0 = ObjectWrap::Unwrap<VtkPlaneWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->RemoveBoundingPlane(
			(vtkPlane *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkBoundedPlanePointPlacerWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBoundedPlanePointPlacerWrap *wrapper = ObjectWrap::Unwrap<VtkBoundedPlanePointPlacerWrap>(info.Holder());
	vtkBoundedPlanePointPlacer *native = (vtkBoundedPlanePointPlacer *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkBoundedPlanePointPlacer * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkBoundedPlanePointPlacerWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkBoundedPlanePointPlacerWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkBoundedPlanePointPlacerWrap *w = new VtkBoundedPlanePointPlacerWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkBoundedPlanePointPlacerWrap::SetBoundingPlanes(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBoundedPlanePointPlacerWrap *wrapper = ObjectWrap::Unwrap<VtkBoundedPlanePointPlacerWrap>(info.Holder());
	vtkBoundedPlanePointPlacer *native = (vtkBoundedPlanePointPlacer *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkPlaneCollectionWrap::ptpl))->HasInstance(info[0]))
	{
		VtkPlaneCollectionWrap *a0 = ObjectWrap::Unwrap<VtkPlaneCollectionWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetBoundingPlanes(
			(vtkPlaneCollection *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkBoundedPlanePointPlacerWrap::SetObliquePlane(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBoundedPlanePointPlacerWrap *wrapper = ObjectWrap::Unwrap<VtkBoundedPlanePointPlacerWrap>(info.Holder());
	vtkBoundedPlanePointPlacer *native = (vtkBoundedPlanePointPlacer *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkPlaneWrap::ptpl))->HasInstance(info[0]))
	{
		VtkPlaneWrap *a0 = ObjectWrap::Unwrap<VtkPlaneWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetObliquePlane(
			(vtkPlane *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkBoundedPlanePointPlacerWrap::SetProjectionNormal(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBoundedPlanePointPlacerWrap *wrapper = ObjectWrap::Unwrap<VtkBoundedPlanePointPlacerWrap>(info.Holder());
	vtkBoundedPlanePointPlacer *native = (vtkBoundedPlanePointPlacer *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetProjectionNormal(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkBoundedPlanePointPlacerWrap::SetProjectionNormalToOblique(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBoundedPlanePointPlacerWrap *wrapper = ObjectWrap::Unwrap<VtkBoundedPlanePointPlacerWrap>(info.Holder());
	vtkBoundedPlanePointPlacer *native = (vtkBoundedPlanePointPlacer *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetProjectionNormalToOblique();
}

void VtkBoundedPlanePointPlacerWrap::SetProjectionNormalToXAxis(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBoundedPlanePointPlacerWrap *wrapper = ObjectWrap::Unwrap<VtkBoundedPlanePointPlacerWrap>(info.Holder());
	vtkBoundedPlanePointPlacer *native = (vtkBoundedPlanePointPlacer *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetProjectionNormalToXAxis();
}

void VtkBoundedPlanePointPlacerWrap::SetProjectionNormalToYAxis(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBoundedPlanePointPlacerWrap *wrapper = ObjectWrap::Unwrap<VtkBoundedPlanePointPlacerWrap>(info.Holder());
	vtkBoundedPlanePointPlacer *native = (vtkBoundedPlanePointPlacer *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetProjectionNormalToYAxis();
}

void VtkBoundedPlanePointPlacerWrap::SetProjectionNormalToZAxis(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBoundedPlanePointPlacerWrap *wrapper = ObjectWrap::Unwrap<VtkBoundedPlanePointPlacerWrap>(info.Holder());
	vtkBoundedPlanePointPlacer *native = (vtkBoundedPlanePointPlacer *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetProjectionNormalToZAxis();
}

void VtkBoundedPlanePointPlacerWrap::SetProjectionPosition(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkBoundedPlanePointPlacerWrap *wrapper = ObjectWrap::Unwrap<VtkBoundedPlanePointPlacerWrap>(info.Holder());
	vtkBoundedPlanePointPlacer *native = (vtkBoundedPlanePointPlacer *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetProjectionPosition(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}
