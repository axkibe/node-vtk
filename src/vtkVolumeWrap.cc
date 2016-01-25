/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkProp3DWrap.h"
#include "vtkVolumeWrap.h"
#include "vtkObjectWrap.h"
#include "vtkAbstractVolumeMapperWrap.h"
#include "vtkVolumePropertyWrap.h"
#include "vtkPropCollectionWrap.h"
#include "vtkPropWrap.h"
#include "vtkViewportWrap.h"
#include "vtkWindowWrap.h"
#include "vtkRendererWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkVolumeWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkVolumeWrap::ptpl;

VtkVolumeWrap::VtkVolumeWrap()
{ }

VtkVolumeWrap::VtkVolumeWrap(vtkSmartPointer<vtkVolume> _native)
{ native = _native; }

VtkVolumeWrap::~VtkVolumeWrap()
{ }

void VtkVolumeWrap::Init(v8::Local<v8::Object> exports)
{
	if (!constructor.IsEmpty()) return;
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkProp3DWrap::Init( exports );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkProp3DWrap::ptpl));

	tpl->SetClassName(Nan::New("VtkVolumeWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );

	exports->Set(Nan::New("vtkVolume").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("Volume").ToLocalChecked(),tpl->GetFunction());
}

void VtkVolumeWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetMapper", GetMapper);
	Nan::SetPrototypeMethod(tpl, "getMapper", GetMapper);

	Nan::SetPrototypeMethod(tpl, "GetMaxXBound", GetMaxXBound);
	Nan::SetPrototypeMethod(tpl, "getMaxXBound", GetMaxXBound);

	Nan::SetPrototypeMethod(tpl, "GetMaxYBound", GetMaxYBound);
	Nan::SetPrototypeMethod(tpl, "getMaxYBound", GetMaxYBound);

	Nan::SetPrototypeMethod(tpl, "GetMaxZBound", GetMaxZBound);
	Nan::SetPrototypeMethod(tpl, "getMaxZBound", GetMaxZBound);

	Nan::SetPrototypeMethod(tpl, "GetMinXBound", GetMinXBound);
	Nan::SetPrototypeMethod(tpl, "getMinXBound", GetMinXBound);

	Nan::SetPrototypeMethod(tpl, "GetMinYBound", GetMinYBound);
	Nan::SetPrototypeMethod(tpl, "getMinYBound", GetMinYBound);

	Nan::SetPrototypeMethod(tpl, "GetMinZBound", GetMinZBound);
	Nan::SetPrototypeMethod(tpl, "getMinZBound", GetMinZBound);

	Nan::SetPrototypeMethod(tpl, "GetProperty", GetProperty);
	Nan::SetPrototypeMethod(tpl, "getProperty", GetProperty);

	Nan::SetPrototypeMethod(tpl, "GetVolumes", GetVolumes);
	Nan::SetPrototypeMethod(tpl, "getVolumes", GetVolumes);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "ReleaseGraphicsResources", ReleaseGraphicsResources);
	Nan::SetPrototypeMethod(tpl, "releaseGraphicsResources", ReleaseGraphicsResources);

	Nan::SetPrototypeMethod(tpl, "RenderVolumetricGeometry", RenderVolumetricGeometry);
	Nan::SetPrototypeMethod(tpl, "renderVolumetricGeometry", RenderVolumetricGeometry);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetMapper", SetMapper);
	Nan::SetPrototypeMethod(tpl, "setMapper", SetMapper);

	Nan::SetPrototypeMethod(tpl, "SetProperty", SetProperty);
	Nan::SetPrototypeMethod(tpl, "setProperty", SetProperty);

	Nan::SetPrototypeMethod(tpl, "ShallowCopy", ShallowCopy);
	Nan::SetPrototypeMethod(tpl, "shallowCopy", ShallowCopy);

	Nan::SetPrototypeMethod(tpl, "Update", Update);
	Nan::SetPrototypeMethod(tpl, "update", Update);

	Nan::SetPrototypeMethod(tpl, "UpdateTransferFunctions", UpdateTransferFunctions);
	Nan::SetPrototypeMethod(tpl, "updateTransferFunctions", UpdateTransferFunctions);

}

void VtkVolumeWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkVolume> native = vtkSmartPointer<vtkVolume>::New();
		VtkVolumeWrap* obj = new VtkVolumeWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkVolumeWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVolumeWrap *wrapper = ObjectWrap::Unwrap<VtkVolumeWrap>(info.Holder());
	vtkVolume *native = (vtkVolume *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkVolumeWrap::GetMapper(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVolumeWrap *wrapper = ObjectWrap::Unwrap<VtkVolumeWrap>(info.Holder());
	vtkVolume *native = (vtkVolume *)wrapper->native.GetPointer();
	vtkAbstractVolumeMapper * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMapper();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkAbstractVolumeMapperWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkAbstractVolumeMapperWrap *w = new VtkAbstractVolumeMapperWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkVolumeWrap::GetMaxXBound(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVolumeWrap *wrapper = ObjectWrap::Unwrap<VtkVolumeWrap>(info.Holder());
	vtkVolume *native = (vtkVolume *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMaxXBound();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkVolumeWrap::GetMaxYBound(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVolumeWrap *wrapper = ObjectWrap::Unwrap<VtkVolumeWrap>(info.Holder());
	vtkVolume *native = (vtkVolume *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMaxYBound();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkVolumeWrap::GetMaxZBound(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVolumeWrap *wrapper = ObjectWrap::Unwrap<VtkVolumeWrap>(info.Holder());
	vtkVolume *native = (vtkVolume *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMaxZBound();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkVolumeWrap::GetMinXBound(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVolumeWrap *wrapper = ObjectWrap::Unwrap<VtkVolumeWrap>(info.Holder());
	vtkVolume *native = (vtkVolume *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMinXBound();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkVolumeWrap::GetMinYBound(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVolumeWrap *wrapper = ObjectWrap::Unwrap<VtkVolumeWrap>(info.Holder());
	vtkVolume *native = (vtkVolume *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMinYBound();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkVolumeWrap::GetMinZBound(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVolumeWrap *wrapper = ObjectWrap::Unwrap<VtkVolumeWrap>(info.Holder());
	vtkVolume *native = (vtkVolume *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMinZBound();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkVolumeWrap::GetProperty(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVolumeWrap *wrapper = ObjectWrap::Unwrap<VtkVolumeWrap>(info.Holder());
	vtkVolume *native = (vtkVolume *)wrapper->native.GetPointer();
	vtkVolumeProperty * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetProperty();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkVolumePropertyWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkVolumePropertyWrap *w = new VtkVolumePropertyWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkVolumeWrap::GetVolumes(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVolumeWrap *wrapper = ObjectWrap::Unwrap<VtkVolumeWrap>(info.Holder());
	vtkVolume *native = (vtkVolume *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkPropCollectionWrap *a0 = ObjectWrap::Unwrap<VtkPropCollectionWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->GetVolumes(
			(vtkPropCollection *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkVolumeWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVolumeWrap *wrapper = ObjectWrap::Unwrap<VtkVolumeWrap>(info.Holder());
	vtkVolume *native = (vtkVolume *)wrapper->native.GetPointer();
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

void VtkVolumeWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVolumeWrap *wrapper = ObjectWrap::Unwrap<VtkVolumeWrap>(info.Holder());
	vtkVolume *native = (vtkVolume *)wrapper->native.GetPointer();
	vtkVolume * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkVolumeWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkVolumeWrap *w = new VtkVolumeWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkVolumeWrap::ReleaseGraphicsResources(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVolumeWrap *wrapper = ObjectWrap::Unwrap<VtkVolumeWrap>(info.Holder());
	vtkVolume *native = (vtkVolume *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkWindowWrap *a0 = ObjectWrap::Unwrap<VtkWindowWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->ReleaseGraphicsResources(
			(vtkWindow *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkVolumeWrap::RenderVolumetricGeometry(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVolumeWrap *wrapper = ObjectWrap::Unwrap<VtkVolumeWrap>(info.Holder());
	vtkVolume *native = (vtkVolume *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkViewportWrap *a0 = ObjectWrap::Unwrap<VtkViewportWrap>(info[0]->ToObject());
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->RenderVolumetricGeometry(
			(vtkViewport *) a0->native.GetPointer()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkVolumeWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVolumeWrap *wrapper = ObjectWrap::Unwrap<VtkVolumeWrap>(info.Holder());
	vtkVolume *native = (vtkVolume *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkVolume * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::Function>(VtkVolumeWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkVolumeWrap *w = new VtkVolumeWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkVolumeWrap::SetMapper(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVolumeWrap *wrapper = ObjectWrap::Unwrap<VtkVolumeWrap>(info.Holder());
	vtkVolume *native = (vtkVolume *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkAbstractVolumeMapperWrap *a0 = ObjectWrap::Unwrap<VtkAbstractVolumeMapperWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetMapper(
			(vtkAbstractVolumeMapper *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkVolumeWrap::SetProperty(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVolumeWrap *wrapper = ObjectWrap::Unwrap<VtkVolumeWrap>(info.Holder());
	vtkVolume *native = (vtkVolume *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkVolumePropertyWrap *a0 = ObjectWrap::Unwrap<VtkVolumePropertyWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetProperty(
			(vtkVolumeProperty *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkVolumeWrap::ShallowCopy(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVolumeWrap *wrapper = ObjectWrap::Unwrap<VtkVolumeWrap>(info.Holder());
	vtkVolume *native = (vtkVolume *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkPropWrap *a0 = ObjectWrap::Unwrap<VtkPropWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->ShallowCopy(
			(vtkProp *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkVolumeWrap::Update(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVolumeWrap *wrapper = ObjectWrap::Unwrap<VtkVolumeWrap>(info.Holder());
	vtkVolume *native = (vtkVolume *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Update();
}

void VtkVolumeWrap::UpdateTransferFunctions(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVolumeWrap *wrapper = ObjectWrap::Unwrap<VtkVolumeWrap>(info.Holder());
	vtkVolume *native = (vtkVolume *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkRendererWrap *a0 = ObjectWrap::Unwrap<VtkRendererWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->UpdateTransferFunctions(
			(vtkRenderer *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

