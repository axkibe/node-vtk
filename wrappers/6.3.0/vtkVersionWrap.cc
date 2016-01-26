/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkObjectWrap.h"
#include "vtkVersionWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkVersionWrap::ptpl;

VtkVersionWrap::VtkVersionWrap()
{ }

VtkVersionWrap::VtkVersionWrap(vtkSmartPointer<vtkVersion> _native)
{ native = _native; }

VtkVersionWrap::~VtkVersionWrap()
{ }

void VtkVersionWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkVersion").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("Version").ToLocalChecked(), ConstructorGetter);
}

void VtkVersionWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkVersionWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkObjectWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkObjectWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkVersionWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetVTKBuildVersion", GetVTKBuildVersion);
	Nan::SetPrototypeMethod(tpl, "getVTKBuildVersion", GetVTKBuildVersion);

	Nan::SetPrototypeMethod(tpl, "GetVTKMajorVersion", GetVTKMajorVersion);
	Nan::SetPrototypeMethod(tpl, "getVTKMajorVersion", GetVTKMajorVersion);

	Nan::SetPrototypeMethod(tpl, "GetVTKMinorVersion", GetVTKMinorVersion);
	Nan::SetPrototypeMethod(tpl, "getVTKMinorVersion", GetVTKMinorVersion);

	Nan::SetPrototypeMethod(tpl, "GetVTKSourceVersion", GetVTKSourceVersion);
	Nan::SetPrototypeMethod(tpl, "getVTKSourceVersion", GetVTKSourceVersion);

	Nan::SetPrototypeMethod(tpl, "GetVTKVersion", GetVTKVersion);
	Nan::SetPrototypeMethod(tpl, "getVTKVersion", GetVTKVersion);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	ptpl.Reset( tpl );
}

void VtkVersionWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkVersion> native = vtkSmartPointer<vtkVersion>::New();
		VtkVersionWrap* obj = new VtkVersionWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkVersionWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVersionWrap *wrapper = ObjectWrap::Unwrap<VtkVersionWrap>(info.Holder());
	vtkVersion *native = (vtkVersion *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkVersionWrap::GetVTKBuildVersion(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVersionWrap *wrapper = ObjectWrap::Unwrap<VtkVersionWrap>(info.Holder());
	vtkVersion *native = (vtkVersion *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetVTKBuildVersion();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkVersionWrap::GetVTKMajorVersion(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVersionWrap *wrapper = ObjectWrap::Unwrap<VtkVersionWrap>(info.Holder());
	vtkVersion *native = (vtkVersion *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetVTKMajorVersion();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkVersionWrap::GetVTKMinorVersion(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVersionWrap *wrapper = ObjectWrap::Unwrap<VtkVersionWrap>(info.Holder());
	vtkVersion *native = (vtkVersion *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetVTKMinorVersion();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkVersionWrap::GetVTKSourceVersion(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVersionWrap *wrapper = ObjectWrap::Unwrap<VtkVersionWrap>(info.Holder());
	vtkVersion *native = (vtkVersion *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetVTKSourceVersion();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkVersionWrap::GetVTKVersion(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVersionWrap *wrapper = ObjectWrap::Unwrap<VtkVersionWrap>(info.Holder());
	vtkVersion *native = (vtkVersion *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetVTKVersion();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkVersionWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVersionWrap *wrapper = ObjectWrap::Unwrap<VtkVersionWrap>(info.Holder());
	vtkVersion *native = (vtkVersion *)wrapper->native.GetPointer();
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

void VtkVersionWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVersionWrap *wrapper = ObjectWrap::Unwrap<VtkVersionWrap>(info.Holder());
	vtkVersion *native = (vtkVersion *)wrapper->native.GetPointer();
	vtkVersion * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkVersionWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkVersionWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkVersionWrap *w = new VtkVersionWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkVersionWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVersionWrap *wrapper = ObjectWrap::Unwrap<VtkVersionWrap>(info.Holder());
	vtkVersion *native = (vtkVersion *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkVersion * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkVersionWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkVersionWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkVersionWrap *w = new VtkVersionWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

