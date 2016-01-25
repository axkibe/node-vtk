/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkPassInputTypeAlgorithmWrap.h"
#include "vtkAssignCoordinatesWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkAssignCoordinatesWrap::constructor;

VtkAssignCoordinatesWrap::VtkAssignCoordinatesWrap()
{ }

VtkAssignCoordinatesWrap::VtkAssignCoordinatesWrap(vtkSmartPointer<vtkAssignCoordinates> _native)
{ native = _native; }

VtkAssignCoordinatesWrap::~VtkAssignCoordinatesWrap()
{ }

void VtkAssignCoordinatesWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	tpl->SetClassName(Nan::New("VtkAssignCoordinatesWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	VtkObjectBaseWrap::InitTpl(tpl);
	VtkObjectWrap::InitTpl(tpl);
	VtkAlgorithmWrap::InitTpl(tpl);
	VtkPassInputTypeAlgorithmWrap::InitTpl(tpl);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );

	exports->Set(Nan::New("vtkAssignCoordinates").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("AssignCoordinates").ToLocalChecked(),tpl->GetFunction());
}

void VtkAssignCoordinatesWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetXCoordArrayName", GetXCoordArrayName);
	Nan::SetPrototypeMethod(tpl, "getXCoordArrayName", GetXCoordArrayName);

	Nan::SetPrototypeMethod(tpl, "GetYCoordArrayName", GetYCoordArrayName);
	Nan::SetPrototypeMethod(tpl, "getYCoordArrayName", GetYCoordArrayName);

	Nan::SetPrototypeMethod(tpl, "GetZCoordArrayName", GetZCoordArrayName);
	Nan::SetPrototypeMethod(tpl, "getZCoordArrayName", GetZCoordArrayName);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetXCoordArrayName", SetXCoordArrayName);
	Nan::SetPrototypeMethod(tpl, "setXCoordArrayName", SetXCoordArrayName);

	Nan::SetPrototypeMethod(tpl, "SetYCoordArrayName", SetYCoordArrayName);
	Nan::SetPrototypeMethod(tpl, "setYCoordArrayName", SetYCoordArrayName);

	Nan::SetPrototypeMethod(tpl, "SetZCoordArrayName", SetZCoordArrayName);
	Nan::SetPrototypeMethod(tpl, "setZCoordArrayName", SetZCoordArrayName);

}

void VtkAssignCoordinatesWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkAssignCoordinates> native = vtkSmartPointer<vtkAssignCoordinates>::New();
		VtkAssignCoordinatesWrap* obj = new VtkAssignCoordinatesWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkAssignCoordinatesWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAssignCoordinatesWrap *wrapper = ObjectWrap::Unwrap<VtkAssignCoordinatesWrap>(info.Holder());
	vtkAssignCoordinates *native = (vtkAssignCoordinates *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkAssignCoordinatesWrap::GetXCoordArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAssignCoordinatesWrap *wrapper = ObjectWrap::Unwrap<VtkAssignCoordinatesWrap>(info.Holder());
	vtkAssignCoordinates *native = (vtkAssignCoordinates *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetXCoordArrayName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkAssignCoordinatesWrap::GetYCoordArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAssignCoordinatesWrap *wrapper = ObjectWrap::Unwrap<VtkAssignCoordinatesWrap>(info.Holder());
	vtkAssignCoordinates *native = (vtkAssignCoordinates *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetYCoordArrayName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkAssignCoordinatesWrap::GetZCoordArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAssignCoordinatesWrap *wrapper = ObjectWrap::Unwrap<VtkAssignCoordinatesWrap>(info.Holder());
	vtkAssignCoordinates *native = (vtkAssignCoordinates *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetZCoordArrayName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkAssignCoordinatesWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAssignCoordinatesWrap *wrapper = ObjectWrap::Unwrap<VtkAssignCoordinatesWrap>(info.Holder());
	vtkAssignCoordinates *native = (vtkAssignCoordinates *)wrapper->native.GetPointer();
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

void VtkAssignCoordinatesWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAssignCoordinatesWrap *wrapper = ObjectWrap::Unwrap<VtkAssignCoordinatesWrap>(info.Holder());
	vtkAssignCoordinates *native = (vtkAssignCoordinates *)wrapper->native.GetPointer();
	vtkAssignCoordinates * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkAssignCoordinatesWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkAssignCoordinatesWrap *w = new VtkAssignCoordinatesWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkAssignCoordinatesWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAssignCoordinatesWrap *wrapper = ObjectWrap::Unwrap<VtkAssignCoordinatesWrap>(info.Holder());
	vtkAssignCoordinates *native = (vtkAssignCoordinates *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkAssignCoordinates * r;
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
			Nan::New<v8::Function>(VtkAssignCoordinatesWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkAssignCoordinatesWrap *w = new VtkAssignCoordinatesWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAssignCoordinatesWrap::SetXCoordArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAssignCoordinatesWrap *wrapper = ObjectWrap::Unwrap<VtkAssignCoordinatesWrap>(info.Holder());
	vtkAssignCoordinates *native = (vtkAssignCoordinates *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetXCoordArrayName(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAssignCoordinatesWrap::SetYCoordArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAssignCoordinatesWrap *wrapper = ObjectWrap::Unwrap<VtkAssignCoordinatesWrap>(info.Holder());
	vtkAssignCoordinates *native = (vtkAssignCoordinates *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetYCoordArrayName(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAssignCoordinatesWrap::SetZCoordArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAssignCoordinatesWrap *wrapper = ObjectWrap::Unwrap<VtkAssignCoordinatesWrap>(info.Holder());
	vtkAssignCoordinates *native = (vtkAssignCoordinates *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetZCoordArrayName(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

