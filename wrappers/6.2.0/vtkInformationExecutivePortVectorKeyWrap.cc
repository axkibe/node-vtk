/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkInformationKeyWrap.h"
#include "vtkInformationExecutivePortVectorKeyWrap.h"
#include "vtkObjectWrap.h"
#include "vtkInformationWrap.h"
#include "vtkExecutiveWrap.h"
#include "vtkGarbageCollectorWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkInformationExecutivePortVectorKeyWrap::ptpl;

VtkInformationExecutivePortVectorKeyWrap::VtkInformationExecutivePortVectorKeyWrap()
{ }

VtkInformationExecutivePortVectorKeyWrap::VtkInformationExecutivePortVectorKeyWrap(vtkSmartPointer<vtkInformationExecutivePortVectorKey> _native)
{ native = _native; }

VtkInformationExecutivePortVectorKeyWrap::~VtkInformationExecutivePortVectorKeyWrap()
{ }

void VtkInformationExecutivePortVectorKeyWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkInformationExecutivePortVectorKey").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("InformationExecutivePortVectorKey").ToLocalChecked(), ConstructorGetter);
}

void VtkInformationExecutivePortVectorKeyWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkInformationExecutivePortVectorKeyWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkInformationKeyWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkInformationKeyWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkInformationExecutivePortVectorKeyWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "Append", Append);
	Nan::SetPrototypeMethod(tpl, "append", Append);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "Length", Length);
	Nan::SetPrototypeMethod(tpl, "length", Length);

	Nan::SetPrototypeMethod(tpl, "MakeKey", MakeKey);
	Nan::SetPrototypeMethod(tpl, "makeKey", MakeKey);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "Remove", Remove);
	Nan::SetPrototypeMethod(tpl, "remove", Remove);

	Nan::SetPrototypeMethod(tpl, "Report", Report);
	Nan::SetPrototypeMethod(tpl, "report", Report);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "ShallowCopy", ShallowCopy);
	Nan::SetPrototypeMethod(tpl, "shallowCopy", ShallowCopy);

	ptpl.Reset( tpl );
}

void VtkInformationExecutivePortVectorKeyWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
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

void VtkInformationExecutivePortVectorKeyWrap::Append(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInformationExecutivePortVectorKeyWrap *wrapper = ObjectWrap::Unwrap<VtkInformationExecutivePortVectorKeyWrap>(info.Holder());
	vtkInformationExecutivePortVectorKey *native = (vtkInformationExecutivePortVectorKey *)wrapper->native.GetPointer();
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
				native->Append(
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

void VtkInformationExecutivePortVectorKeyWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInformationExecutivePortVectorKeyWrap *wrapper = ObjectWrap::Unwrap<VtkInformationExecutivePortVectorKeyWrap>(info.Holder());
	vtkInformationExecutivePortVectorKey *native = (vtkInformationExecutivePortVectorKey *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkInformationExecutivePortVectorKeyWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInformationExecutivePortVectorKeyWrap *wrapper = ObjectWrap::Unwrap<VtkInformationExecutivePortVectorKeyWrap>(info.Holder());
	vtkInformationExecutivePortVectorKey *native = (vtkInformationExecutivePortVectorKey *)wrapper->native.GetPointer();
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

void VtkInformationExecutivePortVectorKeyWrap::Length(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInformationExecutivePortVectorKeyWrap *wrapper = ObjectWrap::Unwrap<VtkInformationExecutivePortVectorKeyWrap>(info.Holder());
	vtkInformationExecutivePortVectorKey *native = (vtkInformationExecutivePortVectorKey *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkInformationWrap::ptpl))->HasInstance(info[0]))
	{
		VtkInformationWrap *a0 = ObjectWrap::Unwrap<VtkInformationWrap>(info[0]->ToObject());
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->Length(
			(vtkInformation *) a0->native.GetPointer()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkInformationExecutivePortVectorKeyWrap::MakeKey(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInformationExecutivePortVectorKeyWrap *wrapper = ObjectWrap::Unwrap<VtkInformationExecutivePortVectorKeyWrap>(info.Holder());
	vtkInformationExecutivePortVectorKey *native = (vtkInformationExecutivePortVectorKey *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() > 1 && info[1]->IsString())
		{
			Nan::Utf8String a1(info[1]);
			vtkInformationExecutivePortVectorKey * r;
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			r = native->MakeKey(
				*a0,
				*a1
			);
				VtkInformationExecutivePortVectorKeyWrap::InitPtpl();
			v8::Local<v8::Value> argv[1] =
				{ Nan::New(vtkNodeJsNoWrap) };
			v8::Local<v8::Function> cons =
				Nan::New<v8::FunctionTemplate>(VtkInformationExecutivePortVectorKeyWrap::ptpl)->GetFunction();
			v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
			VtkInformationExecutivePortVectorKeyWrap *w = new VtkInformationExecutivePortVectorKeyWrap();
			w->native = r;
			w->Wrap(wo);
			info.GetReturnValue().Set(wo);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkInformationExecutivePortVectorKeyWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInformationExecutivePortVectorKeyWrap *wrapper = ObjectWrap::Unwrap<VtkInformationExecutivePortVectorKeyWrap>(info.Holder());
	vtkInformationExecutivePortVectorKey *native = (vtkInformationExecutivePortVectorKey *)wrapper->native.GetPointer();
	vtkInformationExecutivePortVectorKey * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkInformationExecutivePortVectorKeyWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkInformationExecutivePortVectorKeyWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkInformationExecutivePortVectorKeyWrap *w = new VtkInformationExecutivePortVectorKeyWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkInformationExecutivePortVectorKeyWrap::Remove(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInformationExecutivePortVectorKeyWrap *wrapper = ObjectWrap::Unwrap<VtkInformationExecutivePortVectorKeyWrap>(info.Holder());
	vtkInformationExecutivePortVectorKey *native = (vtkInformationExecutivePortVectorKey *)wrapper->native.GetPointer();
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
				native->Remove(
					(vtkInformation *) a0->native.GetPointer(),
					(vtkExecutive *) a1->native.GetPointer(),
					info[2]->Int32Value()
				);
				return;
			}
		}
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->Remove(
			(vtkInformation *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkInformationExecutivePortVectorKeyWrap::Report(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInformationExecutivePortVectorKeyWrap *wrapper = ObjectWrap::Unwrap<VtkInformationExecutivePortVectorKeyWrap>(info.Holder());
	vtkInformationExecutivePortVectorKey *native = (vtkInformationExecutivePortVectorKey *)wrapper->native.GetPointer();
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

void VtkInformationExecutivePortVectorKeyWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInformationExecutivePortVectorKeyWrap *wrapper = ObjectWrap::Unwrap<VtkInformationExecutivePortVectorKeyWrap>(info.Holder());
	vtkInformationExecutivePortVectorKey *native = (vtkInformationExecutivePortVectorKey *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkInformationExecutivePortVectorKey * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkInformationExecutivePortVectorKeyWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkInformationExecutivePortVectorKeyWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkInformationExecutivePortVectorKeyWrap *w = new VtkInformationExecutivePortVectorKeyWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkInformationExecutivePortVectorKeyWrap::ShallowCopy(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkInformationExecutivePortVectorKeyWrap *wrapper = ObjectWrap::Unwrap<VtkInformationExecutivePortVectorKeyWrap>(info.Holder());
	vtkInformationExecutivePortVectorKey *native = (vtkInformationExecutivePortVectorKey *)wrapper->native.GetPointer();
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

