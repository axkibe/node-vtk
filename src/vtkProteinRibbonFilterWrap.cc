/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkPolyDataAlgorithmWrap.h"
#include "vtkProteinRibbonFilterWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkProteinRibbonFilterWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkProteinRibbonFilterWrap::ptpl;

VtkProteinRibbonFilterWrap::VtkProteinRibbonFilterWrap()
{ }

VtkProteinRibbonFilterWrap::VtkProteinRibbonFilterWrap(vtkSmartPointer<vtkProteinRibbonFilter> _native)
{ native = _native; }

VtkProteinRibbonFilterWrap::~VtkProteinRibbonFilterWrap()
{ }

void VtkProteinRibbonFilterWrap::Init(v8::Local<v8::Object> exports)
{
	if (!constructor.IsEmpty()) return;
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkPolyDataAlgorithmWrap::Init( exports );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkPolyDataAlgorithmWrap::ptpl));

	tpl->SetClassName(Nan::New("VtkProteinRibbonFilterWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );

	exports->Set(Nan::New("vtkProteinRibbonFilter").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("ProteinRibbonFilter").ToLocalChecked(),tpl->GetFunction());
}

void VtkProteinRibbonFilterWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetSphereResolution", GetSphereResolution);
	Nan::SetPrototypeMethod(tpl, "getSphereResolution", GetSphereResolution);

	Nan::SetPrototypeMethod(tpl, "GetSubdivideFactor", GetSubdivideFactor);
	Nan::SetPrototypeMethod(tpl, "getSubdivideFactor", GetSubdivideFactor);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetSphereResolution", SetSphereResolution);
	Nan::SetPrototypeMethod(tpl, "setSphereResolution", SetSphereResolution);

	Nan::SetPrototypeMethod(tpl, "SetSubdivideFactor", SetSubdivideFactor);
	Nan::SetPrototypeMethod(tpl, "setSubdivideFactor", SetSubdivideFactor);

}

void VtkProteinRibbonFilterWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkProteinRibbonFilter> native = vtkSmartPointer<vtkProteinRibbonFilter>::New();
		VtkProteinRibbonFilterWrap* obj = new VtkProteinRibbonFilterWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkProteinRibbonFilterWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProteinRibbonFilterWrap *wrapper = ObjectWrap::Unwrap<VtkProteinRibbonFilterWrap>(info.Holder());
	vtkProteinRibbonFilter *native = (vtkProteinRibbonFilter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkProteinRibbonFilterWrap::GetSphereResolution(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProteinRibbonFilterWrap *wrapper = ObjectWrap::Unwrap<VtkProteinRibbonFilterWrap>(info.Holder());
	vtkProteinRibbonFilter *native = (vtkProteinRibbonFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSphereResolution();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkProteinRibbonFilterWrap::GetSubdivideFactor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProteinRibbonFilterWrap *wrapper = ObjectWrap::Unwrap<VtkProteinRibbonFilterWrap>(info.Holder());
	vtkProteinRibbonFilter *native = (vtkProteinRibbonFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSubdivideFactor();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkProteinRibbonFilterWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProteinRibbonFilterWrap *wrapper = ObjectWrap::Unwrap<VtkProteinRibbonFilterWrap>(info.Holder());
	vtkProteinRibbonFilter *native = (vtkProteinRibbonFilter *)wrapper->native.GetPointer();
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

void VtkProteinRibbonFilterWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProteinRibbonFilterWrap *wrapper = ObjectWrap::Unwrap<VtkProteinRibbonFilterWrap>(info.Holder());
	vtkProteinRibbonFilter *native = (vtkProteinRibbonFilter *)wrapper->native.GetPointer();
	vtkProteinRibbonFilter * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkProteinRibbonFilterWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkProteinRibbonFilterWrap *w = new VtkProteinRibbonFilterWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkProteinRibbonFilterWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProteinRibbonFilterWrap *wrapper = ObjectWrap::Unwrap<VtkProteinRibbonFilterWrap>(info.Holder());
	vtkProteinRibbonFilter *native = (vtkProteinRibbonFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkProteinRibbonFilter * r;
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
			Nan::New<v8::Function>(VtkProteinRibbonFilterWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkProteinRibbonFilterWrap *w = new VtkProteinRibbonFilterWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkProteinRibbonFilterWrap::SetSphereResolution(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProteinRibbonFilterWrap *wrapper = ObjectWrap::Unwrap<VtkProteinRibbonFilterWrap>(info.Holder());
	vtkProteinRibbonFilter *native = (vtkProteinRibbonFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetSphereResolution(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkProteinRibbonFilterWrap::SetSubdivideFactor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkProteinRibbonFilterWrap *wrapper = ObjectWrap::Unwrap<VtkProteinRibbonFilterWrap>(info.Holder());
	vtkProteinRibbonFilter *native = (vtkProteinRibbonFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetSubdivideFactor(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

