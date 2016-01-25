/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkParametricFunctionWrap.h"
#include "vtkParametricEllipsoidWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkParametricEllipsoidWrap::constructor;

VtkParametricEllipsoidWrap::VtkParametricEllipsoidWrap()
{ }

VtkParametricEllipsoidWrap::VtkParametricEllipsoidWrap(vtkSmartPointer<vtkParametricEllipsoid> _native)
{ native = _native; }

VtkParametricEllipsoidWrap::~VtkParametricEllipsoidWrap()
{ }

void VtkParametricEllipsoidWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	tpl->SetClassName(Nan::New("VtkParametricEllipsoidWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	VtkObjectBaseWrap::InitTpl(tpl);
	VtkObjectWrap::InitTpl(tpl);
	VtkParametricFunctionWrap::InitTpl(tpl);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );

	exports->Set(Nan::New("vtkParametricEllipsoid").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("ParametricEllipsoid").ToLocalChecked(),tpl->GetFunction());
}

void VtkParametricEllipsoidWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetDimension", GetDimension);
	Nan::SetPrototypeMethod(tpl, "getDimension", GetDimension);

	Nan::SetPrototypeMethod(tpl, "GetXRadius", GetXRadius);
	Nan::SetPrototypeMethod(tpl, "getXRadius", GetXRadius);

	Nan::SetPrototypeMethod(tpl, "GetYRadius", GetYRadius);
	Nan::SetPrototypeMethod(tpl, "getYRadius", GetYRadius);

	Nan::SetPrototypeMethod(tpl, "GetZRadius", GetZRadius);
	Nan::SetPrototypeMethod(tpl, "getZRadius", GetZRadius);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetXRadius", SetXRadius);
	Nan::SetPrototypeMethod(tpl, "setXRadius", SetXRadius);

	Nan::SetPrototypeMethod(tpl, "SetYRadius", SetYRadius);
	Nan::SetPrototypeMethod(tpl, "setYRadius", SetYRadius);

	Nan::SetPrototypeMethod(tpl, "SetZRadius", SetZRadius);
	Nan::SetPrototypeMethod(tpl, "setZRadius", SetZRadius);

}

void VtkParametricEllipsoidWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkParametricEllipsoid> native = vtkSmartPointer<vtkParametricEllipsoid>::New();
		VtkParametricEllipsoidWrap* obj = new VtkParametricEllipsoidWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkParametricEllipsoidWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParametricEllipsoidWrap *wrapper = ObjectWrap::Unwrap<VtkParametricEllipsoidWrap>(info.Holder());
	vtkParametricEllipsoid *native = (vtkParametricEllipsoid *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkParametricEllipsoidWrap::GetDimension(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParametricEllipsoidWrap *wrapper = ObjectWrap::Unwrap<VtkParametricEllipsoidWrap>(info.Holder());
	vtkParametricEllipsoid *native = (vtkParametricEllipsoid *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDimension();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkParametricEllipsoidWrap::GetXRadius(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParametricEllipsoidWrap *wrapper = ObjectWrap::Unwrap<VtkParametricEllipsoidWrap>(info.Holder());
	vtkParametricEllipsoid *native = (vtkParametricEllipsoid *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetXRadius();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkParametricEllipsoidWrap::GetYRadius(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParametricEllipsoidWrap *wrapper = ObjectWrap::Unwrap<VtkParametricEllipsoidWrap>(info.Holder());
	vtkParametricEllipsoid *native = (vtkParametricEllipsoid *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetYRadius();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkParametricEllipsoidWrap::GetZRadius(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParametricEllipsoidWrap *wrapper = ObjectWrap::Unwrap<VtkParametricEllipsoidWrap>(info.Holder());
	vtkParametricEllipsoid *native = (vtkParametricEllipsoid *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetZRadius();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkParametricEllipsoidWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParametricEllipsoidWrap *wrapper = ObjectWrap::Unwrap<VtkParametricEllipsoidWrap>(info.Holder());
	vtkParametricEllipsoid *native = (vtkParametricEllipsoid *)wrapper->native.GetPointer();
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

void VtkParametricEllipsoidWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParametricEllipsoidWrap *wrapper = ObjectWrap::Unwrap<VtkParametricEllipsoidWrap>(info.Holder());
	vtkParametricEllipsoid *native = (vtkParametricEllipsoid *)wrapper->native.GetPointer();
	vtkParametricEllipsoid * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkParametricEllipsoidWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkParametricEllipsoidWrap *w = new VtkParametricEllipsoidWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkParametricEllipsoidWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParametricEllipsoidWrap *wrapper = ObjectWrap::Unwrap<VtkParametricEllipsoidWrap>(info.Holder());
	vtkParametricEllipsoid *native = (vtkParametricEllipsoid *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkParametricEllipsoid * r;
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
			Nan::New<v8::Function>(VtkParametricEllipsoidWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkParametricEllipsoidWrap *w = new VtkParametricEllipsoidWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkParametricEllipsoidWrap::SetXRadius(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParametricEllipsoidWrap *wrapper = ObjectWrap::Unwrap<VtkParametricEllipsoidWrap>(info.Holder());
	vtkParametricEllipsoid *native = (vtkParametricEllipsoid *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetXRadius(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkParametricEllipsoidWrap::SetYRadius(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParametricEllipsoidWrap *wrapper = ObjectWrap::Unwrap<VtkParametricEllipsoidWrap>(info.Holder());
	vtkParametricEllipsoid *native = (vtkParametricEllipsoid *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetYRadius(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkParametricEllipsoidWrap::SetZRadius(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkParametricEllipsoidWrap *wrapper = ObjectWrap::Unwrap<VtkParametricEllipsoidWrap>(info.Holder());
	vtkParametricEllipsoid *native = (vtkParametricEllipsoid *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetZRadius(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

