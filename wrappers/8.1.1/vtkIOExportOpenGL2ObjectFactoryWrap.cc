/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkObjectFactoryWrap.h"
#include "vtkIOExportOpenGL2ObjectFactoryWrap.h"
#include "vtkObjectBaseWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkIOExportOpenGL2ObjectFactoryWrap::ptpl;

VtkIOExportOpenGL2ObjectFactoryWrap::VtkIOExportOpenGL2ObjectFactoryWrap()
{ }

VtkIOExportOpenGL2ObjectFactoryWrap::VtkIOExportOpenGL2ObjectFactoryWrap(vtkSmartPointer<vtkIOExportOpenGL2ObjectFactory> _native)
{ native = _native; }

VtkIOExportOpenGL2ObjectFactoryWrap::~VtkIOExportOpenGL2ObjectFactoryWrap()
{ }

void VtkIOExportOpenGL2ObjectFactoryWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkIOExportOpenGL2ObjectFactory").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("IOExportOpenGL2ObjectFactory").ToLocalChecked(), ConstructorGetter);
}

void VtkIOExportOpenGL2ObjectFactoryWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkIOExportOpenGL2ObjectFactoryWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkObjectFactoryWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkObjectFactoryWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkIOExportOpenGL2ObjectFactoryWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetDescription", GetDescription);
	Nan::SetPrototypeMethod(tpl, "getDescription", GetDescription);

	Nan::SetPrototypeMethod(tpl, "GetVTKSourceVersion", GetVTKSourceVersion);
	Nan::SetPrototypeMethod(tpl, "getVTKSourceVersion", GetVTKSourceVersion);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

#ifdef VTK_NODE_PLUS_VTKIOEXPORTOPENGL2OBJECTFACTORYWRAP_INITPTPL
	VTK_NODE_PLUS_VTKIOEXPORTOPENGL2OBJECTFACTORYWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkIOExportOpenGL2ObjectFactoryWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkIOExportOpenGL2ObjectFactory> native = vtkSmartPointer<vtkIOExportOpenGL2ObjectFactory>::New();
		VtkIOExportOpenGL2ObjectFactoryWrap* obj = new VtkIOExportOpenGL2ObjectFactoryWrap(native);
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

void VtkIOExportOpenGL2ObjectFactoryWrap::GetDescription(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkIOExportOpenGL2ObjectFactoryWrap *wrapper = ObjectWrap::Unwrap<VtkIOExportOpenGL2ObjectFactoryWrap>(info.Holder());
	vtkIOExportOpenGL2ObjectFactory *native = (vtkIOExportOpenGL2ObjectFactory *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDescription();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkIOExportOpenGL2ObjectFactoryWrap::GetVTKSourceVersion(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkIOExportOpenGL2ObjectFactoryWrap *wrapper = ObjectWrap::Unwrap<VtkIOExportOpenGL2ObjectFactoryWrap>(info.Holder());
	vtkIOExportOpenGL2ObjectFactory *native = (vtkIOExportOpenGL2ObjectFactory *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetVTKSourceVersion();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkIOExportOpenGL2ObjectFactoryWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkIOExportOpenGL2ObjectFactoryWrap *wrapper = ObjectWrap::Unwrap<VtkIOExportOpenGL2ObjectFactoryWrap>(info.Holder());
	vtkIOExportOpenGL2ObjectFactory *native = (vtkIOExportOpenGL2ObjectFactory *)wrapper->native.GetPointer();
	vtkIOExportOpenGL2ObjectFactory * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkIOExportOpenGL2ObjectFactoryWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkIOExportOpenGL2ObjectFactoryWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkIOExportOpenGL2ObjectFactoryWrap *w = new VtkIOExportOpenGL2ObjectFactoryWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkIOExportOpenGL2ObjectFactoryWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkIOExportOpenGL2ObjectFactoryWrap *wrapper = ObjectWrap::Unwrap<VtkIOExportOpenGL2ObjectFactoryWrap>(info.Holder());
	vtkIOExportOpenGL2ObjectFactory *native = (vtkIOExportOpenGL2ObjectFactory *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectBaseWrap *a0 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[0]->ToObject());
		vtkIOExportOpenGL2ObjectFactory * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObjectBase *) a0->native.GetPointer()
		);
		VtkIOExportOpenGL2ObjectFactoryWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkIOExportOpenGL2ObjectFactoryWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkIOExportOpenGL2ObjectFactoryWrap *w = new VtkIOExportOpenGL2ObjectFactoryWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

