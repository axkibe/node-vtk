/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkImageAlgorithmWrap.h"
#include "vtkImageClipWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkImageClipWrap::ptpl;

VtkImageClipWrap::VtkImageClipWrap()
{ }

VtkImageClipWrap::VtkImageClipWrap(vtkSmartPointer<vtkImageClip> _native)
{ native = _native; }

VtkImageClipWrap::~VtkImageClipWrap()
{ }

void VtkImageClipWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkImageClip").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("ImageClip").ToLocalChecked(), ConstructorGetter);
}

void VtkImageClipWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkImageClipWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkImageAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkImageAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkImageClipWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "ClipDataOff", ClipDataOff);
	Nan::SetPrototypeMethod(tpl, "clipDataOff", ClipDataOff);

	Nan::SetPrototypeMethod(tpl, "ClipDataOn", ClipDataOn);
	Nan::SetPrototypeMethod(tpl, "clipDataOn", ClipDataOn);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetClipData", GetClipData);
	Nan::SetPrototypeMethod(tpl, "getClipData", GetClipData);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "ResetOutputWholeExtent", ResetOutputWholeExtent);
	Nan::SetPrototypeMethod(tpl, "resetOutputWholeExtent", ResetOutputWholeExtent);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetClipData", SetClipData);
	Nan::SetPrototypeMethod(tpl, "setClipData", SetClipData);

	Nan::SetPrototypeMethod(tpl, "SetOutputWholeExtent", SetOutputWholeExtent);
	Nan::SetPrototypeMethod(tpl, "setOutputWholeExtent", SetOutputWholeExtent);

	ptpl.Reset( tpl );
}

void VtkImageClipWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkImageClip> native = vtkSmartPointer<vtkImageClip>::New();
		VtkImageClipWrap* obj = new VtkImageClipWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkImageClipWrap::ClipDataOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageClipWrap *wrapper = ObjectWrap::Unwrap<VtkImageClipWrap>(info.Holder());
	vtkImageClip *native = (vtkImageClip *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ClipDataOff();
}

void VtkImageClipWrap::ClipDataOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageClipWrap *wrapper = ObjectWrap::Unwrap<VtkImageClipWrap>(info.Holder());
	vtkImageClip *native = (vtkImageClip *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ClipDataOn();
}

void VtkImageClipWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageClipWrap *wrapper = ObjectWrap::Unwrap<VtkImageClipWrap>(info.Holder());
	vtkImageClip *native = (vtkImageClip *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkImageClipWrap::GetClipData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageClipWrap *wrapper = ObjectWrap::Unwrap<VtkImageClipWrap>(info.Holder());
	vtkImageClip *native = (vtkImageClip *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClipData();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageClipWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageClipWrap *wrapper = ObjectWrap::Unwrap<VtkImageClipWrap>(info.Holder());
	vtkImageClip *native = (vtkImageClip *)wrapper->native.GetPointer();
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

void VtkImageClipWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageClipWrap *wrapper = ObjectWrap::Unwrap<VtkImageClipWrap>(info.Holder());
	vtkImageClip *native = (vtkImageClip *)wrapper->native.GetPointer();
	vtkImageClip * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkImageClipWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkImageClipWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkImageClipWrap *w = new VtkImageClipWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkImageClipWrap::ResetOutputWholeExtent(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageClipWrap *wrapper = ObjectWrap::Unwrap<VtkImageClipWrap>(info.Holder());
	vtkImageClip *native = (vtkImageClip *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ResetOutputWholeExtent();
}

void VtkImageClipWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageClipWrap *wrapper = ObjectWrap::Unwrap<VtkImageClipWrap>(info.Holder());
	vtkImageClip *native = (vtkImageClip *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkImageClip * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkImageClipWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkImageClipWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkImageClipWrap *w = new VtkImageClipWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageClipWrap::SetClipData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageClipWrap *wrapper = ObjectWrap::Unwrap<VtkImageClipWrap>(info.Holder());
	vtkImageClip *native = (vtkImageClip *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetClipData(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageClipWrap::SetOutputWholeExtent(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageClipWrap *wrapper = ObjectWrap::Unwrap<VtkImageClipWrap>(info.Holder());
	vtkImageClip *native = (vtkImageClip *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			if(info.Length() > 2 && info[2]->IsInt32())
			{
				if(info.Length() > 3 && info[3]->IsInt32())
				{
					if(info.Length() > 4 && info[4]->IsInt32())
					{
						if(info.Length() > 5 && info[5]->IsInt32())
						{
							if(info.Length() != 6)
							{
								Nan::ThrowError("Too many parameters.");
								return;
							}
							native->SetOutputWholeExtent(
								info[0]->Int32Value(),
								info[1]->Int32Value(),
								info[2]->Int32Value(),
								info[3]->Int32Value(),
								info[4]->Int32Value(),
								info[5]->Int32Value()
							);
							return;
						}
					}
				}
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

