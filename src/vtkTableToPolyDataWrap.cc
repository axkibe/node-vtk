/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkPolyDataAlgorithmWrap.h"
#include "vtkTableToPolyDataWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkTableToPolyDataWrap::ptpl;

VtkTableToPolyDataWrap::VtkTableToPolyDataWrap()
{ }

VtkTableToPolyDataWrap::VtkTableToPolyDataWrap(vtkSmartPointer<vtkTableToPolyData> _native)
{ native = _native; }

VtkTableToPolyDataWrap::~VtkTableToPolyDataWrap()
{ }

void VtkTableToPolyDataWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkTableToPolyData").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("TableToPolyData").ToLocalChecked(), ConstructorGetter);
}

void VtkTableToPolyDataWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkTableToPolyDataWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkPolyDataAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkPolyDataAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkTableToPolyDataWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "Create2DPointsOff", Create2DPointsOff);
	Nan::SetPrototypeMethod(tpl, "create2DPointsOff", Create2DPointsOff);

	Nan::SetPrototypeMethod(tpl, "Create2DPointsOn", Create2DPointsOn);
	Nan::SetPrototypeMethod(tpl, "create2DPointsOn", Create2DPointsOn);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetXColumn", GetXColumn);
	Nan::SetPrototypeMethod(tpl, "getXColumn", GetXColumn);

	Nan::SetPrototypeMethod(tpl, "GetXColumnIndex", GetXColumnIndex);
	Nan::SetPrototypeMethod(tpl, "getXColumnIndex", GetXColumnIndex);

	Nan::SetPrototypeMethod(tpl, "GetXColumnIndexMaxValue", GetXColumnIndexMaxValue);
	Nan::SetPrototypeMethod(tpl, "getXColumnIndexMaxValue", GetXColumnIndexMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetXColumnIndexMinValue", GetXColumnIndexMinValue);
	Nan::SetPrototypeMethod(tpl, "getXColumnIndexMinValue", GetXColumnIndexMinValue);

	Nan::SetPrototypeMethod(tpl, "GetXComponent", GetXComponent);
	Nan::SetPrototypeMethod(tpl, "getXComponent", GetXComponent);

	Nan::SetPrototypeMethod(tpl, "GetXComponentMaxValue", GetXComponentMaxValue);
	Nan::SetPrototypeMethod(tpl, "getXComponentMaxValue", GetXComponentMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetXComponentMinValue", GetXComponentMinValue);
	Nan::SetPrototypeMethod(tpl, "getXComponentMinValue", GetXComponentMinValue);

	Nan::SetPrototypeMethod(tpl, "GetYColumn", GetYColumn);
	Nan::SetPrototypeMethod(tpl, "getYColumn", GetYColumn);

	Nan::SetPrototypeMethod(tpl, "GetYColumnIndex", GetYColumnIndex);
	Nan::SetPrototypeMethod(tpl, "getYColumnIndex", GetYColumnIndex);

	Nan::SetPrototypeMethod(tpl, "GetYColumnIndexMaxValue", GetYColumnIndexMaxValue);
	Nan::SetPrototypeMethod(tpl, "getYColumnIndexMaxValue", GetYColumnIndexMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetYColumnIndexMinValue", GetYColumnIndexMinValue);
	Nan::SetPrototypeMethod(tpl, "getYColumnIndexMinValue", GetYColumnIndexMinValue);

	Nan::SetPrototypeMethod(tpl, "GetYComponent", GetYComponent);
	Nan::SetPrototypeMethod(tpl, "getYComponent", GetYComponent);

	Nan::SetPrototypeMethod(tpl, "GetYComponentMaxValue", GetYComponentMaxValue);
	Nan::SetPrototypeMethod(tpl, "getYComponentMaxValue", GetYComponentMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetYComponentMinValue", GetYComponentMinValue);
	Nan::SetPrototypeMethod(tpl, "getYComponentMinValue", GetYComponentMinValue);

	Nan::SetPrototypeMethod(tpl, "GetZColumn", GetZColumn);
	Nan::SetPrototypeMethod(tpl, "getZColumn", GetZColumn);

	Nan::SetPrototypeMethod(tpl, "GetZColumnIndex", GetZColumnIndex);
	Nan::SetPrototypeMethod(tpl, "getZColumnIndex", GetZColumnIndex);

	Nan::SetPrototypeMethod(tpl, "GetZColumnIndexMaxValue", GetZColumnIndexMaxValue);
	Nan::SetPrototypeMethod(tpl, "getZColumnIndexMaxValue", GetZColumnIndexMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetZColumnIndexMinValue", GetZColumnIndexMinValue);
	Nan::SetPrototypeMethod(tpl, "getZColumnIndexMinValue", GetZColumnIndexMinValue);

	Nan::SetPrototypeMethod(tpl, "GetZComponent", GetZComponent);
	Nan::SetPrototypeMethod(tpl, "getZComponent", GetZComponent);

	Nan::SetPrototypeMethod(tpl, "GetZComponentMaxValue", GetZComponentMaxValue);
	Nan::SetPrototypeMethod(tpl, "getZComponentMaxValue", GetZComponentMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetZComponentMinValue", GetZComponentMinValue);
	Nan::SetPrototypeMethod(tpl, "getZComponentMinValue", GetZComponentMinValue);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "PreserveCoordinateColumnsAsDataArraysOff", PreserveCoordinateColumnsAsDataArraysOff);
	Nan::SetPrototypeMethod(tpl, "preserveCoordinateColumnsAsDataArraysOff", PreserveCoordinateColumnsAsDataArraysOff);

	Nan::SetPrototypeMethod(tpl, "PreserveCoordinateColumnsAsDataArraysOn", PreserveCoordinateColumnsAsDataArraysOn);
	Nan::SetPrototypeMethod(tpl, "preserveCoordinateColumnsAsDataArraysOn", PreserveCoordinateColumnsAsDataArraysOn);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetXColumn", SetXColumn);
	Nan::SetPrototypeMethod(tpl, "setXColumn", SetXColumn);

	Nan::SetPrototypeMethod(tpl, "SetXColumnIndex", SetXColumnIndex);
	Nan::SetPrototypeMethod(tpl, "setXColumnIndex", SetXColumnIndex);

	Nan::SetPrototypeMethod(tpl, "SetXComponent", SetXComponent);
	Nan::SetPrototypeMethod(tpl, "setXComponent", SetXComponent);

	Nan::SetPrototypeMethod(tpl, "SetYColumn", SetYColumn);
	Nan::SetPrototypeMethod(tpl, "setYColumn", SetYColumn);

	Nan::SetPrototypeMethod(tpl, "SetYColumnIndex", SetYColumnIndex);
	Nan::SetPrototypeMethod(tpl, "setYColumnIndex", SetYColumnIndex);

	Nan::SetPrototypeMethod(tpl, "SetYComponent", SetYComponent);
	Nan::SetPrototypeMethod(tpl, "setYComponent", SetYComponent);

	Nan::SetPrototypeMethod(tpl, "SetZColumn", SetZColumn);
	Nan::SetPrototypeMethod(tpl, "setZColumn", SetZColumn);

	Nan::SetPrototypeMethod(tpl, "SetZColumnIndex", SetZColumnIndex);
	Nan::SetPrototypeMethod(tpl, "setZColumnIndex", SetZColumnIndex);

	Nan::SetPrototypeMethod(tpl, "SetZComponent", SetZComponent);
	Nan::SetPrototypeMethod(tpl, "setZComponent", SetZComponent);

	ptpl.Reset( tpl );
}

void VtkTableToPolyDataWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkTableToPolyData> native = vtkSmartPointer<vtkTableToPolyData>::New();
		VtkTableToPolyDataWrap* obj = new VtkTableToPolyDataWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkTableToPolyDataWrap::Create2DPointsOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTableToPolyDataWrap *wrapper = ObjectWrap::Unwrap<VtkTableToPolyDataWrap>(info.Holder());
	vtkTableToPolyData *native = (vtkTableToPolyData *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Create2DPointsOff();
}

void VtkTableToPolyDataWrap::Create2DPointsOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTableToPolyDataWrap *wrapper = ObjectWrap::Unwrap<VtkTableToPolyDataWrap>(info.Holder());
	vtkTableToPolyData *native = (vtkTableToPolyData *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Create2DPointsOn();
}

void VtkTableToPolyDataWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTableToPolyDataWrap *wrapper = ObjectWrap::Unwrap<VtkTableToPolyDataWrap>(info.Holder());
	vtkTableToPolyData *native = (vtkTableToPolyData *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkTableToPolyDataWrap::GetXColumn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTableToPolyDataWrap *wrapper = ObjectWrap::Unwrap<VtkTableToPolyDataWrap>(info.Holder());
	vtkTableToPolyData *native = (vtkTableToPolyData *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetXColumn();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkTableToPolyDataWrap::GetXColumnIndex(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTableToPolyDataWrap *wrapper = ObjectWrap::Unwrap<VtkTableToPolyDataWrap>(info.Holder());
	vtkTableToPolyData *native = (vtkTableToPolyData *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetXColumnIndex();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTableToPolyDataWrap::GetXColumnIndexMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTableToPolyDataWrap *wrapper = ObjectWrap::Unwrap<VtkTableToPolyDataWrap>(info.Holder());
	vtkTableToPolyData *native = (vtkTableToPolyData *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetXColumnIndexMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTableToPolyDataWrap::GetXColumnIndexMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTableToPolyDataWrap *wrapper = ObjectWrap::Unwrap<VtkTableToPolyDataWrap>(info.Holder());
	vtkTableToPolyData *native = (vtkTableToPolyData *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetXColumnIndexMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTableToPolyDataWrap::GetXComponent(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTableToPolyDataWrap *wrapper = ObjectWrap::Unwrap<VtkTableToPolyDataWrap>(info.Holder());
	vtkTableToPolyData *native = (vtkTableToPolyData *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetXComponent();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTableToPolyDataWrap::GetXComponentMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTableToPolyDataWrap *wrapper = ObjectWrap::Unwrap<VtkTableToPolyDataWrap>(info.Holder());
	vtkTableToPolyData *native = (vtkTableToPolyData *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetXComponentMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTableToPolyDataWrap::GetXComponentMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTableToPolyDataWrap *wrapper = ObjectWrap::Unwrap<VtkTableToPolyDataWrap>(info.Holder());
	vtkTableToPolyData *native = (vtkTableToPolyData *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetXComponentMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTableToPolyDataWrap::GetYColumn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTableToPolyDataWrap *wrapper = ObjectWrap::Unwrap<VtkTableToPolyDataWrap>(info.Holder());
	vtkTableToPolyData *native = (vtkTableToPolyData *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetYColumn();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkTableToPolyDataWrap::GetYColumnIndex(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTableToPolyDataWrap *wrapper = ObjectWrap::Unwrap<VtkTableToPolyDataWrap>(info.Holder());
	vtkTableToPolyData *native = (vtkTableToPolyData *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetYColumnIndex();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTableToPolyDataWrap::GetYColumnIndexMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTableToPolyDataWrap *wrapper = ObjectWrap::Unwrap<VtkTableToPolyDataWrap>(info.Holder());
	vtkTableToPolyData *native = (vtkTableToPolyData *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetYColumnIndexMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTableToPolyDataWrap::GetYColumnIndexMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTableToPolyDataWrap *wrapper = ObjectWrap::Unwrap<VtkTableToPolyDataWrap>(info.Holder());
	vtkTableToPolyData *native = (vtkTableToPolyData *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetYColumnIndexMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTableToPolyDataWrap::GetYComponent(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTableToPolyDataWrap *wrapper = ObjectWrap::Unwrap<VtkTableToPolyDataWrap>(info.Holder());
	vtkTableToPolyData *native = (vtkTableToPolyData *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetYComponent();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTableToPolyDataWrap::GetYComponentMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTableToPolyDataWrap *wrapper = ObjectWrap::Unwrap<VtkTableToPolyDataWrap>(info.Holder());
	vtkTableToPolyData *native = (vtkTableToPolyData *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetYComponentMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTableToPolyDataWrap::GetYComponentMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTableToPolyDataWrap *wrapper = ObjectWrap::Unwrap<VtkTableToPolyDataWrap>(info.Holder());
	vtkTableToPolyData *native = (vtkTableToPolyData *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetYComponentMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTableToPolyDataWrap::GetZColumn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTableToPolyDataWrap *wrapper = ObjectWrap::Unwrap<VtkTableToPolyDataWrap>(info.Holder());
	vtkTableToPolyData *native = (vtkTableToPolyData *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetZColumn();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkTableToPolyDataWrap::GetZColumnIndex(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTableToPolyDataWrap *wrapper = ObjectWrap::Unwrap<VtkTableToPolyDataWrap>(info.Holder());
	vtkTableToPolyData *native = (vtkTableToPolyData *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetZColumnIndex();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTableToPolyDataWrap::GetZColumnIndexMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTableToPolyDataWrap *wrapper = ObjectWrap::Unwrap<VtkTableToPolyDataWrap>(info.Holder());
	vtkTableToPolyData *native = (vtkTableToPolyData *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetZColumnIndexMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTableToPolyDataWrap::GetZColumnIndexMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTableToPolyDataWrap *wrapper = ObjectWrap::Unwrap<VtkTableToPolyDataWrap>(info.Holder());
	vtkTableToPolyData *native = (vtkTableToPolyData *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetZColumnIndexMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTableToPolyDataWrap::GetZComponent(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTableToPolyDataWrap *wrapper = ObjectWrap::Unwrap<VtkTableToPolyDataWrap>(info.Holder());
	vtkTableToPolyData *native = (vtkTableToPolyData *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetZComponent();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTableToPolyDataWrap::GetZComponentMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTableToPolyDataWrap *wrapper = ObjectWrap::Unwrap<VtkTableToPolyDataWrap>(info.Holder());
	vtkTableToPolyData *native = (vtkTableToPolyData *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetZComponentMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTableToPolyDataWrap::GetZComponentMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTableToPolyDataWrap *wrapper = ObjectWrap::Unwrap<VtkTableToPolyDataWrap>(info.Holder());
	vtkTableToPolyData *native = (vtkTableToPolyData *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetZComponentMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTableToPolyDataWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTableToPolyDataWrap *wrapper = ObjectWrap::Unwrap<VtkTableToPolyDataWrap>(info.Holder());
	vtkTableToPolyData *native = (vtkTableToPolyData *)wrapper->native.GetPointer();
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

void VtkTableToPolyDataWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTableToPolyDataWrap *wrapper = ObjectWrap::Unwrap<VtkTableToPolyDataWrap>(info.Holder());
	vtkTableToPolyData *native = (vtkTableToPolyData *)wrapper->native.GetPointer();
	vtkTableToPolyData * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkTableToPolyDataWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkTableToPolyDataWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkTableToPolyDataWrap *w = new VtkTableToPolyDataWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkTableToPolyDataWrap::PreserveCoordinateColumnsAsDataArraysOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTableToPolyDataWrap *wrapper = ObjectWrap::Unwrap<VtkTableToPolyDataWrap>(info.Holder());
	vtkTableToPolyData *native = (vtkTableToPolyData *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->PreserveCoordinateColumnsAsDataArraysOff();
}

void VtkTableToPolyDataWrap::PreserveCoordinateColumnsAsDataArraysOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTableToPolyDataWrap *wrapper = ObjectWrap::Unwrap<VtkTableToPolyDataWrap>(info.Holder());
	vtkTableToPolyData *native = (vtkTableToPolyData *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->PreserveCoordinateColumnsAsDataArraysOn();
}

void VtkTableToPolyDataWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTableToPolyDataWrap *wrapper = ObjectWrap::Unwrap<VtkTableToPolyDataWrap>(info.Holder());
	vtkTableToPolyData *native = (vtkTableToPolyData *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkTableToPolyData * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkTableToPolyDataWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkTableToPolyDataWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkTableToPolyDataWrap *w = new VtkTableToPolyDataWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTableToPolyDataWrap::SetXColumn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTableToPolyDataWrap *wrapper = ObjectWrap::Unwrap<VtkTableToPolyDataWrap>(info.Holder());
	vtkTableToPolyData *native = (vtkTableToPolyData *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetXColumn(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTableToPolyDataWrap::SetXColumnIndex(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTableToPolyDataWrap *wrapper = ObjectWrap::Unwrap<VtkTableToPolyDataWrap>(info.Holder());
	vtkTableToPolyData *native = (vtkTableToPolyData *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetXColumnIndex(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTableToPolyDataWrap::SetXComponent(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTableToPolyDataWrap *wrapper = ObjectWrap::Unwrap<VtkTableToPolyDataWrap>(info.Holder());
	vtkTableToPolyData *native = (vtkTableToPolyData *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetXComponent(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTableToPolyDataWrap::SetYColumn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTableToPolyDataWrap *wrapper = ObjectWrap::Unwrap<VtkTableToPolyDataWrap>(info.Holder());
	vtkTableToPolyData *native = (vtkTableToPolyData *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetYColumn(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTableToPolyDataWrap::SetYColumnIndex(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTableToPolyDataWrap *wrapper = ObjectWrap::Unwrap<VtkTableToPolyDataWrap>(info.Holder());
	vtkTableToPolyData *native = (vtkTableToPolyData *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetYColumnIndex(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTableToPolyDataWrap::SetYComponent(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTableToPolyDataWrap *wrapper = ObjectWrap::Unwrap<VtkTableToPolyDataWrap>(info.Holder());
	vtkTableToPolyData *native = (vtkTableToPolyData *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetYComponent(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTableToPolyDataWrap::SetZColumn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTableToPolyDataWrap *wrapper = ObjectWrap::Unwrap<VtkTableToPolyDataWrap>(info.Holder());
	vtkTableToPolyData *native = (vtkTableToPolyData *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetZColumn(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTableToPolyDataWrap::SetZColumnIndex(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTableToPolyDataWrap *wrapper = ObjectWrap::Unwrap<VtkTableToPolyDataWrap>(info.Holder());
	vtkTableToPolyData *native = (vtkTableToPolyData *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetZColumnIndex(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTableToPolyDataWrap::SetZComponent(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTableToPolyDataWrap *wrapper = ObjectWrap::Unwrap<VtkTableToPolyDataWrap>(info.Holder());
	vtkTableToPolyData *native = (vtkTableToPolyData *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetZComponent(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

