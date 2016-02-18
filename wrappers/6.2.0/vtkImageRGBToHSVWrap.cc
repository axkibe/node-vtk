/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkThreadedImageAlgorithmWrap.h"
#include "vtkImageRGBToHSVWrap.h"
#include "vtkObjectWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkImageRGBToHSVWrap::ptpl;

VtkImageRGBToHSVWrap::VtkImageRGBToHSVWrap()
{ }

VtkImageRGBToHSVWrap::VtkImageRGBToHSVWrap(vtkSmartPointer<vtkImageRGBToHSV> _native)
{ native = _native; }

VtkImageRGBToHSVWrap::~VtkImageRGBToHSVWrap()
{ }

void VtkImageRGBToHSVWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkImageRGBToHSV").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("ImageRGBToHSV").ToLocalChecked(), ConstructorGetter);
}

void VtkImageRGBToHSVWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkImageRGBToHSVWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkThreadedImageAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkThreadedImageAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkImageRGBToHSVWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetMaximum", GetMaximum);
	Nan::SetPrototypeMethod(tpl, "getMaximum", GetMaximum);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetMaximum", SetMaximum);
	Nan::SetPrototypeMethod(tpl, "setMaximum", SetMaximum);

#ifdef VTK_NODE_PLUS_VTKIMAGERGBTOHSVWRAP_INITPTPL
	VTK_NODE_PLUS_VTKIMAGERGBTOHSVWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkImageRGBToHSVWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkImageRGBToHSV> native = vtkSmartPointer<vtkImageRGBToHSV>::New();
		VtkImageRGBToHSVWrap* obj = new VtkImageRGBToHSVWrap(native);
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

void VtkImageRGBToHSVWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageRGBToHSVWrap *wrapper = ObjectWrap::Unwrap<VtkImageRGBToHSVWrap>(info.Holder());
	vtkImageRGBToHSV *native = (vtkImageRGBToHSV *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkImageRGBToHSVWrap::GetMaximum(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageRGBToHSVWrap *wrapper = ObjectWrap::Unwrap<VtkImageRGBToHSVWrap>(info.Holder());
	vtkImageRGBToHSV *native = (vtkImageRGBToHSV *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMaximum();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageRGBToHSVWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageRGBToHSVWrap *wrapper = ObjectWrap::Unwrap<VtkImageRGBToHSVWrap>(info.Holder());
	vtkImageRGBToHSV *native = (vtkImageRGBToHSV *)wrapper->native.GetPointer();
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

void VtkImageRGBToHSVWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageRGBToHSVWrap *wrapper = ObjectWrap::Unwrap<VtkImageRGBToHSVWrap>(info.Holder());
	vtkImageRGBToHSV *native = (vtkImageRGBToHSV *)wrapper->native.GetPointer();
	vtkImageRGBToHSV * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkImageRGBToHSVWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkImageRGBToHSVWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkImageRGBToHSVWrap *w = new VtkImageRGBToHSVWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkImageRGBToHSVWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageRGBToHSVWrap *wrapper = ObjectWrap::Unwrap<VtkImageRGBToHSVWrap>(info.Holder());
	vtkImageRGBToHSV *native = (vtkImageRGBToHSV *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkImageRGBToHSV * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		VtkImageRGBToHSVWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkImageRGBToHSVWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkImageRGBToHSVWrap *w = new VtkImageRGBToHSVWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageRGBToHSVWrap::SetMaximum(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageRGBToHSVWrap *wrapper = ObjectWrap::Unwrap<VtkImageRGBToHSVWrap>(info.Holder());
	vtkImageRGBToHSV *native = (vtkImageRGBToHSV *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetMaximum(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

