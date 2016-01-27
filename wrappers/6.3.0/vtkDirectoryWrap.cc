/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkObjectWrap.h"
#include "vtkDirectoryWrap.h"
#include "vtkStringArrayWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkDirectoryWrap::ptpl;

VtkDirectoryWrap::VtkDirectoryWrap()
{ }

VtkDirectoryWrap::VtkDirectoryWrap(vtkSmartPointer<vtkDirectory> _native)
{ native = _native; }

VtkDirectoryWrap::~VtkDirectoryWrap()
{ }

void VtkDirectoryWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkDirectory").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("Directory").ToLocalChecked(), ConstructorGetter);
}

void VtkDirectoryWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkDirectoryWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkObjectWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkObjectWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkDirectoryWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "DeleteDirectory", DeleteDirectory);
	Nan::SetPrototypeMethod(tpl, "deleteDirectory", DeleteDirectory);

	Nan::SetPrototypeMethod(tpl, "FileIsDirectory", FileIsDirectory);
	Nan::SetPrototypeMethod(tpl, "fileIsDirectory", FileIsDirectory);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetFiles", GetFiles);
	Nan::SetPrototypeMethod(tpl, "getFiles", GetFiles);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "MakeDirectory", MakeDirectory);
	Nan::SetPrototypeMethod(tpl, "makeDirectory", MakeDirectory);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "Open", Open);
	Nan::SetPrototypeMethod(tpl, "open", Open);

	Nan::SetPrototypeMethod(tpl, "Rename", Rename);
	Nan::SetPrototypeMethod(tpl, "rename", Rename);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	ptpl.Reset( tpl );
}

void VtkDirectoryWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkDirectory> native = vtkSmartPointer<vtkDirectory>::New();
		VtkDirectoryWrap* obj = new VtkDirectoryWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkDirectoryWrap::DeleteDirectory(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDirectoryWrap *wrapper = ObjectWrap::Unwrap<VtkDirectoryWrap>(info.Holder());
	vtkDirectory *native = (vtkDirectory *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->DeleteDirectory(
			*a0
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDirectoryWrap::FileIsDirectory(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDirectoryWrap *wrapper = ObjectWrap::Unwrap<VtkDirectoryWrap>(info.Holder());
	vtkDirectory *native = (vtkDirectory *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->FileIsDirectory(
			*a0
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDirectoryWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDirectoryWrap *wrapper = ObjectWrap::Unwrap<VtkDirectoryWrap>(info.Holder());
	vtkDirectory *native = (vtkDirectory *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkDirectoryWrap::GetFiles(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDirectoryWrap *wrapper = ObjectWrap::Unwrap<VtkDirectoryWrap>(info.Holder());
	vtkDirectory *native = (vtkDirectory *)wrapper->native.GetPointer();
	vtkStringArray * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetFiles();
		VtkStringArrayWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkStringArrayWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkStringArrayWrap *w = new VtkStringArrayWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkDirectoryWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDirectoryWrap *wrapper = ObjectWrap::Unwrap<VtkDirectoryWrap>(info.Holder());
	vtkDirectory *native = (vtkDirectory *)wrapper->native.GetPointer();
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

void VtkDirectoryWrap::MakeDirectory(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDirectoryWrap *wrapper = ObjectWrap::Unwrap<VtkDirectoryWrap>(info.Holder());
	vtkDirectory *native = (vtkDirectory *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->MakeDirectory(
			*a0
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDirectoryWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDirectoryWrap *wrapper = ObjectWrap::Unwrap<VtkDirectoryWrap>(info.Holder());
	vtkDirectory *native = (vtkDirectory *)wrapper->native.GetPointer();
	vtkDirectory * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkDirectoryWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkDirectoryWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkDirectoryWrap *w = new VtkDirectoryWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkDirectoryWrap::Open(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDirectoryWrap *wrapper = ObjectWrap::Unwrap<VtkDirectoryWrap>(info.Holder());
	vtkDirectory *native = (vtkDirectory *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->Open(
			*a0
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDirectoryWrap::Rename(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDirectoryWrap *wrapper = ObjectWrap::Unwrap<VtkDirectoryWrap>(info.Holder());
	vtkDirectory *native = (vtkDirectory *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() > 1 && info[1]->IsString())
		{
			Nan::Utf8String a1(info[1]);
			int r;
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			r = native->Rename(
				*a0,
				*a1
			);
			info.GetReturnValue().Set(Nan::New(r));
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDirectoryWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDirectoryWrap *wrapper = ObjectWrap::Unwrap<VtkDirectoryWrap>(info.Holder());
	vtkDirectory *native = (vtkDirectory *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkDirectory * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkDirectoryWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkDirectoryWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkDirectoryWrap *w = new VtkDirectoryWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

