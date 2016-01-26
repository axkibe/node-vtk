/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkRectilinearGridAlgorithmWrap.h"
#include "vtkRectilinearGridClipWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkRectilinearGridClipWrap::ptpl;

VtkRectilinearGridClipWrap::VtkRectilinearGridClipWrap()
{ }

VtkRectilinearGridClipWrap::VtkRectilinearGridClipWrap(vtkSmartPointer<vtkRectilinearGridClip> _native)
{ native = _native; }

VtkRectilinearGridClipWrap::~VtkRectilinearGridClipWrap()
{ }

void VtkRectilinearGridClipWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkRectilinearGridClip").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("RectilinearGridClip").ToLocalChecked(), ConstructorGetter);
}

void VtkRectilinearGridClipWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkRectilinearGridClipWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkRectilinearGridAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkRectilinearGridAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkRectilinearGridClipWrap").ToLocalChecked());
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

void VtkRectilinearGridClipWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkRectilinearGridClip> native = vtkSmartPointer<vtkRectilinearGridClip>::New();
		VtkRectilinearGridClipWrap* obj = new VtkRectilinearGridClipWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkRectilinearGridClipWrap::ClipDataOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRectilinearGridClipWrap *wrapper = ObjectWrap::Unwrap<VtkRectilinearGridClipWrap>(info.Holder());
	vtkRectilinearGridClip *native = (vtkRectilinearGridClip *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ClipDataOff();
}

void VtkRectilinearGridClipWrap::ClipDataOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRectilinearGridClipWrap *wrapper = ObjectWrap::Unwrap<VtkRectilinearGridClipWrap>(info.Holder());
	vtkRectilinearGridClip *native = (vtkRectilinearGridClip *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ClipDataOn();
}

void VtkRectilinearGridClipWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRectilinearGridClipWrap *wrapper = ObjectWrap::Unwrap<VtkRectilinearGridClipWrap>(info.Holder());
	vtkRectilinearGridClip *native = (vtkRectilinearGridClip *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkRectilinearGridClipWrap::GetClipData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRectilinearGridClipWrap *wrapper = ObjectWrap::Unwrap<VtkRectilinearGridClipWrap>(info.Holder());
	vtkRectilinearGridClip *native = (vtkRectilinearGridClip *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClipData();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkRectilinearGridClipWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRectilinearGridClipWrap *wrapper = ObjectWrap::Unwrap<VtkRectilinearGridClipWrap>(info.Holder());
	vtkRectilinearGridClip *native = (vtkRectilinearGridClip *)wrapper->native.GetPointer();
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

void VtkRectilinearGridClipWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRectilinearGridClipWrap *wrapper = ObjectWrap::Unwrap<VtkRectilinearGridClipWrap>(info.Holder());
	vtkRectilinearGridClip *native = (vtkRectilinearGridClip *)wrapper->native.GetPointer();
	vtkRectilinearGridClip * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkRectilinearGridClipWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkRectilinearGridClipWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkRectilinearGridClipWrap *w = new VtkRectilinearGridClipWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkRectilinearGridClipWrap::ResetOutputWholeExtent(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRectilinearGridClipWrap *wrapper = ObjectWrap::Unwrap<VtkRectilinearGridClipWrap>(info.Holder());
	vtkRectilinearGridClip *native = (vtkRectilinearGridClip *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ResetOutputWholeExtent();
}

void VtkRectilinearGridClipWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRectilinearGridClipWrap *wrapper = ObjectWrap::Unwrap<VtkRectilinearGridClipWrap>(info.Holder());
	vtkRectilinearGridClip *native = (vtkRectilinearGridClip *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkRectilinearGridClip * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkRectilinearGridClipWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkRectilinearGridClipWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkRectilinearGridClipWrap *w = new VtkRectilinearGridClipWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkRectilinearGridClipWrap::SetClipData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRectilinearGridClipWrap *wrapper = ObjectWrap::Unwrap<VtkRectilinearGridClipWrap>(info.Holder());
	vtkRectilinearGridClip *native = (vtkRectilinearGridClip *)wrapper->native.GetPointer();
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

void VtkRectilinearGridClipWrap::SetOutputWholeExtent(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkRectilinearGridClipWrap *wrapper = ObjectWrap::Unwrap<VtkRectilinearGridClipWrap>(info.Holder());
	vtkRectilinearGridClip *native = (vtkRectilinearGridClip *)wrapper->native.GetPointer();
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

