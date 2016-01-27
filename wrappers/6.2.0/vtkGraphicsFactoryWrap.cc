/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkObjectWrap.h"
#include "vtkGraphicsFactoryWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkGraphicsFactoryWrap::ptpl;

VtkGraphicsFactoryWrap::VtkGraphicsFactoryWrap()
{ }

VtkGraphicsFactoryWrap::VtkGraphicsFactoryWrap(vtkSmartPointer<vtkGraphicsFactory> _native)
{ native = _native; }

VtkGraphicsFactoryWrap::~VtkGraphicsFactoryWrap()
{ }

void VtkGraphicsFactoryWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkGraphicsFactory").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("GraphicsFactory").ToLocalChecked(), ConstructorGetter);
}

void VtkGraphicsFactoryWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkGraphicsFactoryWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkObjectWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkObjectWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkGraphicsFactoryWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "CreateInstance", CreateInstance);
	Nan::SetPrototypeMethod(tpl, "createInstance", CreateInstance);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetOffScreenOnlyMode", GetOffScreenOnlyMode);
	Nan::SetPrototypeMethod(tpl, "getOffScreenOnlyMode", GetOffScreenOnlyMode);

	Nan::SetPrototypeMethod(tpl, "GetRenderLibrary", GetRenderLibrary);
	Nan::SetPrototypeMethod(tpl, "getRenderLibrary", GetRenderLibrary);

	Nan::SetPrototypeMethod(tpl, "GetUseMesaClasses", GetUseMesaClasses);
	Nan::SetPrototypeMethod(tpl, "getUseMesaClasses", GetUseMesaClasses);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetOffScreenOnlyMode", SetOffScreenOnlyMode);
	Nan::SetPrototypeMethod(tpl, "setOffScreenOnlyMode", SetOffScreenOnlyMode);

	Nan::SetPrototypeMethod(tpl, "SetUseMesaClasses", SetUseMesaClasses);
	Nan::SetPrototypeMethod(tpl, "setUseMesaClasses", SetUseMesaClasses);

	ptpl.Reset( tpl );
}

void VtkGraphicsFactoryWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkGraphicsFactory> native = vtkSmartPointer<vtkGraphicsFactory>::New();
		VtkGraphicsFactoryWrap* obj = new VtkGraphicsFactoryWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkGraphicsFactoryWrap::CreateInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGraphicsFactoryWrap *wrapper = ObjectWrap::Unwrap<VtkGraphicsFactoryWrap>(info.Holder());
	vtkGraphicsFactory *native = (vtkGraphicsFactory *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
		vtkObject * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->CreateInstance(
			*a0
		);
			VtkObjectWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkObjectWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkObjectWrap *w = new VtkObjectWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGraphicsFactoryWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGraphicsFactoryWrap *wrapper = ObjectWrap::Unwrap<VtkGraphicsFactoryWrap>(info.Holder());
	vtkGraphicsFactory *native = (vtkGraphicsFactory *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkGraphicsFactoryWrap::GetOffScreenOnlyMode(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGraphicsFactoryWrap *wrapper = ObjectWrap::Unwrap<VtkGraphicsFactoryWrap>(info.Holder());
	vtkGraphicsFactory *native = (vtkGraphicsFactory *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOffScreenOnlyMode();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkGraphicsFactoryWrap::GetRenderLibrary(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGraphicsFactoryWrap *wrapper = ObjectWrap::Unwrap<VtkGraphicsFactoryWrap>(info.Holder());
	vtkGraphicsFactory *native = (vtkGraphicsFactory *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetRenderLibrary();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkGraphicsFactoryWrap::GetUseMesaClasses(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGraphicsFactoryWrap *wrapper = ObjectWrap::Unwrap<VtkGraphicsFactoryWrap>(info.Holder());
	vtkGraphicsFactory *native = (vtkGraphicsFactory *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetUseMesaClasses();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkGraphicsFactoryWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGraphicsFactoryWrap *wrapper = ObjectWrap::Unwrap<VtkGraphicsFactoryWrap>(info.Holder());
	vtkGraphicsFactory *native = (vtkGraphicsFactory *)wrapper->native.GetPointer();
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

void VtkGraphicsFactoryWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGraphicsFactoryWrap *wrapper = ObjectWrap::Unwrap<VtkGraphicsFactoryWrap>(info.Holder());
	vtkGraphicsFactory *native = (vtkGraphicsFactory *)wrapper->native.GetPointer();
	vtkGraphicsFactory * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkGraphicsFactoryWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkGraphicsFactoryWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkGraphicsFactoryWrap *w = new VtkGraphicsFactoryWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkGraphicsFactoryWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGraphicsFactoryWrap *wrapper = ObjectWrap::Unwrap<VtkGraphicsFactoryWrap>(info.Holder());
	vtkGraphicsFactory *native = (vtkGraphicsFactory *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkGraphicsFactory * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkGraphicsFactoryWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkGraphicsFactoryWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkGraphicsFactoryWrap *w = new VtkGraphicsFactoryWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGraphicsFactoryWrap::SetOffScreenOnlyMode(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGraphicsFactoryWrap *wrapper = ObjectWrap::Unwrap<VtkGraphicsFactoryWrap>(info.Holder());
	vtkGraphicsFactory *native = (vtkGraphicsFactory *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetOffScreenOnlyMode(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkGraphicsFactoryWrap::SetUseMesaClasses(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkGraphicsFactoryWrap *wrapper = ObjectWrap::Unwrap<VtkGraphicsFactoryWrap>(info.Holder());
	vtkGraphicsFactory *native = (vtkGraphicsFactory *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetUseMesaClasses(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

