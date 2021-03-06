/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkVolumeMapperWrap.h"
#include "vtkOSPRayVolumeInterfaceWrap.h"
#include "vtkObjectBaseWrap.h"
#include "vtkRendererWrap.h"
#include "vtkVolumeWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkOSPRayVolumeInterfaceWrap::ptpl;

VtkOSPRayVolumeInterfaceWrap::VtkOSPRayVolumeInterfaceWrap()
{ }

VtkOSPRayVolumeInterfaceWrap::VtkOSPRayVolumeInterfaceWrap(vtkSmartPointer<vtkOSPRayVolumeInterface> _native)
{ native = _native; }

VtkOSPRayVolumeInterfaceWrap::~VtkOSPRayVolumeInterfaceWrap()
{ }

void VtkOSPRayVolumeInterfaceWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkOSPRayVolumeInterface").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("OSPRayVolumeInterface").ToLocalChecked(), ConstructorGetter);
}

void VtkOSPRayVolumeInterfaceWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkOSPRayVolumeInterfaceWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkVolumeMapperWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkVolumeMapperWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkOSPRayVolumeInterfaceWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "Render", Render);
	Nan::SetPrototypeMethod(tpl, "render", Render);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

#ifdef VTK_NODE_PLUS_VTKOSPRAYVOLUMEINTERFACEWRAP_INITPTPL
	VTK_NODE_PLUS_VTKOSPRAYVOLUMEINTERFACEWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkOSPRayVolumeInterfaceWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkOSPRayVolumeInterface> native = vtkSmartPointer<vtkOSPRayVolumeInterface>::New();
		VtkOSPRayVolumeInterfaceWrap* obj = new VtkOSPRayVolumeInterfaceWrap(native);
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

void VtkOSPRayVolumeInterfaceWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOSPRayVolumeInterfaceWrap *wrapper = ObjectWrap::Unwrap<VtkOSPRayVolumeInterfaceWrap>(info.Holder());
	vtkOSPRayVolumeInterface *native = (vtkOSPRayVolumeInterface *)wrapper->native.GetPointer();
	vtkOSPRayVolumeInterface * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkOSPRayVolumeInterfaceWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkOSPRayVolumeInterfaceWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkOSPRayVolumeInterfaceWrap *w = new VtkOSPRayVolumeInterfaceWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkOSPRayVolumeInterfaceWrap::Render(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOSPRayVolumeInterfaceWrap *wrapper = ObjectWrap::Unwrap<VtkOSPRayVolumeInterfaceWrap>(info.Holder());
	vtkOSPRayVolumeInterface *native = (vtkOSPRayVolumeInterface *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkRendererWrap::ptpl))->HasInstance(info[0]))
	{
		VtkRendererWrap *a0 = ObjectWrap::Unwrap<VtkRendererWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsObject() && (Nan::New(VtkVolumeWrap::ptpl))->HasInstance(info[1]))
		{
			VtkVolumeWrap *a1 = ObjectWrap::Unwrap<VtkVolumeWrap>(info[1]->ToObject());
						if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->Render(
				(vtkRenderer *) a0->native.GetPointer(),
				(vtkVolume *) a1->native.GetPointer()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkOSPRayVolumeInterfaceWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOSPRayVolumeInterfaceWrap *wrapper = ObjectWrap::Unwrap<VtkOSPRayVolumeInterfaceWrap>(info.Holder());
	vtkOSPRayVolumeInterface *native = (vtkOSPRayVolumeInterface *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectBaseWrap *a0 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[0]->ToObject());
		vtkOSPRayVolumeInterface * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObjectBase *) a0->native.GetPointer()
		);
		VtkOSPRayVolumeInterfaceWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkOSPRayVolumeInterfaceWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkOSPRayVolumeInterfaceWrap *w = new VtkOSPRayVolumeInterfaceWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

