/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkPolyDataAlgorithmWrap.h"
#include "vtkMassPropertiesWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkMassPropertiesWrap::ptpl;

VtkMassPropertiesWrap::VtkMassPropertiesWrap()
{ }

VtkMassPropertiesWrap::VtkMassPropertiesWrap(vtkSmartPointer<vtkMassProperties> _native)
{ native = _native; }

VtkMassPropertiesWrap::~VtkMassPropertiesWrap()
{ }

void VtkMassPropertiesWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkMassProperties").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("MassProperties").ToLocalChecked(), ConstructorGetter);
}

void VtkMassPropertiesWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkMassPropertiesWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkPolyDataAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkPolyDataAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkMassPropertiesWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetKx", GetKx);
	Nan::SetPrototypeMethod(tpl, "getKx", GetKx);

	Nan::SetPrototypeMethod(tpl, "GetKy", GetKy);
	Nan::SetPrototypeMethod(tpl, "getKy", GetKy);

	Nan::SetPrototypeMethod(tpl, "GetKz", GetKz);
	Nan::SetPrototypeMethod(tpl, "getKz", GetKz);

	Nan::SetPrototypeMethod(tpl, "GetMaxCellArea", GetMaxCellArea);
	Nan::SetPrototypeMethod(tpl, "getMaxCellArea", GetMaxCellArea);

	Nan::SetPrototypeMethod(tpl, "GetMinCellArea", GetMinCellArea);
	Nan::SetPrototypeMethod(tpl, "getMinCellArea", GetMinCellArea);

	Nan::SetPrototypeMethod(tpl, "GetNormalizedShapeIndex", GetNormalizedShapeIndex);
	Nan::SetPrototypeMethod(tpl, "getNormalizedShapeIndex", GetNormalizedShapeIndex);

	Nan::SetPrototypeMethod(tpl, "GetSurfaceArea", GetSurfaceArea);
	Nan::SetPrototypeMethod(tpl, "getSurfaceArea", GetSurfaceArea);

	Nan::SetPrototypeMethod(tpl, "GetVolume", GetVolume);
	Nan::SetPrototypeMethod(tpl, "getVolume", GetVolume);

	Nan::SetPrototypeMethod(tpl, "GetVolumeProjected", GetVolumeProjected);
	Nan::SetPrototypeMethod(tpl, "getVolumeProjected", GetVolumeProjected);

	Nan::SetPrototypeMethod(tpl, "GetVolumeX", GetVolumeX);
	Nan::SetPrototypeMethod(tpl, "getVolumeX", GetVolumeX);

	Nan::SetPrototypeMethod(tpl, "GetVolumeY", GetVolumeY);
	Nan::SetPrototypeMethod(tpl, "getVolumeY", GetVolumeY);

	Nan::SetPrototypeMethod(tpl, "GetVolumeZ", GetVolumeZ);
	Nan::SetPrototypeMethod(tpl, "getVolumeZ", GetVolumeZ);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	ptpl.Reset( tpl );
}

void VtkMassPropertiesWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkMassProperties> native = vtkSmartPointer<vtkMassProperties>::New();
		VtkMassPropertiesWrap* obj = new VtkMassPropertiesWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkMassPropertiesWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMassPropertiesWrap *wrapper = ObjectWrap::Unwrap<VtkMassPropertiesWrap>(info.Holder());
	vtkMassProperties *native = (vtkMassProperties *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkMassPropertiesWrap::GetKx(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMassPropertiesWrap *wrapper = ObjectWrap::Unwrap<VtkMassPropertiesWrap>(info.Holder());
	vtkMassProperties *native = (vtkMassProperties *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetKx();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkMassPropertiesWrap::GetKy(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMassPropertiesWrap *wrapper = ObjectWrap::Unwrap<VtkMassPropertiesWrap>(info.Holder());
	vtkMassProperties *native = (vtkMassProperties *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetKy();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkMassPropertiesWrap::GetKz(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMassPropertiesWrap *wrapper = ObjectWrap::Unwrap<VtkMassPropertiesWrap>(info.Holder());
	vtkMassProperties *native = (vtkMassProperties *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetKz();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkMassPropertiesWrap::GetMaxCellArea(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMassPropertiesWrap *wrapper = ObjectWrap::Unwrap<VtkMassPropertiesWrap>(info.Holder());
	vtkMassProperties *native = (vtkMassProperties *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMaxCellArea();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkMassPropertiesWrap::GetMinCellArea(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMassPropertiesWrap *wrapper = ObjectWrap::Unwrap<VtkMassPropertiesWrap>(info.Holder());
	vtkMassProperties *native = (vtkMassProperties *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMinCellArea();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkMassPropertiesWrap::GetNormalizedShapeIndex(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMassPropertiesWrap *wrapper = ObjectWrap::Unwrap<VtkMassPropertiesWrap>(info.Holder());
	vtkMassProperties *native = (vtkMassProperties *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNormalizedShapeIndex();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkMassPropertiesWrap::GetSurfaceArea(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMassPropertiesWrap *wrapper = ObjectWrap::Unwrap<VtkMassPropertiesWrap>(info.Holder());
	vtkMassProperties *native = (vtkMassProperties *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSurfaceArea();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkMassPropertiesWrap::GetVolume(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMassPropertiesWrap *wrapper = ObjectWrap::Unwrap<VtkMassPropertiesWrap>(info.Holder());
	vtkMassProperties *native = (vtkMassProperties *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetVolume();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkMassPropertiesWrap::GetVolumeProjected(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMassPropertiesWrap *wrapper = ObjectWrap::Unwrap<VtkMassPropertiesWrap>(info.Holder());
	vtkMassProperties *native = (vtkMassProperties *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetVolumeProjected();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkMassPropertiesWrap::GetVolumeX(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMassPropertiesWrap *wrapper = ObjectWrap::Unwrap<VtkMassPropertiesWrap>(info.Holder());
	vtkMassProperties *native = (vtkMassProperties *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetVolumeX();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkMassPropertiesWrap::GetVolumeY(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMassPropertiesWrap *wrapper = ObjectWrap::Unwrap<VtkMassPropertiesWrap>(info.Holder());
	vtkMassProperties *native = (vtkMassProperties *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetVolumeY();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkMassPropertiesWrap::GetVolumeZ(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMassPropertiesWrap *wrapper = ObjectWrap::Unwrap<VtkMassPropertiesWrap>(info.Holder());
	vtkMassProperties *native = (vtkMassProperties *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetVolumeZ();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkMassPropertiesWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMassPropertiesWrap *wrapper = ObjectWrap::Unwrap<VtkMassPropertiesWrap>(info.Holder());
	vtkMassProperties *native = (vtkMassProperties *)wrapper->native.GetPointer();
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

void VtkMassPropertiesWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMassPropertiesWrap *wrapper = ObjectWrap::Unwrap<VtkMassPropertiesWrap>(info.Holder());
	vtkMassProperties *native = (vtkMassProperties *)wrapper->native.GetPointer();
	vtkMassProperties * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkMassPropertiesWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkMassPropertiesWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkMassPropertiesWrap *w = new VtkMassPropertiesWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkMassPropertiesWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMassPropertiesWrap *wrapper = ObjectWrap::Unwrap<VtkMassPropertiesWrap>(info.Holder());
	vtkMassProperties *native = (vtkMassProperties *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkMassProperties * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkMassPropertiesWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkMassPropertiesWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkMassPropertiesWrap *w = new VtkMassPropertiesWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

