/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkImporterWrap.h"
#include "vtkOBJImporterWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkOBJImporterWrap::ptpl;

VtkOBJImporterWrap::VtkOBJImporterWrap()
{ }

VtkOBJImporterWrap::VtkOBJImporterWrap(vtkSmartPointer<vtkOBJImporter> _native)
{ native = _native; }

VtkOBJImporterWrap::~VtkOBJImporterWrap()
{ }

void VtkOBJImporterWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkOBJImporter").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("OBJImporter").ToLocalChecked(), ConstructorGetter);
}

void VtkOBJImporterWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkOBJImporterWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkImporterWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkImporterWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkOBJImporterWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetFileName", GetFileName);
	Nan::SetPrototypeMethod(tpl, "getFileName", GetFileName);

	Nan::SetPrototypeMethod(tpl, "GetFileNameMTL", GetFileNameMTL);
	Nan::SetPrototypeMethod(tpl, "getFileNameMTL", GetFileNameMTL);

	Nan::SetPrototypeMethod(tpl, "GetTexturePath", GetTexturePath);
	Nan::SetPrototypeMethod(tpl, "getTexturePath", GetTexturePath);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetFileName", SetFileName);
	Nan::SetPrototypeMethod(tpl, "setFileName", SetFileName);

	Nan::SetPrototypeMethod(tpl, "SetFileNameMTL", SetFileNameMTL);
	Nan::SetPrototypeMethod(tpl, "setFileNameMTL", SetFileNameMTL);

	Nan::SetPrototypeMethod(tpl, "SetTexturePath", SetTexturePath);
	Nan::SetPrototypeMethod(tpl, "setTexturePath", SetTexturePath);

	ptpl.Reset( tpl );
}

void VtkOBJImporterWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkOBJImporter> native = vtkSmartPointer<vtkOBJImporter>::New();
		VtkOBJImporterWrap* obj = new VtkOBJImporterWrap(native);
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

void VtkOBJImporterWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOBJImporterWrap *wrapper = ObjectWrap::Unwrap<VtkOBJImporterWrap>(info.Holder());
	vtkOBJImporter *native = (vtkOBJImporter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkOBJImporterWrap::GetFileName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOBJImporterWrap *wrapper = ObjectWrap::Unwrap<VtkOBJImporterWrap>(info.Holder());
	vtkOBJImporter *native = (vtkOBJImporter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetFileName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkOBJImporterWrap::GetFileNameMTL(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOBJImporterWrap *wrapper = ObjectWrap::Unwrap<VtkOBJImporterWrap>(info.Holder());
	vtkOBJImporter *native = (vtkOBJImporter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetFileNameMTL();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkOBJImporterWrap::GetTexturePath(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOBJImporterWrap *wrapper = ObjectWrap::Unwrap<VtkOBJImporterWrap>(info.Holder());
	vtkOBJImporter *native = (vtkOBJImporter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTexturePath();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkOBJImporterWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOBJImporterWrap *wrapper = ObjectWrap::Unwrap<VtkOBJImporterWrap>(info.Holder());
	vtkOBJImporter *native = (vtkOBJImporter *)wrapper->native.GetPointer();
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

void VtkOBJImporterWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOBJImporterWrap *wrapper = ObjectWrap::Unwrap<VtkOBJImporterWrap>(info.Holder());
	vtkOBJImporter *native = (vtkOBJImporter *)wrapper->native.GetPointer();
	vtkOBJImporter * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkOBJImporterWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkOBJImporterWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkOBJImporterWrap *w = new VtkOBJImporterWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkOBJImporterWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOBJImporterWrap *wrapper = ObjectWrap::Unwrap<VtkOBJImporterWrap>(info.Holder());
	vtkOBJImporter *native = (vtkOBJImporter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkOBJImporter * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		VtkOBJImporterWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkOBJImporterWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkOBJImporterWrap *w = new VtkOBJImporterWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkOBJImporterWrap::SetFileName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOBJImporterWrap *wrapper = ObjectWrap::Unwrap<VtkOBJImporterWrap>(info.Holder());
	vtkOBJImporter *native = (vtkOBJImporter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetFileName(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkOBJImporterWrap::SetFileNameMTL(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOBJImporterWrap *wrapper = ObjectWrap::Unwrap<VtkOBJImporterWrap>(info.Holder());
	vtkOBJImporter *native = (vtkOBJImporter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetFileNameMTL(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkOBJImporterWrap::SetTexturePath(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOBJImporterWrap *wrapper = ObjectWrap::Unwrap<VtkOBJImporterWrap>(info.Holder());
	vtkOBJImporter *native = (vtkOBJImporter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetTexturePath(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

