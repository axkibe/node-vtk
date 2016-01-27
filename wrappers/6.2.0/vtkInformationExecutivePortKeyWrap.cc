/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkInformationKeyWrap.h"
#include "vtkInformationExecutivePortKeyWrap.h"
#include "vtkObjectWrap.h"
#include "vtkInformationWrap.h"
#include "vtkExecutiveWrap.h"
#include "vtkGarbageCollectorWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkInformationExecutivePortKeyWrap::ptpl;

VtkInformationExecutivePortKeyWrap::VtkInformationExecutivePortKeyWrap()
{ }

VtkInformationExecutivePortKeyWrap::VtkInformationExecutivePortKeyWrap(vtkSmartPointer<vtkInformationExecutivePortKey> _native)
{ native = _native; }

VtkInformationExecutivePortKeyWrap::~VtkInformationExecutivePortKeyWrap()
{ }

void VtkInformationExecutivePortKeyWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkInformationExecutivePortKey").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("InformationExecutivePortKey").ToLocalChecked(), ConstructorGetter);
}

void VtkInformationExecutivePortKeyWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkInformationExecutivePortKeyWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkInformationKeyWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkInformationKeyWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkInformationExecutivePortKeyWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetExecutive", GetExecutive);
	Nan::SetPrototypeMethod(tpl, "getExecutive", GetExecutive);

	Nan::SetPrototypeMethod(tpl, "GetPort", GetPort);
	Nan::SetPrototypeMethod(tpl, "getPort", GetPort);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "MakeKey", MakeKey);
	Nan::SetPrototypeMethod(tpl, "makeKey", MakeKey);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "Report", Report);
	Nan::SetPrototypeMethod(tpl, "report", Report);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "Set", Set);
	Nan::SetPrototypeMethod(tpl, "set", Set);

	Nan::SetPrototypeMethod(tpl, "ShallowCopy", ShallowCopy);
	Nan::SetPrototypeMethod(tpl, "shallowCopy", ShallowCopy);

	ptpl.Reset( tpl );
}

void VtkInformationExecutivePortKeyWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
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
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkInformationExecutivePortKeyWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInformationExecutivePortKeyWrap *wrapper = ObjectWrap::Unwrap<VtkInformationExecutivePortKeyWrap>(info.Holder());
	vtkInformationExecutivePortKey *native = (vtkInformationExecutivePortKey *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkInformationExecutivePortKeyWrap::GetExecutive(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInformationExecutivePortKeyWrap *wrapper = ObjectWrap::Unwrap<VtkInformationExecutivePortKeyWrap>(info.Holder());
	vtkInformationExecutivePortKey *native = (vtkInformationExecutivePortKey *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkInformationWrap::ptpl))->HasInstance(info[0]))
	{
		VtkInformationWrap *a0 = ObjectWrap::Unwrap<VtkInformationWrap>(info[0]->ToObject());
		vtkExecutive * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetExecutive(
			(vtkInformation *) a0->native.GetPointer()
		);
			VtkExecutiveWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkExecutiveWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkExecutiveWrap *w = new VtkExecutiveWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkInformationExecutivePortKeyWrap::GetPort(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInformationExecutivePortKeyWrap *wrapper = ObjectWrap::Unwrap<VtkInformationExecutivePortKeyWrap>(info.Holder());
	vtkInformationExecutivePortKey *native = (vtkInformationExecutivePortKey *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkInformationWrap::ptpl))->HasInstance(info[0]))
	{
		VtkInformationWrap *a0 = ObjectWrap::Unwrap<VtkInformationWrap>(info[0]->ToObject());
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetPort(
			(vtkInformation *) a0->native.GetPointer()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkInformationExecutivePortKeyWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInformationExecutivePortKeyWrap *wrapper = ObjectWrap::Unwrap<VtkInformationExecutivePortKeyWrap>(info.Holder());
	vtkInformationExecutivePortKey *native = (vtkInformationExecutivePortKey *)wrapper->native.GetPointer();
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

void VtkInformationExecutivePortKeyWrap::MakeKey(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInformationExecutivePortKeyWrap *wrapper = ObjectWrap::Unwrap<VtkInformationExecutivePortKeyWrap>(info.Holder());
	vtkInformationExecutivePortKey *native = (vtkInformationExecutivePortKey *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() > 1 && info[1]->IsString())
		{
			Nan::Utf8String a1(info[1]);
			vtkInformationExecutivePortKey * r;
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			r = native->MakeKey(
				*a0,
				*a1
			);
				VtkInformationExecutivePortKeyWrap::InitPtpl();
			v8::Local<v8::Value> argv[1] =
				{ Nan::New(vtkNodeJsNoWrap) };
			v8::Local<v8::Function> cons =
				Nan::New<v8::FunctionTemplate>(VtkInformationExecutivePortKeyWrap::ptpl)->GetFunction();
			v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
			VtkInformationExecutivePortKeyWrap *w = new VtkInformationExecutivePortKeyWrap();
			w->native = r;
			w->Wrap(wo);
			info.GetReturnValue().Set(wo);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkInformationExecutivePortKeyWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInformationExecutivePortKeyWrap *wrapper = ObjectWrap::Unwrap<VtkInformationExecutivePortKeyWrap>(info.Holder());
	vtkInformationExecutivePortKey *native = (vtkInformationExecutivePortKey *)wrapper->native.GetPointer();
	vtkInformationExecutivePortKey * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkInformationExecutivePortKeyWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkInformationExecutivePortKeyWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkInformationExecutivePortKeyWrap *w = new VtkInformationExecutivePortKeyWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkInformationExecutivePortKeyWrap::Report(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInformationExecutivePortKeyWrap *wrapper = ObjectWrap::Unwrap<VtkInformationExecutivePortKeyWrap>(info.Holder());
	vtkInformationExecutivePortKey *native = (vtkInformationExecutivePortKey *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkInformationWrap::ptpl))->HasInstance(info[0]))
	{
		VtkInformationWrap *a0 = ObjectWrap::Unwrap<VtkInformationWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsObject() && (Nan::New(VtkGarbageCollectorWrap::ptpl))->HasInstance(info[1]))
		{
			VtkGarbageCollectorWrap *a1 = ObjectWrap::Unwrap<VtkGarbageCollectorWrap>(info[1]->ToObject());
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->Report(
				(vtkInformation *) a0->native.GetPointer(),
				(vtkGarbageCollector *) a1->native.GetPointer()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkInformationExecutivePortKeyWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInformationExecutivePortKeyWrap *wrapper = ObjectWrap::Unwrap<VtkInformationExecutivePortKeyWrap>(info.Holder());
	vtkInformationExecutivePortKey *native = (vtkInformationExecutivePortKey *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkInformationExecutivePortKey * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkInformationExecutivePortKeyWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkInformationExecutivePortKeyWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkInformationExecutivePortKeyWrap *w = new VtkInformationExecutivePortKeyWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkInformationExecutivePortKeyWrap::Set(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInformationExecutivePortKeyWrap *wrapper = ObjectWrap::Unwrap<VtkInformationExecutivePortKeyWrap>(info.Holder());
	vtkInformationExecutivePortKey *native = (vtkInformationExecutivePortKey *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkInformationWrap::ptpl))->HasInstance(info[0]))
	{
		VtkInformationWrap *a0 = ObjectWrap::Unwrap<VtkInformationWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsObject() && (Nan::New(VtkExecutiveWrap::ptpl))->HasInstance(info[1]))
		{
			VtkExecutiveWrap *a1 = ObjectWrap::Unwrap<VtkExecutiveWrap>(info[1]->ToObject());
			if(info.Length() > 2 && info[2]->IsInt32())
			{
				if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				native->Set(
					(vtkInformation *) a0->native.GetPointer(),
					(vtkExecutive *) a1->native.GetPointer(),
					info[2]->Int32Value()
				);
				return;
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkInformationExecutivePortKeyWrap::ShallowCopy(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInformationExecutivePortKeyWrap *wrapper = ObjectWrap::Unwrap<VtkInformationExecutivePortKeyWrap>(info.Holder());
	vtkInformationExecutivePortKey *native = (vtkInformationExecutivePortKey *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkInformationWrap::ptpl))->HasInstance(info[0]))
	{
		VtkInformationWrap *a0 = ObjectWrap::Unwrap<VtkInformationWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsObject() && (Nan::New(VtkInformationWrap::ptpl))->HasInstance(info[1]))
		{
			VtkInformationWrap *a1 = ObjectWrap::Unwrap<VtkInformationWrap>(info[1]->ToObject());
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->ShallowCopy(
				(vtkInformation *) a0->native.GetPointer(),
				(vtkInformation *) a1->native.GetPointer()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}
