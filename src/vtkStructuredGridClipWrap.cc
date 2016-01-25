/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkStructuredGridAlgorithmWrap.h"
#include "vtkStructuredGridClipWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkStructuredGridClipWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkStructuredGridClipWrap::ptpl;

VtkStructuredGridClipWrap::VtkStructuredGridClipWrap()
{ }

VtkStructuredGridClipWrap::VtkStructuredGridClipWrap(vtkSmartPointer<vtkStructuredGridClip> _native)
{ native = _native; }

VtkStructuredGridClipWrap::~VtkStructuredGridClipWrap()
{ }

void VtkStructuredGridClipWrap::Init(v8::Local<v8::Object> exports)
{
	if (!constructor.IsEmpty()) return;
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkStructuredGridAlgorithmWrap::Init( exports );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkStructuredGridAlgorithmWrap::ptpl));

	tpl->SetClassName(Nan::New("VtkStructuredGridClipWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );

	exports->Set(Nan::New("vtkStructuredGridClip").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("StructuredGridClip").ToLocalChecked(),tpl->GetFunction());
}

void VtkStructuredGridClipWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
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

}

void VtkStructuredGridClipWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkStructuredGridClip> native = vtkSmartPointer<vtkStructuredGridClip>::New();
		VtkStructuredGridClipWrap* obj = new VtkStructuredGridClipWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkStructuredGridClipWrap::ClipDataOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStructuredGridClipWrap *wrapper = ObjectWrap::Unwrap<VtkStructuredGridClipWrap>(info.Holder());
	vtkStructuredGridClip *native = (vtkStructuredGridClip *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ClipDataOff();
}

void VtkStructuredGridClipWrap::ClipDataOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStructuredGridClipWrap *wrapper = ObjectWrap::Unwrap<VtkStructuredGridClipWrap>(info.Holder());
	vtkStructuredGridClip *native = (vtkStructuredGridClip *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ClipDataOn();
}

void VtkStructuredGridClipWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStructuredGridClipWrap *wrapper = ObjectWrap::Unwrap<VtkStructuredGridClipWrap>(info.Holder());
	vtkStructuredGridClip *native = (vtkStructuredGridClip *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkStructuredGridClipWrap::GetClipData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStructuredGridClipWrap *wrapper = ObjectWrap::Unwrap<VtkStructuredGridClipWrap>(info.Holder());
	vtkStructuredGridClip *native = (vtkStructuredGridClip *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClipData();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkStructuredGridClipWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStructuredGridClipWrap *wrapper = ObjectWrap::Unwrap<VtkStructuredGridClipWrap>(info.Holder());
	vtkStructuredGridClip *native = (vtkStructuredGridClip *)wrapper->native.GetPointer();
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

void VtkStructuredGridClipWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStructuredGridClipWrap *wrapper = ObjectWrap::Unwrap<VtkStructuredGridClipWrap>(info.Holder());
	vtkStructuredGridClip *native = (vtkStructuredGridClip *)wrapper->native.GetPointer();
	vtkStructuredGridClip * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkStructuredGridClipWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkStructuredGridClipWrap *w = new VtkStructuredGridClipWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkStructuredGridClipWrap::ResetOutputWholeExtent(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStructuredGridClipWrap *wrapper = ObjectWrap::Unwrap<VtkStructuredGridClipWrap>(info.Holder());
	vtkStructuredGridClip *native = (vtkStructuredGridClip *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ResetOutputWholeExtent();
}

void VtkStructuredGridClipWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStructuredGridClipWrap *wrapper = ObjectWrap::Unwrap<VtkStructuredGridClipWrap>(info.Holder());
	vtkStructuredGridClip *native = (vtkStructuredGridClip *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkStructuredGridClip * r;
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
			Nan::New<v8::Function>(VtkStructuredGridClipWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkStructuredGridClipWrap *w = new VtkStructuredGridClipWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkStructuredGridClipWrap::SetClipData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStructuredGridClipWrap *wrapper = ObjectWrap::Unwrap<VtkStructuredGridClipWrap>(info.Holder());
	vtkStructuredGridClip *native = (vtkStructuredGridClip *)wrapper->native.GetPointer();
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

void VtkStructuredGridClipWrap::SetOutputWholeExtent(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStructuredGridClipWrap *wrapper = ObjectWrap::Unwrap<VtkStructuredGridClipWrap>(info.Holder());
	vtkStructuredGridClip *native = (vtkStructuredGridClip *)wrapper->native.GetPointer();
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
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->SetOutputWholeExtent(
				info[0]->Int32Value(),
				info[1]->Int32Value()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

