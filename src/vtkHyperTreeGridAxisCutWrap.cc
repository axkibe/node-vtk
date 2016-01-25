/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkPolyDataAlgorithmWrap.h"
#include "vtkHyperTreeGridAxisCutWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkHyperTreeGridAxisCutWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkHyperTreeGridAxisCutWrap::ptpl;

VtkHyperTreeGridAxisCutWrap::VtkHyperTreeGridAxisCutWrap()
{ }

VtkHyperTreeGridAxisCutWrap::VtkHyperTreeGridAxisCutWrap(vtkSmartPointer<vtkHyperTreeGridAxisCut> _native)
{ native = _native; }

VtkHyperTreeGridAxisCutWrap::~VtkHyperTreeGridAxisCutWrap()
{ }

void VtkHyperTreeGridAxisCutWrap::Init(v8::Local<v8::Object> exports)
{
	if (!constructor.IsEmpty()) return;
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkPolyDataAlgorithmWrap::Init( exports );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkPolyDataAlgorithmWrap::ptpl));

	tpl->SetClassName(Nan::New("VtkHyperTreeGridAxisCutWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );

	exports->Set(Nan::New("vtkHyperTreeGridAxisCut").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("HyperTreeGridAxisCut").ToLocalChecked(),tpl->GetFunction());
}

void VtkHyperTreeGridAxisCutWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetPlaneNormalAxis", GetPlaneNormalAxis);
	Nan::SetPrototypeMethod(tpl, "getPlaneNormalAxis", GetPlaneNormalAxis);

	Nan::SetPrototypeMethod(tpl, "GetPlanePosition", GetPlanePosition);
	Nan::SetPrototypeMethod(tpl, "getPlanePosition", GetPlanePosition);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetPlaneNormalAxis", SetPlaneNormalAxis);
	Nan::SetPrototypeMethod(tpl, "setPlaneNormalAxis", SetPlaneNormalAxis);

	Nan::SetPrototypeMethod(tpl, "SetPlanePosition", SetPlanePosition);
	Nan::SetPrototypeMethod(tpl, "setPlanePosition", SetPlanePosition);

}

void VtkHyperTreeGridAxisCutWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkHyperTreeGridAxisCut> native = vtkSmartPointer<vtkHyperTreeGridAxisCut>::New();
		VtkHyperTreeGridAxisCutWrap* obj = new VtkHyperTreeGridAxisCutWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkHyperTreeGridAxisCutWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperTreeGridAxisCutWrap *wrapper = ObjectWrap::Unwrap<VtkHyperTreeGridAxisCutWrap>(info.Holder());
	vtkHyperTreeGridAxisCut *native = (vtkHyperTreeGridAxisCut *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkHyperTreeGridAxisCutWrap::GetPlaneNormalAxis(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperTreeGridAxisCutWrap *wrapper = ObjectWrap::Unwrap<VtkHyperTreeGridAxisCutWrap>(info.Holder());
	vtkHyperTreeGridAxisCut *native = (vtkHyperTreeGridAxisCut *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPlaneNormalAxis();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkHyperTreeGridAxisCutWrap::GetPlanePosition(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperTreeGridAxisCutWrap *wrapper = ObjectWrap::Unwrap<VtkHyperTreeGridAxisCutWrap>(info.Holder());
	vtkHyperTreeGridAxisCut *native = (vtkHyperTreeGridAxisCut *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPlanePosition();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkHyperTreeGridAxisCutWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperTreeGridAxisCutWrap *wrapper = ObjectWrap::Unwrap<VtkHyperTreeGridAxisCutWrap>(info.Holder());
	vtkHyperTreeGridAxisCut *native = (vtkHyperTreeGridAxisCut *)wrapper->native.GetPointer();
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

void VtkHyperTreeGridAxisCutWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperTreeGridAxisCutWrap *wrapper = ObjectWrap::Unwrap<VtkHyperTreeGridAxisCutWrap>(info.Holder());
	vtkHyperTreeGridAxisCut *native = (vtkHyperTreeGridAxisCut *)wrapper->native.GetPointer();
	vtkHyperTreeGridAxisCut * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkHyperTreeGridAxisCutWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkHyperTreeGridAxisCutWrap *w = new VtkHyperTreeGridAxisCutWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkHyperTreeGridAxisCutWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperTreeGridAxisCutWrap *wrapper = ObjectWrap::Unwrap<VtkHyperTreeGridAxisCutWrap>(info.Holder());
	vtkHyperTreeGridAxisCut *native = (vtkHyperTreeGridAxisCut *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkHyperTreeGridAxisCut * r;
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
			Nan::New<v8::Function>(VtkHyperTreeGridAxisCutWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkHyperTreeGridAxisCutWrap *w = new VtkHyperTreeGridAxisCutWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkHyperTreeGridAxisCutWrap::SetPlaneNormalAxis(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperTreeGridAxisCutWrap *wrapper = ObjectWrap::Unwrap<VtkHyperTreeGridAxisCutWrap>(info.Holder());
	vtkHyperTreeGridAxisCut *native = (vtkHyperTreeGridAxisCut *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetPlaneNormalAxis(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkHyperTreeGridAxisCutWrap::SetPlanePosition(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperTreeGridAxisCutWrap *wrapper = ObjectWrap::Unwrap<VtkHyperTreeGridAxisCutWrap>(info.Holder());
	vtkHyperTreeGridAxisCut *native = (vtkHyperTreeGridAxisCut *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetPlanePosition(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}
