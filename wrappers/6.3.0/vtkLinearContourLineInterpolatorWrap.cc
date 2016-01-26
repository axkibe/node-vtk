/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkContourLineInterpolatorWrap.h"
#include "vtkLinearContourLineInterpolatorWrap.h"
#include "vtkObjectWrap.h"
#include "vtkRendererWrap.h"
#include "vtkContourRepresentationWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkLinearContourLineInterpolatorWrap::ptpl;

VtkLinearContourLineInterpolatorWrap::VtkLinearContourLineInterpolatorWrap()
{ }

VtkLinearContourLineInterpolatorWrap::VtkLinearContourLineInterpolatorWrap(vtkSmartPointer<vtkLinearContourLineInterpolator> _native)
{ native = _native; }

VtkLinearContourLineInterpolatorWrap::~VtkLinearContourLineInterpolatorWrap()
{ }

void VtkLinearContourLineInterpolatorWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkLinearContourLineInterpolator").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("LinearContourLineInterpolator").ToLocalChecked(), ConstructorGetter);
}

void VtkLinearContourLineInterpolatorWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkLinearContourLineInterpolatorWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkContourLineInterpolatorWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkContourLineInterpolatorWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkLinearContourLineInterpolatorWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "InterpolateLine", InterpolateLine);
	Nan::SetPrototypeMethod(tpl, "interpolateLine", InterpolateLine);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	ptpl.Reset( tpl );
}

void VtkLinearContourLineInterpolatorWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkLinearContourLineInterpolator> native = vtkSmartPointer<vtkLinearContourLineInterpolator>::New();
		VtkLinearContourLineInterpolatorWrap* obj = new VtkLinearContourLineInterpolatorWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkLinearContourLineInterpolatorWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLinearContourLineInterpolatorWrap *wrapper = ObjectWrap::Unwrap<VtkLinearContourLineInterpolatorWrap>(info.Holder());
	vtkLinearContourLineInterpolator *native = (vtkLinearContourLineInterpolator *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkLinearContourLineInterpolatorWrap::InterpolateLine(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLinearContourLineInterpolatorWrap *wrapper = ObjectWrap::Unwrap<VtkLinearContourLineInterpolatorWrap>(info.Holder());
	vtkLinearContourLineInterpolator *native = (vtkLinearContourLineInterpolator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkRendererWrap::ptpl))->HasInstance(info[0]))
	{
		VtkRendererWrap *a0 = ObjectWrap::Unwrap<VtkRendererWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsObject() && (Nan::New(VtkContourRepresentationWrap::ptpl))->HasInstance(info[1]))
		{
			VtkContourRepresentationWrap *a1 = ObjectWrap::Unwrap<VtkContourRepresentationWrap>(info[1]->ToObject());
			if(info.Length() > 2 && info[2]->IsInt32())
			{
				if(info.Length() > 3 && info[3]->IsInt32())
				{
					int r;
					if(info.Length() != 4)
					{
						Nan::ThrowError("Too many parameters.");
						return;
					}
					r = native->InterpolateLine(
						(vtkRenderer *) a0->native.GetPointer(),
						(vtkContourRepresentation *) a1->native.GetPointer(),
						info[2]->Int32Value(),
						info[3]->Int32Value()
					);
					info.GetReturnValue().Set(Nan::New(r));
					return;
				}
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkLinearContourLineInterpolatorWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLinearContourLineInterpolatorWrap *wrapper = ObjectWrap::Unwrap<VtkLinearContourLineInterpolatorWrap>(info.Holder());
	vtkLinearContourLineInterpolator *native = (vtkLinearContourLineInterpolator *)wrapper->native.GetPointer();
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

void VtkLinearContourLineInterpolatorWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLinearContourLineInterpolatorWrap *wrapper = ObjectWrap::Unwrap<VtkLinearContourLineInterpolatorWrap>(info.Holder());
	vtkLinearContourLineInterpolator *native = (vtkLinearContourLineInterpolator *)wrapper->native.GetPointer();
	vtkLinearContourLineInterpolator * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkLinearContourLineInterpolatorWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkLinearContourLineInterpolatorWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkLinearContourLineInterpolatorWrap *w = new VtkLinearContourLineInterpolatorWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkLinearContourLineInterpolatorWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkLinearContourLineInterpolatorWrap *wrapper = ObjectWrap::Unwrap<VtkLinearContourLineInterpolatorWrap>(info.Holder());
	vtkLinearContourLineInterpolator *native = (vtkLinearContourLineInterpolator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkLinearContourLineInterpolator * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkLinearContourLineInterpolatorWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkLinearContourLineInterpolatorWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkLinearContourLineInterpolatorWrap *w = new VtkLinearContourLineInterpolatorWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

