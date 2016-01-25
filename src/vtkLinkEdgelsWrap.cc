/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkPolyDataAlgorithmWrap.h"
#include "vtkLinkEdgelsWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkLinkEdgelsWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkLinkEdgelsWrap::ptpl;

VtkLinkEdgelsWrap::VtkLinkEdgelsWrap()
{ }

VtkLinkEdgelsWrap::VtkLinkEdgelsWrap(vtkSmartPointer<vtkLinkEdgels> _native)
{ native = _native; }

VtkLinkEdgelsWrap::~VtkLinkEdgelsWrap()
{ }

void VtkLinkEdgelsWrap::Init(v8::Local<v8::Object> exports)
{
	if (!constructor.IsEmpty()) return;
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkPolyDataAlgorithmWrap::Init( exports );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkPolyDataAlgorithmWrap::ptpl));

	tpl->SetClassName(Nan::New("VtkLinkEdgelsWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );

	exports->Set(Nan::New("vtkLinkEdgels").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("LinkEdgels").ToLocalChecked(),tpl->GetFunction());
}

void VtkLinkEdgelsWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetGradientThreshold", GetGradientThreshold);
	Nan::SetPrototypeMethod(tpl, "getGradientThreshold", GetGradientThreshold);

	Nan::SetPrototypeMethod(tpl, "GetLinkThreshold", GetLinkThreshold);
	Nan::SetPrototypeMethod(tpl, "getLinkThreshold", GetLinkThreshold);

	Nan::SetPrototypeMethod(tpl, "GetPhiThreshold", GetPhiThreshold);
	Nan::SetPrototypeMethod(tpl, "getPhiThreshold", GetPhiThreshold);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetGradientThreshold", SetGradientThreshold);
	Nan::SetPrototypeMethod(tpl, "setGradientThreshold", SetGradientThreshold);

	Nan::SetPrototypeMethod(tpl, "SetLinkThreshold", SetLinkThreshold);
	Nan::SetPrototypeMethod(tpl, "setLinkThreshold", SetLinkThreshold);

	Nan::SetPrototypeMethod(tpl, "SetPhiThreshold", SetPhiThreshold);
	Nan::SetPrototypeMethod(tpl, "setPhiThreshold", SetPhiThreshold);

}

void VtkLinkEdgelsWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkLinkEdgels> native = vtkSmartPointer<vtkLinkEdgels>::New();
		VtkLinkEdgelsWrap* obj = new VtkLinkEdgelsWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkLinkEdgelsWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLinkEdgelsWrap *wrapper = ObjectWrap::Unwrap<VtkLinkEdgelsWrap>(info.Holder());
	vtkLinkEdgels *native = (vtkLinkEdgels *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkLinkEdgelsWrap::GetGradientThreshold(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLinkEdgelsWrap *wrapper = ObjectWrap::Unwrap<VtkLinkEdgelsWrap>(info.Holder());
	vtkLinkEdgels *native = (vtkLinkEdgels *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetGradientThreshold();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkLinkEdgelsWrap::GetLinkThreshold(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLinkEdgelsWrap *wrapper = ObjectWrap::Unwrap<VtkLinkEdgelsWrap>(info.Holder());
	vtkLinkEdgels *native = (vtkLinkEdgels *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLinkThreshold();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkLinkEdgelsWrap::GetPhiThreshold(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLinkEdgelsWrap *wrapper = ObjectWrap::Unwrap<VtkLinkEdgelsWrap>(info.Holder());
	vtkLinkEdgels *native = (vtkLinkEdgels *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPhiThreshold();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkLinkEdgelsWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLinkEdgelsWrap *wrapper = ObjectWrap::Unwrap<VtkLinkEdgelsWrap>(info.Holder());
	vtkLinkEdgels *native = (vtkLinkEdgels *)wrapper->native.GetPointer();
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

void VtkLinkEdgelsWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLinkEdgelsWrap *wrapper = ObjectWrap::Unwrap<VtkLinkEdgelsWrap>(info.Holder());
	vtkLinkEdgels *native = (vtkLinkEdgels *)wrapper->native.GetPointer();
	vtkLinkEdgels * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkLinkEdgelsWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkLinkEdgelsWrap *w = new VtkLinkEdgelsWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkLinkEdgelsWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLinkEdgelsWrap *wrapper = ObjectWrap::Unwrap<VtkLinkEdgelsWrap>(info.Holder());
	vtkLinkEdgels *native = (vtkLinkEdgels *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkLinkEdgels * r;
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
			Nan::New<v8::Function>(VtkLinkEdgelsWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkLinkEdgelsWrap *w = new VtkLinkEdgelsWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkLinkEdgelsWrap::SetGradientThreshold(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLinkEdgelsWrap *wrapper = ObjectWrap::Unwrap<VtkLinkEdgelsWrap>(info.Holder());
	vtkLinkEdgels *native = (vtkLinkEdgels *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetGradientThreshold(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkLinkEdgelsWrap::SetLinkThreshold(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLinkEdgelsWrap *wrapper = ObjectWrap::Unwrap<VtkLinkEdgelsWrap>(info.Holder());
	vtkLinkEdgels *native = (vtkLinkEdgels *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetLinkThreshold(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkLinkEdgelsWrap::SetPhiThreshold(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLinkEdgelsWrap *wrapper = ObjectWrap::Unwrap<VtkLinkEdgelsWrap>(info.Holder());
	vtkLinkEdgels *native = (vtkLinkEdgels *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetPhiThreshold(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

