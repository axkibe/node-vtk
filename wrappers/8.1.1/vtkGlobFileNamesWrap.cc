/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkObjectWrap.h"
#include "vtkGlobFileNamesWrap.h"
#include "vtkObjectBaseWrap.h"
#include "vtkStringArrayWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkGlobFileNamesWrap::ptpl;

VtkGlobFileNamesWrap::VtkGlobFileNamesWrap()
{ }

VtkGlobFileNamesWrap::VtkGlobFileNamesWrap(vtkSmartPointer<vtkGlobFileNames> _native)
{ native = _native; }

VtkGlobFileNamesWrap::~VtkGlobFileNamesWrap()
{ }

void VtkGlobFileNamesWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkGlobFileNames").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("GlobFileNames").ToLocalChecked(), ConstructorGetter);
}

void VtkGlobFileNamesWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkGlobFileNamesWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkObjectWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkObjectWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkGlobFileNamesWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "AddFileNames", AddFileNames);
	Nan::SetPrototypeMethod(tpl, "addFileNames", AddFileNames);

	Nan::SetPrototypeMethod(tpl, "GetDirectory", GetDirectory);
	Nan::SetPrototypeMethod(tpl, "getDirectory", GetDirectory);

	Nan::SetPrototypeMethod(tpl, "GetFileNames", GetFileNames);
	Nan::SetPrototypeMethod(tpl, "getFileNames", GetFileNames);

	Nan::SetPrototypeMethod(tpl, "GetNthFileName", GetNthFileName);
	Nan::SetPrototypeMethod(tpl, "getNthFileName", GetNthFileName);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfFileNames", GetNumberOfFileNames);
	Nan::SetPrototypeMethod(tpl, "getNumberOfFileNames", GetNumberOfFileNames);

	Nan::SetPrototypeMethod(tpl, "GetRecurse", GetRecurse);
	Nan::SetPrototypeMethod(tpl, "getRecurse", GetRecurse);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "RecurseOff", RecurseOff);
	Nan::SetPrototypeMethod(tpl, "recurseOff", RecurseOff);

	Nan::SetPrototypeMethod(tpl, "RecurseOn", RecurseOn);
	Nan::SetPrototypeMethod(tpl, "recurseOn", RecurseOn);

	Nan::SetPrototypeMethod(tpl, "Reset", Reset);
	Nan::SetPrototypeMethod(tpl, "reset", Reset);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetDirectory", SetDirectory);
	Nan::SetPrototypeMethod(tpl, "setDirectory", SetDirectory);

	Nan::SetPrototypeMethod(tpl, "SetRecurse", SetRecurse);
	Nan::SetPrototypeMethod(tpl, "setRecurse", SetRecurse);

#ifdef VTK_NODE_PLUS_VTKGLOBFILENAMESWRAP_INITPTPL
	VTK_NODE_PLUS_VTKGLOBFILENAMESWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkGlobFileNamesWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkGlobFileNames> native = vtkSmartPointer<vtkGlobFileNames>::New();
		VtkGlobFileNamesWrap* obj = new VtkGlobFileNamesWrap(native);
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

void VtkGlobFileNamesWrap::AddFileNames(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGlobFileNamesWrap *wrapper = ObjectWrap::Unwrap<VtkGlobFileNamesWrap>(info.Holder());
	vtkGlobFileNames *native = (vtkGlobFileNames *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->AddFileNames(
			*a0
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGlobFileNamesWrap::GetDirectory(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGlobFileNamesWrap *wrapper = ObjectWrap::Unwrap<VtkGlobFileNamesWrap>(info.Holder());
	vtkGlobFileNames *native = (vtkGlobFileNames *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDirectory();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkGlobFileNamesWrap::GetFileNames(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGlobFileNamesWrap *wrapper = ObjectWrap::Unwrap<VtkGlobFileNamesWrap>(info.Holder());
	vtkGlobFileNames *native = (vtkGlobFileNames *)wrapper->native.GetPointer();
	vtkStringArray * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetFileNames();
	VtkStringArrayWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkStringArrayWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkStringArrayWrap *w = new VtkStringArrayWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkGlobFileNamesWrap::GetNthFileName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGlobFileNamesWrap *wrapper = ObjectWrap::Unwrap<VtkGlobFileNamesWrap>(info.Holder());
	vtkGlobFileNames *native = (vtkGlobFileNames *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		char const * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetNthFileName(
			info[0]->Int32Value()
		);
		info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGlobFileNamesWrap::GetNumberOfFileNames(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGlobFileNamesWrap *wrapper = ObjectWrap::Unwrap<VtkGlobFileNamesWrap>(info.Holder());
	vtkGlobFileNames *native = (vtkGlobFileNames *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfFileNames();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkGlobFileNamesWrap::GetRecurse(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGlobFileNamesWrap *wrapper = ObjectWrap::Unwrap<VtkGlobFileNamesWrap>(info.Holder());
	vtkGlobFileNames *native = (vtkGlobFileNames *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetRecurse();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkGlobFileNamesWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGlobFileNamesWrap *wrapper = ObjectWrap::Unwrap<VtkGlobFileNamesWrap>(info.Holder());
	vtkGlobFileNames *native = (vtkGlobFileNames *)wrapper->native.GetPointer();
	vtkGlobFileNames * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkGlobFileNamesWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkGlobFileNamesWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkGlobFileNamesWrap *w = new VtkGlobFileNamesWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkGlobFileNamesWrap::RecurseOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGlobFileNamesWrap *wrapper = ObjectWrap::Unwrap<VtkGlobFileNamesWrap>(info.Holder());
	vtkGlobFileNames *native = (vtkGlobFileNames *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->RecurseOff();
}

void VtkGlobFileNamesWrap::RecurseOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGlobFileNamesWrap *wrapper = ObjectWrap::Unwrap<VtkGlobFileNamesWrap>(info.Holder());
	vtkGlobFileNames *native = (vtkGlobFileNames *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->RecurseOn();
}

void VtkGlobFileNamesWrap::Reset(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGlobFileNamesWrap *wrapper = ObjectWrap::Unwrap<VtkGlobFileNamesWrap>(info.Holder());
	vtkGlobFileNames *native = (vtkGlobFileNames *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Reset();
}

void VtkGlobFileNamesWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGlobFileNamesWrap *wrapper = ObjectWrap::Unwrap<VtkGlobFileNamesWrap>(info.Holder());
	vtkGlobFileNames *native = (vtkGlobFileNames *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectBaseWrap *a0 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[0]->ToObject());
		vtkGlobFileNames * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObjectBase *) a0->native.GetPointer()
		);
		VtkGlobFileNamesWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkGlobFileNamesWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkGlobFileNamesWrap *w = new VtkGlobFileNamesWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGlobFileNamesWrap::SetDirectory(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGlobFileNamesWrap *wrapper = ObjectWrap::Unwrap<VtkGlobFileNamesWrap>(info.Holder());
	vtkGlobFileNames *native = (vtkGlobFileNames *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetDirectory(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGlobFileNamesWrap::SetRecurse(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGlobFileNamesWrap *wrapper = ObjectWrap::Unwrap<VtkGlobFileNamesWrap>(info.Holder());
	vtkGlobFileNames *native = (vtkGlobFileNames *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetRecurse(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

