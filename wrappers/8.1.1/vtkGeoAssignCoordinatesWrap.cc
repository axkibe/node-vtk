/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkPassInputTypeAlgorithmWrap.h"
#include "vtkGeoAssignCoordinatesWrap.h"
#include "vtkObjectBaseWrap.h"
#include "vtkAbstractTransformWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkGeoAssignCoordinatesWrap::ptpl;

VtkGeoAssignCoordinatesWrap::VtkGeoAssignCoordinatesWrap()
{ }

VtkGeoAssignCoordinatesWrap::VtkGeoAssignCoordinatesWrap(vtkSmartPointer<vtkGeoAssignCoordinates> _native)
{ native = _native; }

VtkGeoAssignCoordinatesWrap::~VtkGeoAssignCoordinatesWrap()
{ }

void VtkGeoAssignCoordinatesWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkGeoAssignCoordinates").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("GeoAssignCoordinates").ToLocalChecked(), ConstructorGetter);
}

void VtkGeoAssignCoordinatesWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkGeoAssignCoordinatesWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkPassInputTypeAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkPassInputTypeAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkGeoAssignCoordinatesWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "CoordinatesInArraysOff", CoordinatesInArraysOff);
	Nan::SetPrototypeMethod(tpl, "coordinatesInArraysOff", CoordinatesInArraysOff);

	Nan::SetPrototypeMethod(tpl, "CoordinatesInArraysOn", CoordinatesInArraysOn);
	Nan::SetPrototypeMethod(tpl, "coordinatesInArraysOn", CoordinatesInArraysOn);

	Nan::SetPrototypeMethod(tpl, "GetCoordinatesInArrays", GetCoordinatesInArrays);
	Nan::SetPrototypeMethod(tpl, "getCoordinatesInArrays", GetCoordinatesInArrays);

	Nan::SetPrototypeMethod(tpl, "GetGlobeRadius", GetGlobeRadius);
	Nan::SetPrototypeMethod(tpl, "getGlobeRadius", GetGlobeRadius);

	Nan::SetPrototypeMethod(tpl, "GetLatitudeArrayName", GetLatitudeArrayName);
	Nan::SetPrototypeMethod(tpl, "getLatitudeArrayName", GetLatitudeArrayName);

	Nan::SetPrototypeMethod(tpl, "GetLongitudeArrayName", GetLongitudeArrayName);
	Nan::SetPrototypeMethod(tpl, "getLongitudeArrayName", GetLongitudeArrayName);

	Nan::SetPrototypeMethod(tpl, "GetTransform", GetTransform);
	Nan::SetPrototypeMethod(tpl, "getTransform", GetTransform);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetCoordinatesInArrays", SetCoordinatesInArrays);
	Nan::SetPrototypeMethod(tpl, "setCoordinatesInArrays", SetCoordinatesInArrays);

	Nan::SetPrototypeMethod(tpl, "SetGlobeRadius", SetGlobeRadius);
	Nan::SetPrototypeMethod(tpl, "setGlobeRadius", SetGlobeRadius);

	Nan::SetPrototypeMethod(tpl, "SetLatitudeArrayName", SetLatitudeArrayName);
	Nan::SetPrototypeMethod(tpl, "setLatitudeArrayName", SetLatitudeArrayName);

	Nan::SetPrototypeMethod(tpl, "SetLongitudeArrayName", SetLongitudeArrayName);
	Nan::SetPrototypeMethod(tpl, "setLongitudeArrayName", SetLongitudeArrayName);

	Nan::SetPrototypeMethod(tpl, "SetTransform", SetTransform);
	Nan::SetPrototypeMethod(tpl, "setTransform", SetTransform);

#ifdef VTK_NODE_PLUS_VTKGEOASSIGNCOORDINATESWRAP_INITPTPL
	VTK_NODE_PLUS_VTKGEOASSIGNCOORDINATESWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkGeoAssignCoordinatesWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkGeoAssignCoordinates> native = vtkSmartPointer<vtkGeoAssignCoordinates>::New();
		VtkGeoAssignCoordinatesWrap* obj = new VtkGeoAssignCoordinatesWrap(native);
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

void VtkGeoAssignCoordinatesWrap::CoordinatesInArraysOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoAssignCoordinatesWrap *wrapper = ObjectWrap::Unwrap<VtkGeoAssignCoordinatesWrap>(info.Holder());
	vtkGeoAssignCoordinates *native = (vtkGeoAssignCoordinates *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->CoordinatesInArraysOff();
}

void VtkGeoAssignCoordinatesWrap::CoordinatesInArraysOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoAssignCoordinatesWrap *wrapper = ObjectWrap::Unwrap<VtkGeoAssignCoordinatesWrap>(info.Holder());
	vtkGeoAssignCoordinates *native = (vtkGeoAssignCoordinates *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->CoordinatesInArraysOn();
}

void VtkGeoAssignCoordinatesWrap::GetCoordinatesInArrays(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoAssignCoordinatesWrap *wrapper = ObjectWrap::Unwrap<VtkGeoAssignCoordinatesWrap>(info.Holder());
	vtkGeoAssignCoordinates *native = (vtkGeoAssignCoordinates *)wrapper->native.GetPointer();
	bool r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCoordinatesInArrays();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkGeoAssignCoordinatesWrap::GetGlobeRadius(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoAssignCoordinatesWrap *wrapper = ObjectWrap::Unwrap<VtkGeoAssignCoordinatesWrap>(info.Holder());
	vtkGeoAssignCoordinates *native = (vtkGeoAssignCoordinates *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetGlobeRadius();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkGeoAssignCoordinatesWrap::GetLatitudeArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoAssignCoordinatesWrap *wrapper = ObjectWrap::Unwrap<VtkGeoAssignCoordinatesWrap>(info.Holder());
	vtkGeoAssignCoordinates *native = (vtkGeoAssignCoordinates *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLatitudeArrayName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkGeoAssignCoordinatesWrap::GetLongitudeArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoAssignCoordinatesWrap *wrapper = ObjectWrap::Unwrap<VtkGeoAssignCoordinatesWrap>(info.Holder());
	vtkGeoAssignCoordinates *native = (vtkGeoAssignCoordinates *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLongitudeArrayName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkGeoAssignCoordinatesWrap::GetTransform(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoAssignCoordinatesWrap *wrapper = ObjectWrap::Unwrap<VtkGeoAssignCoordinatesWrap>(info.Holder());
	vtkGeoAssignCoordinates *native = (vtkGeoAssignCoordinates *)wrapper->native.GetPointer();
	vtkAbstractTransform * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTransform();
	VtkAbstractTransformWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkAbstractTransformWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkAbstractTransformWrap *w = new VtkAbstractTransformWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkGeoAssignCoordinatesWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoAssignCoordinatesWrap *wrapper = ObjectWrap::Unwrap<VtkGeoAssignCoordinatesWrap>(info.Holder());
	vtkGeoAssignCoordinates *native = (vtkGeoAssignCoordinates *)wrapper->native.GetPointer();
	vtkGeoAssignCoordinates * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkGeoAssignCoordinatesWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkGeoAssignCoordinatesWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkGeoAssignCoordinatesWrap *w = new VtkGeoAssignCoordinatesWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkGeoAssignCoordinatesWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoAssignCoordinatesWrap *wrapper = ObjectWrap::Unwrap<VtkGeoAssignCoordinatesWrap>(info.Holder());
	vtkGeoAssignCoordinates *native = (vtkGeoAssignCoordinates *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectBaseWrap *a0 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[0]->ToObject());
		vtkGeoAssignCoordinates * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObjectBase *) a0->native.GetPointer()
		);
		VtkGeoAssignCoordinatesWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkGeoAssignCoordinatesWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkGeoAssignCoordinatesWrap *w = new VtkGeoAssignCoordinatesWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGeoAssignCoordinatesWrap::SetCoordinatesInArrays(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoAssignCoordinatesWrap *wrapper = ObjectWrap::Unwrap<VtkGeoAssignCoordinatesWrap>(info.Holder());
	vtkGeoAssignCoordinates *native = (vtkGeoAssignCoordinates *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsBoolean())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetCoordinatesInArrays(
			info[0]->BooleanValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGeoAssignCoordinatesWrap::SetGlobeRadius(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoAssignCoordinatesWrap *wrapper = ObjectWrap::Unwrap<VtkGeoAssignCoordinatesWrap>(info.Holder());
	vtkGeoAssignCoordinates *native = (vtkGeoAssignCoordinates *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetGlobeRadius(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGeoAssignCoordinatesWrap::SetLatitudeArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoAssignCoordinatesWrap *wrapper = ObjectWrap::Unwrap<VtkGeoAssignCoordinatesWrap>(info.Holder());
	vtkGeoAssignCoordinates *native = (vtkGeoAssignCoordinates *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetLatitudeArrayName(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGeoAssignCoordinatesWrap::SetLongitudeArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoAssignCoordinatesWrap *wrapper = ObjectWrap::Unwrap<VtkGeoAssignCoordinatesWrap>(info.Holder());
	vtkGeoAssignCoordinates *native = (vtkGeoAssignCoordinates *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetLongitudeArrayName(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGeoAssignCoordinatesWrap::SetTransform(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoAssignCoordinatesWrap *wrapper = ObjectWrap::Unwrap<VtkGeoAssignCoordinatesWrap>(info.Holder());
	vtkGeoAssignCoordinates *native = (vtkGeoAssignCoordinates *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkAbstractTransformWrap::ptpl))->HasInstance(info[0]))
	{
		VtkAbstractTransformWrap *a0 = ObjectWrap::Unwrap<VtkAbstractTransformWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetTransform(
			(vtkAbstractTransform *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

