/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkDataObjectAlgorithmWrap.h"
#include "vtkReflectionFilterWrap.h"
#include "vtkObjectWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkReflectionFilterWrap::ptpl;

VtkReflectionFilterWrap::VtkReflectionFilterWrap()
{ }

VtkReflectionFilterWrap::VtkReflectionFilterWrap(vtkSmartPointer<vtkReflectionFilter> _native)
{ native = _native; }

VtkReflectionFilterWrap::~VtkReflectionFilterWrap()
{ }

void VtkReflectionFilterWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkReflectionFilter").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("ReflectionFilter").ToLocalChecked(), ConstructorGetter);
}

void VtkReflectionFilterWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkReflectionFilterWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkDataObjectAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkDataObjectAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkReflectionFilterWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "CopyInputOff", CopyInputOff);
	Nan::SetPrototypeMethod(tpl, "copyInputOff", CopyInputOff);

	Nan::SetPrototypeMethod(tpl, "CopyInputOn", CopyInputOn);
	Nan::SetPrototypeMethod(tpl, "copyInputOn", CopyInputOn);

	Nan::SetPrototypeMethod(tpl, "GetCenter", GetCenter);
	Nan::SetPrototypeMethod(tpl, "getCenter", GetCenter);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetCopyInput", GetCopyInput);
	Nan::SetPrototypeMethod(tpl, "getCopyInput", GetCopyInput);

	Nan::SetPrototypeMethod(tpl, "GetPlane", GetPlane);
	Nan::SetPrototypeMethod(tpl, "getPlane", GetPlane);

	Nan::SetPrototypeMethod(tpl, "GetPlaneMaxValue", GetPlaneMaxValue);
	Nan::SetPrototypeMethod(tpl, "getPlaneMaxValue", GetPlaneMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetPlaneMinValue", GetPlaneMinValue);
	Nan::SetPrototypeMethod(tpl, "getPlaneMinValue", GetPlaneMinValue);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetCenter", SetCenter);
	Nan::SetPrototypeMethod(tpl, "setCenter", SetCenter);

	Nan::SetPrototypeMethod(tpl, "SetCopyInput", SetCopyInput);
	Nan::SetPrototypeMethod(tpl, "setCopyInput", SetCopyInput);

	Nan::SetPrototypeMethod(tpl, "SetPlane", SetPlane);
	Nan::SetPrototypeMethod(tpl, "setPlane", SetPlane);

	Nan::SetPrototypeMethod(tpl, "SetPlaneToX", SetPlaneToX);
	Nan::SetPrototypeMethod(tpl, "setPlaneToX", SetPlaneToX);

	Nan::SetPrototypeMethod(tpl, "SetPlaneToXMax", SetPlaneToXMax);
	Nan::SetPrototypeMethod(tpl, "setPlaneToXMax", SetPlaneToXMax);

	Nan::SetPrototypeMethod(tpl, "SetPlaneToXMin", SetPlaneToXMin);
	Nan::SetPrototypeMethod(tpl, "setPlaneToXMin", SetPlaneToXMin);

	Nan::SetPrototypeMethod(tpl, "SetPlaneToY", SetPlaneToY);
	Nan::SetPrototypeMethod(tpl, "setPlaneToY", SetPlaneToY);

	Nan::SetPrototypeMethod(tpl, "SetPlaneToYMax", SetPlaneToYMax);
	Nan::SetPrototypeMethod(tpl, "setPlaneToYMax", SetPlaneToYMax);

	Nan::SetPrototypeMethod(tpl, "SetPlaneToYMin", SetPlaneToYMin);
	Nan::SetPrototypeMethod(tpl, "setPlaneToYMin", SetPlaneToYMin);

	Nan::SetPrototypeMethod(tpl, "SetPlaneToZ", SetPlaneToZ);
	Nan::SetPrototypeMethod(tpl, "setPlaneToZ", SetPlaneToZ);

	Nan::SetPrototypeMethod(tpl, "SetPlaneToZMax", SetPlaneToZMax);
	Nan::SetPrototypeMethod(tpl, "setPlaneToZMax", SetPlaneToZMax);

	Nan::SetPrototypeMethod(tpl, "SetPlaneToZMin", SetPlaneToZMin);
	Nan::SetPrototypeMethod(tpl, "setPlaneToZMin", SetPlaneToZMin);

#ifdef VTK_NODE_PLUS_VTKREFLECTIONFILTERWRAP_INITPTPL
	VTK_NODE_PLUS_VTKREFLECTIONFILTERWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkReflectionFilterWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkReflectionFilter> native = vtkSmartPointer<vtkReflectionFilter>::New();
		VtkReflectionFilterWrap* obj = new VtkReflectionFilterWrap(native);
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

void VtkReflectionFilterWrap::CopyInputOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkReflectionFilterWrap *wrapper = ObjectWrap::Unwrap<VtkReflectionFilterWrap>(info.Holder());
	vtkReflectionFilter *native = (vtkReflectionFilter *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->CopyInputOff();
}

void VtkReflectionFilterWrap::CopyInputOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkReflectionFilterWrap *wrapper = ObjectWrap::Unwrap<VtkReflectionFilterWrap>(info.Holder());
	vtkReflectionFilter *native = (vtkReflectionFilter *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->CopyInputOn();
}

void VtkReflectionFilterWrap::GetCenter(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkReflectionFilterWrap *wrapper = ObjectWrap::Unwrap<VtkReflectionFilterWrap>(info.Holder());
	vtkReflectionFilter *native = (vtkReflectionFilter *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCenter();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkReflectionFilterWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkReflectionFilterWrap *wrapper = ObjectWrap::Unwrap<VtkReflectionFilterWrap>(info.Holder());
	vtkReflectionFilter *native = (vtkReflectionFilter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkReflectionFilterWrap::GetCopyInput(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkReflectionFilterWrap *wrapper = ObjectWrap::Unwrap<VtkReflectionFilterWrap>(info.Holder());
	vtkReflectionFilter *native = (vtkReflectionFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCopyInput();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkReflectionFilterWrap::GetPlane(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkReflectionFilterWrap *wrapper = ObjectWrap::Unwrap<VtkReflectionFilterWrap>(info.Holder());
	vtkReflectionFilter *native = (vtkReflectionFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPlane();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkReflectionFilterWrap::GetPlaneMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkReflectionFilterWrap *wrapper = ObjectWrap::Unwrap<VtkReflectionFilterWrap>(info.Holder());
	vtkReflectionFilter *native = (vtkReflectionFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPlaneMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkReflectionFilterWrap::GetPlaneMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkReflectionFilterWrap *wrapper = ObjectWrap::Unwrap<VtkReflectionFilterWrap>(info.Holder());
	vtkReflectionFilter *native = (vtkReflectionFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPlaneMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkReflectionFilterWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkReflectionFilterWrap *wrapper = ObjectWrap::Unwrap<VtkReflectionFilterWrap>(info.Holder());
	vtkReflectionFilter *native = (vtkReflectionFilter *)wrapper->native.GetPointer();
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

void VtkReflectionFilterWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkReflectionFilterWrap *wrapper = ObjectWrap::Unwrap<VtkReflectionFilterWrap>(info.Holder());
	vtkReflectionFilter *native = (vtkReflectionFilter *)wrapper->native.GetPointer();
	vtkReflectionFilter * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkReflectionFilterWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkReflectionFilterWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkReflectionFilterWrap *w = new VtkReflectionFilterWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkReflectionFilterWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkReflectionFilterWrap *wrapper = ObjectWrap::Unwrap<VtkReflectionFilterWrap>(info.Holder());
	vtkReflectionFilter *native = (vtkReflectionFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkReflectionFilter * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		VtkReflectionFilterWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkReflectionFilterWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkReflectionFilterWrap *w = new VtkReflectionFilterWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkReflectionFilterWrap::SetCenter(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkReflectionFilterWrap *wrapper = ObjectWrap::Unwrap<VtkReflectionFilterWrap>(info.Holder());
	vtkReflectionFilter *native = (vtkReflectionFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetCenter(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkReflectionFilterWrap::SetCopyInput(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkReflectionFilterWrap *wrapper = ObjectWrap::Unwrap<VtkReflectionFilterWrap>(info.Holder());
	vtkReflectionFilter *native = (vtkReflectionFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetCopyInput(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkReflectionFilterWrap::SetPlane(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkReflectionFilterWrap *wrapper = ObjectWrap::Unwrap<VtkReflectionFilterWrap>(info.Holder());
	vtkReflectionFilter *native = (vtkReflectionFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetPlane(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkReflectionFilterWrap::SetPlaneToX(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkReflectionFilterWrap *wrapper = ObjectWrap::Unwrap<VtkReflectionFilterWrap>(info.Holder());
	vtkReflectionFilter *native = (vtkReflectionFilter *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetPlaneToX();
}

void VtkReflectionFilterWrap::SetPlaneToXMax(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkReflectionFilterWrap *wrapper = ObjectWrap::Unwrap<VtkReflectionFilterWrap>(info.Holder());
	vtkReflectionFilter *native = (vtkReflectionFilter *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetPlaneToXMax();
}

void VtkReflectionFilterWrap::SetPlaneToXMin(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkReflectionFilterWrap *wrapper = ObjectWrap::Unwrap<VtkReflectionFilterWrap>(info.Holder());
	vtkReflectionFilter *native = (vtkReflectionFilter *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetPlaneToXMin();
}

void VtkReflectionFilterWrap::SetPlaneToY(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkReflectionFilterWrap *wrapper = ObjectWrap::Unwrap<VtkReflectionFilterWrap>(info.Holder());
	vtkReflectionFilter *native = (vtkReflectionFilter *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetPlaneToY();
}

void VtkReflectionFilterWrap::SetPlaneToYMax(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkReflectionFilterWrap *wrapper = ObjectWrap::Unwrap<VtkReflectionFilterWrap>(info.Holder());
	vtkReflectionFilter *native = (vtkReflectionFilter *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetPlaneToYMax();
}

void VtkReflectionFilterWrap::SetPlaneToYMin(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkReflectionFilterWrap *wrapper = ObjectWrap::Unwrap<VtkReflectionFilterWrap>(info.Holder());
	vtkReflectionFilter *native = (vtkReflectionFilter *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetPlaneToYMin();
}

void VtkReflectionFilterWrap::SetPlaneToZ(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkReflectionFilterWrap *wrapper = ObjectWrap::Unwrap<VtkReflectionFilterWrap>(info.Holder());
	vtkReflectionFilter *native = (vtkReflectionFilter *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetPlaneToZ();
}

void VtkReflectionFilterWrap::SetPlaneToZMax(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkReflectionFilterWrap *wrapper = ObjectWrap::Unwrap<VtkReflectionFilterWrap>(info.Holder());
	vtkReflectionFilter *native = (vtkReflectionFilter *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetPlaneToZMax();
}

void VtkReflectionFilterWrap::SetPlaneToZMin(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkReflectionFilterWrap *wrapper = ObjectWrap::Unwrap<VtkReflectionFilterWrap>(info.Holder());
	vtkReflectionFilter *native = (vtkReflectionFilter *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetPlaneToZMin();
}

