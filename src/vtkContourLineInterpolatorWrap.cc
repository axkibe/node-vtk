/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkObjectWrap.h"
#include "vtkContourLineInterpolatorWrap.h"
#include "vtkRendererWrap.h"
#include "vtkContourRepresentationWrap.h"
#include "vtkIntArrayWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkContourLineInterpolatorWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkContourLineInterpolatorWrap::ptpl;

VtkContourLineInterpolatorWrap::VtkContourLineInterpolatorWrap()
{ }

VtkContourLineInterpolatorWrap::VtkContourLineInterpolatorWrap(vtkSmartPointer<vtkContourLineInterpolator> _native)
{ native = _native; }

VtkContourLineInterpolatorWrap::~VtkContourLineInterpolatorWrap()
{ }

void VtkContourLineInterpolatorWrap::Init(v8::Local<v8::Object> exports)
{
	if (!constructor.IsEmpty()) return;
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkObjectWrap::Init( exports );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkObjectWrap::ptpl));

	tpl->SetClassName(Nan::New("VtkContourLineInterpolatorWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );

	exports->Set(Nan::New("vtkContourLineInterpolator").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("ContourLineInterpolator").ToLocalChecked(),tpl->GetFunction());
}

void VtkContourLineInterpolatorWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetSpan", GetSpan);
	Nan::SetPrototypeMethod(tpl, "getSpan", GetSpan);

	Nan::SetPrototypeMethod(tpl, "InterpolateLine", InterpolateLine);
	Nan::SetPrototypeMethod(tpl, "interpolateLine", InterpolateLine);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

}

void VtkContourLineInterpolatorWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		Nan::ThrowError("Cannot create instance of abstract class.");
		return;
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkContourLineInterpolatorWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkContourLineInterpolatorWrap *wrapper = ObjectWrap::Unwrap<VtkContourLineInterpolatorWrap>(info.Holder());
	vtkContourLineInterpolator *native = (vtkContourLineInterpolator *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkContourLineInterpolatorWrap::GetSpan(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkContourLineInterpolatorWrap *wrapper = ObjectWrap::Unwrap<VtkContourLineInterpolatorWrap>(info.Holder());
	vtkContourLineInterpolator *native = (vtkContourLineInterpolator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsObject())
		{
			VtkIntArrayWrap *a1 = ObjectWrap::Unwrap<VtkIntArrayWrap>(info[1]->ToObject());
			if(info.Length() > 2 && info[2]->IsObject())
			{
				VtkContourRepresentationWrap *a2 = ObjectWrap::Unwrap<VtkContourRepresentationWrap>(info[2]->ToObject());
				if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				native->GetSpan(
					info[0]->Int32Value(),
					(vtkIntArray *) a1->native.GetPointer(),
					(vtkContourRepresentation *) a2->native.GetPointer()
				);
				return;
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkContourLineInterpolatorWrap::InterpolateLine(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkContourLineInterpolatorWrap *wrapper = ObjectWrap::Unwrap<VtkContourLineInterpolatorWrap>(info.Holder());
	vtkContourLineInterpolator *native = (vtkContourLineInterpolator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkRendererWrap *a0 = ObjectWrap::Unwrap<VtkRendererWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsObject())
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

void VtkContourLineInterpolatorWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkContourLineInterpolatorWrap *wrapper = ObjectWrap::Unwrap<VtkContourLineInterpolatorWrap>(info.Holder());
	vtkContourLineInterpolator *native = (vtkContourLineInterpolator *)wrapper->native.GetPointer();
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

void VtkContourLineInterpolatorWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkContourLineInterpolatorWrap *wrapper = ObjectWrap::Unwrap<VtkContourLineInterpolatorWrap>(info.Holder());
	vtkContourLineInterpolator *native = (vtkContourLineInterpolator *)wrapper->native.GetPointer();
	vtkContourLineInterpolator * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkContourLineInterpolatorWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkContourLineInterpolatorWrap *w = new VtkContourLineInterpolatorWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkContourLineInterpolatorWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkContourLineInterpolatorWrap *wrapper = ObjectWrap::Unwrap<VtkContourLineInterpolatorWrap>(info.Holder());
	vtkContourLineInterpolator *native = (vtkContourLineInterpolator *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkContourLineInterpolator * r;
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
			Nan::New<v8::Function>(VtkContourLineInterpolatorWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkContourLineInterpolatorWrap *w = new VtkContourLineInterpolatorWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

