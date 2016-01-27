/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkObjectWrap.h"
#include "vtkOpenGLHardwareSupportWrap.h"
#include "vtkOpenGLExtensionManagerWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkOpenGLHardwareSupportWrap::ptpl;

VtkOpenGLHardwareSupportWrap::VtkOpenGLHardwareSupportWrap()
{ }

VtkOpenGLHardwareSupportWrap::VtkOpenGLHardwareSupportWrap(vtkSmartPointer<vtkOpenGLHardwareSupport> _native)
{ native = _native; }

VtkOpenGLHardwareSupportWrap::~VtkOpenGLHardwareSupportWrap()
{ }

void VtkOpenGLHardwareSupportWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkOpenGLHardwareSupport").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("OpenGLHardwareSupport").ToLocalChecked(), ConstructorGetter);
}

void VtkOpenGLHardwareSupportWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkOpenGLHardwareSupportWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkObjectWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkObjectWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkOpenGLHardwareSupportWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetExtensionManager", GetExtensionManager);
	Nan::SetPrototypeMethod(tpl, "getExtensionManager", GetExtensionManager);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfFixedTextureUnits", GetNumberOfFixedTextureUnits);
	Nan::SetPrototypeMethod(tpl, "getNumberOfFixedTextureUnits", GetNumberOfFixedTextureUnits);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfTextureUnits", GetNumberOfTextureUnits);
	Nan::SetPrototypeMethod(tpl, "getNumberOfTextureUnits", GetNumberOfTextureUnits);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetExtensionManager", SetExtensionManager);
	Nan::SetPrototypeMethod(tpl, "setExtensionManager", SetExtensionManager);

	ptpl.Reset( tpl );
}

void VtkOpenGLHardwareSupportWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkOpenGLHardwareSupport> native = vtkSmartPointer<vtkOpenGLHardwareSupport>::New();
		VtkOpenGLHardwareSupportWrap* obj = new VtkOpenGLHardwareSupportWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkOpenGLHardwareSupportWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOpenGLHardwareSupportWrap *wrapper = ObjectWrap::Unwrap<VtkOpenGLHardwareSupportWrap>(info.Holder());
	vtkOpenGLHardwareSupport *native = (vtkOpenGLHardwareSupport *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkOpenGLHardwareSupportWrap::GetExtensionManager(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOpenGLHardwareSupportWrap *wrapper = ObjectWrap::Unwrap<VtkOpenGLHardwareSupportWrap>(info.Holder());
	vtkOpenGLHardwareSupport *native = (vtkOpenGLHardwareSupport *)wrapper->native.GetPointer();
	vtkOpenGLExtensionManager * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetExtensionManager();
		VtkOpenGLExtensionManagerWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkOpenGLExtensionManagerWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkOpenGLExtensionManagerWrap *w = new VtkOpenGLExtensionManagerWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkOpenGLHardwareSupportWrap::GetNumberOfFixedTextureUnits(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOpenGLHardwareSupportWrap *wrapper = ObjectWrap::Unwrap<VtkOpenGLHardwareSupportWrap>(info.Holder());
	vtkOpenGLHardwareSupport *native = (vtkOpenGLHardwareSupport *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfFixedTextureUnits();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkOpenGLHardwareSupportWrap::GetNumberOfTextureUnits(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOpenGLHardwareSupportWrap *wrapper = ObjectWrap::Unwrap<VtkOpenGLHardwareSupportWrap>(info.Holder());
	vtkOpenGLHardwareSupport *native = (vtkOpenGLHardwareSupport *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfTextureUnits();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkOpenGLHardwareSupportWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOpenGLHardwareSupportWrap *wrapper = ObjectWrap::Unwrap<VtkOpenGLHardwareSupportWrap>(info.Holder());
	vtkOpenGLHardwareSupport *native = (vtkOpenGLHardwareSupport *)wrapper->native.GetPointer();
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

void VtkOpenGLHardwareSupportWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOpenGLHardwareSupportWrap *wrapper = ObjectWrap::Unwrap<VtkOpenGLHardwareSupportWrap>(info.Holder());
	vtkOpenGLHardwareSupport *native = (vtkOpenGLHardwareSupport *)wrapper->native.GetPointer();
	vtkOpenGLHardwareSupport * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkOpenGLHardwareSupportWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkOpenGLHardwareSupportWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkOpenGLHardwareSupportWrap *w = new VtkOpenGLHardwareSupportWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkOpenGLHardwareSupportWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOpenGLHardwareSupportWrap *wrapper = ObjectWrap::Unwrap<VtkOpenGLHardwareSupportWrap>(info.Holder());
	vtkOpenGLHardwareSupport *native = (vtkOpenGLHardwareSupport *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkOpenGLHardwareSupport * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkOpenGLHardwareSupportWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkOpenGLHardwareSupportWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkOpenGLHardwareSupportWrap *w = new VtkOpenGLHardwareSupportWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkOpenGLHardwareSupportWrap::SetExtensionManager(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOpenGLHardwareSupportWrap *wrapper = ObjectWrap::Unwrap<VtkOpenGLHardwareSupportWrap>(info.Holder());
	vtkOpenGLHardwareSupport *native = (vtkOpenGLHardwareSupport *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkOpenGLExtensionManagerWrap::ptpl))->HasInstance(info[0]))
	{
		VtkOpenGLExtensionManagerWrap *a0 = ObjectWrap::Unwrap<VtkOpenGLExtensionManagerWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetExtensionManager(
			(vtkOpenGLExtensionManager *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

