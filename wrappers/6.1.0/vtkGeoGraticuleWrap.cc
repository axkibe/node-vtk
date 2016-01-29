/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkPolyDataAlgorithmWrap.h"
#include "vtkGeoGraticuleWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkGeoGraticuleWrap::ptpl;

VtkGeoGraticuleWrap::VtkGeoGraticuleWrap()
{ }

VtkGeoGraticuleWrap::VtkGeoGraticuleWrap(vtkSmartPointer<vtkGeoGraticule> _native)
{ native = _native; }

VtkGeoGraticuleWrap::~VtkGeoGraticuleWrap()
{ }

void VtkGeoGraticuleWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkGeoGraticule").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("GeoGraticule").ToLocalChecked(), ConstructorGetter);
}

void VtkGeoGraticuleWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkGeoGraticuleWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkPolyDataAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkPolyDataAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkGeoGraticuleWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetGeometryType", GetGeometryType);
	Nan::SetPrototypeMethod(tpl, "getGeometryType", GetGeometryType);

	Nan::SetPrototypeMethod(tpl, "GetLatitudeDelta", GetLatitudeDelta);
	Nan::SetPrototypeMethod(tpl, "getLatitudeDelta", GetLatitudeDelta);

	Nan::SetPrototypeMethod(tpl, "GetLatitudeLevel", GetLatitudeLevel);
	Nan::SetPrototypeMethod(tpl, "getLatitudeLevel", GetLatitudeLevel);

	Nan::SetPrototypeMethod(tpl, "GetLatitudeLevelMaxValue", GetLatitudeLevelMaxValue);
	Nan::SetPrototypeMethod(tpl, "getLatitudeLevelMaxValue", GetLatitudeLevelMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetLatitudeLevelMinValue", GetLatitudeLevelMinValue);
	Nan::SetPrototypeMethod(tpl, "getLatitudeLevelMinValue", GetLatitudeLevelMinValue);

	Nan::SetPrototypeMethod(tpl, "GetLongitudeDelta", GetLongitudeDelta);
	Nan::SetPrototypeMethod(tpl, "getLongitudeDelta", GetLongitudeDelta);

	Nan::SetPrototypeMethod(tpl, "GetLongitudeLevel", GetLongitudeLevel);
	Nan::SetPrototypeMethod(tpl, "getLongitudeLevel", GetLongitudeLevel);

	Nan::SetPrototypeMethod(tpl, "GetLongitudeLevelMaxValue", GetLongitudeLevelMaxValue);
	Nan::SetPrototypeMethod(tpl, "getLongitudeLevelMaxValue", GetLongitudeLevelMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetLongitudeLevelMinValue", GetLongitudeLevelMinValue);
	Nan::SetPrototypeMethod(tpl, "getLongitudeLevelMinValue", GetLongitudeLevelMinValue);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetGeometryType", SetGeometryType);
	Nan::SetPrototypeMethod(tpl, "setGeometryType", SetGeometryType);

	Nan::SetPrototypeMethod(tpl, "SetLatitudeBounds", SetLatitudeBounds);
	Nan::SetPrototypeMethod(tpl, "setLatitudeBounds", SetLatitudeBounds);

	Nan::SetPrototypeMethod(tpl, "SetLatitudeLevel", SetLatitudeLevel);
	Nan::SetPrototypeMethod(tpl, "setLatitudeLevel", SetLatitudeLevel);

	Nan::SetPrototypeMethod(tpl, "SetLongitudeBounds", SetLongitudeBounds);
	Nan::SetPrototypeMethod(tpl, "setLongitudeBounds", SetLongitudeBounds);

	Nan::SetPrototypeMethod(tpl, "SetLongitudeLevel", SetLongitudeLevel);
	Nan::SetPrototypeMethod(tpl, "setLongitudeLevel", SetLongitudeLevel);

	ptpl.Reset( tpl );
}

void VtkGeoGraticuleWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkGeoGraticule> native = vtkSmartPointer<vtkGeoGraticule>::New();
		VtkGeoGraticuleWrap* obj = new VtkGeoGraticuleWrap(native);
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

void VtkGeoGraticuleWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoGraticuleWrap *wrapper = ObjectWrap::Unwrap<VtkGeoGraticuleWrap>(info.Holder());
	vtkGeoGraticule *native = (vtkGeoGraticule *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkGeoGraticuleWrap::GetGeometryType(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoGraticuleWrap *wrapper = ObjectWrap::Unwrap<VtkGeoGraticuleWrap>(info.Holder());
	vtkGeoGraticule *native = (vtkGeoGraticule *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetGeometryType();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkGeoGraticuleWrap::GetLatitudeDelta(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoGraticuleWrap *wrapper = ObjectWrap::Unwrap<VtkGeoGraticuleWrap>(info.Holder());
	vtkGeoGraticule *native = (vtkGeoGraticule *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		double r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetLatitudeDelta(
			info[0]->Int32Value()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGeoGraticuleWrap::GetLatitudeLevel(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoGraticuleWrap *wrapper = ObjectWrap::Unwrap<VtkGeoGraticuleWrap>(info.Holder());
	vtkGeoGraticule *native = (vtkGeoGraticule *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLatitudeLevel();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkGeoGraticuleWrap::GetLatitudeLevelMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoGraticuleWrap *wrapper = ObjectWrap::Unwrap<VtkGeoGraticuleWrap>(info.Holder());
	vtkGeoGraticule *native = (vtkGeoGraticule *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLatitudeLevelMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkGeoGraticuleWrap::GetLatitudeLevelMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoGraticuleWrap *wrapper = ObjectWrap::Unwrap<VtkGeoGraticuleWrap>(info.Holder());
	vtkGeoGraticule *native = (vtkGeoGraticule *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLatitudeLevelMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkGeoGraticuleWrap::GetLongitudeDelta(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoGraticuleWrap *wrapper = ObjectWrap::Unwrap<VtkGeoGraticuleWrap>(info.Holder());
	vtkGeoGraticule *native = (vtkGeoGraticule *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		double r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetLongitudeDelta(
			info[0]->Int32Value()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGeoGraticuleWrap::GetLongitudeLevel(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoGraticuleWrap *wrapper = ObjectWrap::Unwrap<VtkGeoGraticuleWrap>(info.Holder());
	vtkGeoGraticule *native = (vtkGeoGraticule *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLongitudeLevel();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkGeoGraticuleWrap::GetLongitudeLevelMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoGraticuleWrap *wrapper = ObjectWrap::Unwrap<VtkGeoGraticuleWrap>(info.Holder());
	vtkGeoGraticule *native = (vtkGeoGraticule *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLongitudeLevelMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkGeoGraticuleWrap::GetLongitudeLevelMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoGraticuleWrap *wrapper = ObjectWrap::Unwrap<VtkGeoGraticuleWrap>(info.Holder());
	vtkGeoGraticule *native = (vtkGeoGraticule *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLongitudeLevelMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkGeoGraticuleWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoGraticuleWrap *wrapper = ObjectWrap::Unwrap<VtkGeoGraticuleWrap>(info.Holder());
	vtkGeoGraticule *native = (vtkGeoGraticule *)wrapper->native.GetPointer();
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

void VtkGeoGraticuleWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoGraticuleWrap *wrapper = ObjectWrap::Unwrap<VtkGeoGraticuleWrap>(info.Holder());
	vtkGeoGraticule *native = (vtkGeoGraticule *)wrapper->native.GetPointer();
	vtkGeoGraticule * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkGeoGraticuleWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkGeoGraticuleWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkGeoGraticuleWrap *w = new VtkGeoGraticuleWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkGeoGraticuleWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoGraticuleWrap *wrapper = ObjectWrap::Unwrap<VtkGeoGraticuleWrap>(info.Holder());
	vtkGeoGraticule *native = (vtkGeoGraticule *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkGeoGraticule * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkGeoGraticuleWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkGeoGraticuleWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkGeoGraticuleWrap *w = new VtkGeoGraticuleWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGeoGraticuleWrap::SetGeometryType(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoGraticuleWrap *wrapper = ObjectWrap::Unwrap<VtkGeoGraticuleWrap>(info.Holder());
	vtkGeoGraticule *native = (vtkGeoGraticule *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetGeometryType(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGeoGraticuleWrap::SetLatitudeBounds(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoGraticuleWrap *wrapper = ObjectWrap::Unwrap<VtkGeoGraticuleWrap>(info.Holder());
	vtkGeoGraticule *native = (vtkGeoGraticule *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->SetLatitudeBounds(
				info[0]->NumberValue(),
				info[1]->NumberValue()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGeoGraticuleWrap::SetLatitudeLevel(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoGraticuleWrap *wrapper = ObjectWrap::Unwrap<VtkGeoGraticuleWrap>(info.Holder());
	vtkGeoGraticule *native = (vtkGeoGraticule *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetLatitudeLevel(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGeoGraticuleWrap::SetLongitudeBounds(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoGraticuleWrap *wrapper = ObjectWrap::Unwrap<VtkGeoGraticuleWrap>(info.Holder());
	vtkGeoGraticule *native = (vtkGeoGraticule *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->SetLongitudeBounds(
				info[0]->NumberValue(),
				info[1]->NumberValue()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGeoGraticuleWrap::SetLongitudeLevel(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGeoGraticuleWrap *wrapper = ObjectWrap::Unwrap<VtkGeoGraticuleWrap>(info.Holder());
	vtkGeoGraticule *native = (vtkGeoGraticule *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetLongitudeLevel(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

