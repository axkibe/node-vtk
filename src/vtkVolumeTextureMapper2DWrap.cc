/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkVolumeTextureMapperWrap.h"
#include "vtkVolumeTextureMapper2DWrap.h"
#include "vtkObjectWrap.h"
#include "vtkRendererWrap.h"
#include "vtkVolumeWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkVolumeTextureMapper2DWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkVolumeTextureMapper2DWrap::ptpl;

VtkVolumeTextureMapper2DWrap::VtkVolumeTextureMapper2DWrap()
{ }

VtkVolumeTextureMapper2DWrap::VtkVolumeTextureMapper2DWrap(vtkSmartPointer<vtkVolumeTextureMapper2D> _native)
{ native = _native; }

VtkVolumeTextureMapper2DWrap::~VtkVolumeTextureMapper2DWrap()
{ }

void VtkVolumeTextureMapper2DWrap::Init(v8::Local<v8::Object> exports)
{
	if (!constructor.IsEmpty()) return;
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkVolumeTextureMapperWrap::Init( exports );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkVolumeTextureMapperWrap::ptpl));

	tpl->SetClassName(Nan::New("VtkVolumeTextureMapper2DWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );

	exports->Set(Nan::New("vtkVolumeTextureMapper2D").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("VolumeTextureMapper2D").ToLocalChecked(),tpl->GetFunction());
}

void VtkVolumeTextureMapper2DWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetInternalSkipFactor", GetInternalSkipFactor);
	Nan::SetPrototypeMethod(tpl, "getInternalSkipFactor", GetInternalSkipFactor);

	Nan::SetPrototypeMethod(tpl, "GetMaximumNumberOfPlanes", GetMaximumNumberOfPlanes);
	Nan::SetPrototypeMethod(tpl, "getMaximumNumberOfPlanes", GetMaximumNumberOfPlanes);

	Nan::SetPrototypeMethod(tpl, "GetMaximumStorageSize", GetMaximumStorageSize);
	Nan::SetPrototypeMethod(tpl, "getMaximumStorageSize", GetMaximumStorageSize);

	Nan::SetPrototypeMethod(tpl, "GetSaveTextures", GetSaveTextures);
	Nan::SetPrototypeMethod(tpl, "getSaveTextures", GetSaveTextures);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "Render", Render);
	Nan::SetPrototypeMethod(tpl, "render", Render);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetMaximumNumberOfPlanes", SetMaximumNumberOfPlanes);
	Nan::SetPrototypeMethod(tpl, "setMaximumNumberOfPlanes", SetMaximumNumberOfPlanes);

	Nan::SetPrototypeMethod(tpl, "SetMaximumStorageSize", SetMaximumStorageSize);
	Nan::SetPrototypeMethod(tpl, "setMaximumStorageSize", SetMaximumStorageSize);

	Nan::SetPrototypeMethod(tpl, "SetTargetTextureSize", SetTargetTextureSize);
	Nan::SetPrototypeMethod(tpl, "setTargetTextureSize", SetTargetTextureSize);

}

void VtkVolumeTextureMapper2DWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkVolumeTextureMapper2D> native = vtkSmartPointer<vtkVolumeTextureMapper2D>::New();
		VtkVolumeTextureMapper2DWrap* obj = new VtkVolumeTextureMapper2DWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkVolumeTextureMapper2DWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVolumeTextureMapper2DWrap *wrapper = ObjectWrap::Unwrap<VtkVolumeTextureMapper2DWrap>(info.Holder());
	vtkVolumeTextureMapper2D *native = (vtkVolumeTextureMapper2D *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkVolumeTextureMapper2DWrap::GetInternalSkipFactor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVolumeTextureMapper2DWrap *wrapper = ObjectWrap::Unwrap<VtkVolumeTextureMapper2DWrap>(info.Holder());
	vtkVolumeTextureMapper2D *native = (vtkVolumeTextureMapper2D *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetInternalSkipFactor();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkVolumeTextureMapper2DWrap::GetMaximumNumberOfPlanes(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVolumeTextureMapper2DWrap *wrapper = ObjectWrap::Unwrap<VtkVolumeTextureMapper2DWrap>(info.Holder());
	vtkVolumeTextureMapper2D *native = (vtkVolumeTextureMapper2D *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMaximumNumberOfPlanes();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkVolumeTextureMapper2DWrap::GetMaximumStorageSize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVolumeTextureMapper2DWrap *wrapper = ObjectWrap::Unwrap<VtkVolumeTextureMapper2DWrap>(info.Holder());
	vtkVolumeTextureMapper2D *native = (vtkVolumeTextureMapper2D *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMaximumStorageSize();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkVolumeTextureMapper2DWrap::GetSaveTextures(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVolumeTextureMapper2DWrap *wrapper = ObjectWrap::Unwrap<VtkVolumeTextureMapper2DWrap>(info.Holder());
	vtkVolumeTextureMapper2D *native = (vtkVolumeTextureMapper2D *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSaveTextures();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkVolumeTextureMapper2DWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVolumeTextureMapper2DWrap *wrapper = ObjectWrap::Unwrap<VtkVolumeTextureMapper2DWrap>(info.Holder());
	vtkVolumeTextureMapper2D *native = (vtkVolumeTextureMapper2D *)wrapper->native.GetPointer();
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

void VtkVolumeTextureMapper2DWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVolumeTextureMapper2DWrap *wrapper = ObjectWrap::Unwrap<VtkVolumeTextureMapper2DWrap>(info.Holder());
	vtkVolumeTextureMapper2D *native = (vtkVolumeTextureMapper2D *)wrapper->native.GetPointer();
	vtkVolumeTextureMapper2D * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkVolumeTextureMapper2DWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkVolumeTextureMapper2DWrap *w = new VtkVolumeTextureMapper2DWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkVolumeTextureMapper2DWrap::Render(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVolumeTextureMapper2DWrap *wrapper = ObjectWrap::Unwrap<VtkVolumeTextureMapper2DWrap>(info.Holder());
	vtkVolumeTextureMapper2D *native = (vtkVolumeTextureMapper2D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkRendererWrap *a0 = ObjectWrap::Unwrap<VtkRendererWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsObject())
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

void VtkVolumeTextureMapper2DWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVolumeTextureMapper2DWrap *wrapper = ObjectWrap::Unwrap<VtkVolumeTextureMapper2DWrap>(info.Holder());
	vtkVolumeTextureMapper2D *native = (vtkVolumeTextureMapper2D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkVolumeTextureMapper2D * r;
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
			Nan::New<v8::Function>(VtkVolumeTextureMapper2DWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkVolumeTextureMapper2DWrap *w = new VtkVolumeTextureMapper2DWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkVolumeTextureMapper2DWrap::SetMaximumNumberOfPlanes(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVolumeTextureMapper2DWrap *wrapper = ObjectWrap::Unwrap<VtkVolumeTextureMapper2DWrap>(info.Holder());
	vtkVolumeTextureMapper2D *native = (vtkVolumeTextureMapper2D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetMaximumNumberOfPlanes(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkVolumeTextureMapper2DWrap::SetMaximumStorageSize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVolumeTextureMapper2DWrap *wrapper = ObjectWrap::Unwrap<VtkVolumeTextureMapper2DWrap>(info.Holder());
	vtkVolumeTextureMapper2D *native = (vtkVolumeTextureMapper2D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetMaximumStorageSize(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkVolumeTextureMapper2DWrap::SetTargetTextureSize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVolumeTextureMapper2DWrap *wrapper = ObjectWrap::Unwrap<VtkVolumeTextureMapper2DWrap>(info.Holder());
	vtkVolumeTextureMapper2D *native = (vtkVolumeTextureMapper2D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->SetTargetTextureSize(
				info[0]->Int32Value(),
				info[1]->Int32Value()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

