/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkUnstructuredGridAlgorithmWrap.h"
#include "vtkRotationFilterWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkRotationFilterWrap::ptpl;

VtkRotationFilterWrap::VtkRotationFilterWrap()
{ }

VtkRotationFilterWrap::VtkRotationFilterWrap(vtkSmartPointer<vtkRotationFilter> _native)
{ native = _native; }

VtkRotationFilterWrap::~VtkRotationFilterWrap()
{ }

void VtkRotationFilterWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkRotationFilter").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("RotationFilter").ToLocalChecked(), ConstructorGetter);
}

void VtkRotationFilterWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkRotationFilterWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkUnstructuredGridAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkUnstructuredGridAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkRotationFilterWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "CopyInputOff", CopyInputOff);
	Nan::SetPrototypeMethod(tpl, "copyInputOff", CopyInputOff);

	Nan::SetPrototypeMethod(tpl, "CopyInputOn", CopyInputOn);
	Nan::SetPrototypeMethod(tpl, "copyInputOn", CopyInputOn);

	Nan::SetPrototypeMethod(tpl, "GetAngle", GetAngle);
	Nan::SetPrototypeMethod(tpl, "getAngle", GetAngle);

	Nan::SetPrototypeMethod(tpl, "GetAxis", GetAxis);
	Nan::SetPrototypeMethod(tpl, "getAxis", GetAxis);

	Nan::SetPrototypeMethod(tpl, "GetAxisMaxValue", GetAxisMaxValue);
	Nan::SetPrototypeMethod(tpl, "getAxisMaxValue", GetAxisMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetAxisMinValue", GetAxisMinValue);
	Nan::SetPrototypeMethod(tpl, "getAxisMinValue", GetAxisMinValue);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetCopyInput", GetCopyInput);
	Nan::SetPrototypeMethod(tpl, "getCopyInput", GetCopyInput);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfCopies", GetNumberOfCopies);
	Nan::SetPrototypeMethod(tpl, "getNumberOfCopies", GetNumberOfCopies);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetAngle", SetAngle);
	Nan::SetPrototypeMethod(tpl, "setAngle", SetAngle);

	Nan::SetPrototypeMethod(tpl, "SetAxis", SetAxis);
	Nan::SetPrototypeMethod(tpl, "setAxis", SetAxis);

	Nan::SetPrototypeMethod(tpl, "SetAxisToX", SetAxisToX);
	Nan::SetPrototypeMethod(tpl, "setAxisToX", SetAxisToX);

	Nan::SetPrototypeMethod(tpl, "SetAxisToY", SetAxisToY);
	Nan::SetPrototypeMethod(tpl, "setAxisToY", SetAxisToY);

	Nan::SetPrototypeMethod(tpl, "SetAxisToZ", SetAxisToZ);
	Nan::SetPrototypeMethod(tpl, "setAxisToZ", SetAxisToZ);

	Nan::SetPrototypeMethod(tpl, "SetCenter", SetCenter);
	Nan::SetPrototypeMethod(tpl, "setCenter", SetCenter);

	Nan::SetPrototypeMethod(tpl, "SetCopyInput", SetCopyInput);
	Nan::SetPrototypeMethod(tpl, "setCopyInput", SetCopyInput);

	Nan::SetPrototypeMethod(tpl, "SetNumberOfCopies", SetNumberOfCopies);
	Nan::SetPrototypeMethod(tpl, "setNumberOfCopies", SetNumberOfCopies);

	ptpl.Reset( tpl );
}

void VtkRotationFilterWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkRotationFilter> native = vtkSmartPointer<vtkRotationFilter>::New();
		VtkRotationFilterWrap* obj = new VtkRotationFilterWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkRotationFilterWrap::CopyInputOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRotationFilterWrap *wrapper = ObjectWrap::Unwrap<VtkRotationFilterWrap>(info.Holder());
	vtkRotationFilter *native = (vtkRotationFilter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->CopyInputOff();
}

void VtkRotationFilterWrap::CopyInputOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRotationFilterWrap *wrapper = ObjectWrap::Unwrap<VtkRotationFilterWrap>(info.Holder());
	vtkRotationFilter *native = (vtkRotationFilter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->CopyInputOn();
}

void VtkRotationFilterWrap::GetAngle(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRotationFilterWrap *wrapper = ObjectWrap::Unwrap<VtkRotationFilterWrap>(info.Holder());
	vtkRotationFilter *native = (vtkRotationFilter *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetAngle();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkRotationFilterWrap::GetAxis(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRotationFilterWrap *wrapper = ObjectWrap::Unwrap<VtkRotationFilterWrap>(info.Holder());
	vtkRotationFilter *native = (vtkRotationFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetAxis();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkRotationFilterWrap::GetAxisMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRotationFilterWrap *wrapper = ObjectWrap::Unwrap<VtkRotationFilterWrap>(info.Holder());
	vtkRotationFilter *native = (vtkRotationFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetAxisMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkRotationFilterWrap::GetAxisMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRotationFilterWrap *wrapper = ObjectWrap::Unwrap<VtkRotationFilterWrap>(info.Holder());
	vtkRotationFilter *native = (vtkRotationFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetAxisMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkRotationFilterWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRotationFilterWrap *wrapper = ObjectWrap::Unwrap<VtkRotationFilterWrap>(info.Holder());
	vtkRotationFilter *native = (vtkRotationFilter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkRotationFilterWrap::GetCopyInput(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRotationFilterWrap *wrapper = ObjectWrap::Unwrap<VtkRotationFilterWrap>(info.Holder());
	vtkRotationFilter *native = (vtkRotationFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCopyInput();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkRotationFilterWrap::GetNumberOfCopies(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRotationFilterWrap *wrapper = ObjectWrap::Unwrap<VtkRotationFilterWrap>(info.Holder());
	vtkRotationFilter *native = (vtkRotationFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfCopies();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkRotationFilterWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRotationFilterWrap *wrapper = ObjectWrap::Unwrap<VtkRotationFilterWrap>(info.Holder());
	vtkRotationFilter *native = (vtkRotationFilter *)wrapper->native.GetPointer();
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

void VtkRotationFilterWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRotationFilterWrap *wrapper = ObjectWrap::Unwrap<VtkRotationFilterWrap>(info.Holder());
	vtkRotationFilter *native = (vtkRotationFilter *)wrapper->native.GetPointer();
	vtkRotationFilter * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkRotationFilterWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkRotationFilterWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkRotationFilterWrap *w = new VtkRotationFilterWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkRotationFilterWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRotationFilterWrap *wrapper = ObjectWrap::Unwrap<VtkRotationFilterWrap>(info.Holder());
	vtkRotationFilter *native = (vtkRotationFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkRotationFilter * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkRotationFilterWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkRotationFilterWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkRotationFilterWrap *w = new VtkRotationFilterWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkRotationFilterWrap::SetAngle(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRotationFilterWrap *wrapper = ObjectWrap::Unwrap<VtkRotationFilterWrap>(info.Holder());
	vtkRotationFilter *native = (vtkRotationFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetAngle(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkRotationFilterWrap::SetAxis(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRotationFilterWrap *wrapper = ObjectWrap::Unwrap<VtkRotationFilterWrap>(info.Holder());
	vtkRotationFilter *native = (vtkRotationFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetAxis(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkRotationFilterWrap::SetAxisToX(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRotationFilterWrap *wrapper = ObjectWrap::Unwrap<VtkRotationFilterWrap>(info.Holder());
	vtkRotationFilter *native = (vtkRotationFilter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetAxisToX();
}

void VtkRotationFilterWrap::SetAxisToY(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRotationFilterWrap *wrapper = ObjectWrap::Unwrap<VtkRotationFilterWrap>(info.Holder());
	vtkRotationFilter *native = (vtkRotationFilter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetAxisToY();
}

void VtkRotationFilterWrap::SetAxisToZ(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRotationFilterWrap *wrapper = ObjectWrap::Unwrap<VtkRotationFilterWrap>(info.Holder());
	vtkRotationFilter *native = (vtkRotationFilter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetAxisToZ();
}

void VtkRotationFilterWrap::SetCenter(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRotationFilterWrap *wrapper = ObjectWrap::Unwrap<VtkRotationFilterWrap>(info.Holder());
	vtkRotationFilter *native = (vtkRotationFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
			if(info.Length() > 2 && info[2]->IsNumber())
			{
				if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				native->SetCenter(
					info[0]->NumberValue(),
					info[1]->NumberValue(),
					info[2]->NumberValue()
				);
				return;
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkRotationFilterWrap::SetCopyInput(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRotationFilterWrap *wrapper = ObjectWrap::Unwrap<VtkRotationFilterWrap>(info.Holder());
	vtkRotationFilter *native = (vtkRotationFilter *)wrapper->native.GetPointer();
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

void VtkRotationFilterWrap::SetNumberOfCopies(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRotationFilterWrap *wrapper = ObjectWrap::Unwrap<VtkRotationFilterWrap>(info.Holder());
	vtkRotationFilter *native = (vtkRotationFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetNumberOfCopies(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}
