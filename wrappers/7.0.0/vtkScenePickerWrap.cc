/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkObjectWrap.h"
#include "vtkScenePickerWrap.h"
#include "vtkRendererWrap.h"
#include "vtkPropWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkScenePickerWrap::ptpl;

VtkScenePickerWrap::VtkScenePickerWrap()
{ }

VtkScenePickerWrap::VtkScenePickerWrap(vtkSmartPointer<vtkScenePicker> _native)
{ native = _native; }

VtkScenePickerWrap::~VtkScenePickerWrap()
{ }

void VtkScenePickerWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkScenePicker").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("ScenePicker").ToLocalChecked(), ConstructorGetter);
}

void VtkScenePickerWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkScenePickerWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkObjectWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkObjectWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkScenePickerWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "EnableVertexPickingOff", EnableVertexPickingOff);
	Nan::SetPrototypeMethod(tpl, "enableVertexPickingOff", EnableVertexPickingOff);

	Nan::SetPrototypeMethod(tpl, "EnableVertexPickingOn", EnableVertexPickingOn);
	Nan::SetPrototypeMethod(tpl, "enableVertexPickingOn", EnableVertexPickingOn);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetEnableVertexPicking", GetEnableVertexPicking);
	Nan::SetPrototypeMethod(tpl, "getEnableVertexPicking", GetEnableVertexPicking);

	Nan::SetPrototypeMethod(tpl, "GetRenderer", GetRenderer);
	Nan::SetPrototypeMethod(tpl, "getRenderer", GetRenderer);

	Nan::SetPrototypeMethod(tpl, "GetViewProp", GetViewProp);
	Nan::SetPrototypeMethod(tpl, "getViewProp", GetViewProp);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetEnableVertexPicking", SetEnableVertexPicking);
	Nan::SetPrototypeMethod(tpl, "setEnableVertexPicking", SetEnableVertexPicking);

	Nan::SetPrototypeMethod(tpl, "SetRenderer", SetRenderer);
	Nan::SetPrototypeMethod(tpl, "setRenderer", SetRenderer);

#ifdef VTK_NODE_PLUS_VTKSCENEPICKERWRAP_INITPTPL
	VTK_NODE_PLUS_VTKSCENEPICKERWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkScenePickerWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkScenePicker> native = vtkSmartPointer<vtkScenePicker>::New();
		VtkScenePickerWrap* obj = new VtkScenePickerWrap(native);
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

void VtkScenePickerWrap::EnableVertexPickingOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkScenePickerWrap *wrapper = ObjectWrap::Unwrap<VtkScenePickerWrap>(info.Holder());
	vtkScenePicker *native = (vtkScenePicker *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->EnableVertexPickingOff();
}

void VtkScenePickerWrap::EnableVertexPickingOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkScenePickerWrap *wrapper = ObjectWrap::Unwrap<VtkScenePickerWrap>(info.Holder());
	vtkScenePicker *native = (vtkScenePicker *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->EnableVertexPickingOn();
}

void VtkScenePickerWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkScenePickerWrap *wrapper = ObjectWrap::Unwrap<VtkScenePickerWrap>(info.Holder());
	vtkScenePicker *native = (vtkScenePicker *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkScenePickerWrap::GetEnableVertexPicking(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkScenePickerWrap *wrapper = ObjectWrap::Unwrap<VtkScenePickerWrap>(info.Holder());
	vtkScenePicker *native = (vtkScenePicker *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetEnableVertexPicking();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkScenePickerWrap::GetRenderer(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkScenePickerWrap *wrapper = ObjectWrap::Unwrap<VtkScenePickerWrap>(info.Holder());
	vtkScenePicker *native = (vtkScenePicker *)wrapper->native.GetPointer();
	vtkRenderer * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetRenderer();
	VtkRendererWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkRendererWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkRendererWrap *w = new VtkRendererWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkScenePickerWrap::GetViewProp(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkScenePickerWrap *wrapper = ObjectWrap::Unwrap<VtkScenePickerWrap>(info.Holder());
	vtkScenePicker *native = (vtkScenePicker *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsInt32Array())
	{
		v8::Local<v8::Int32Array>a0(v8::Local<v8::Int32Array>::Cast(info[0]->ToObject()));
		if( a0->Length() < 2 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		vtkProp * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetViewProp(
			(int *)(a0->Buffer()->GetContents().Data())
		);
		VtkPropWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkPropWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkPropWrap *w = new VtkPropWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsArray())
	{
		v8::Local<v8::Array>a0(v8::Local<v8::Array>::Cast(info[0]->ToObject()));
		int b0[2];
		if( a0->Length() < 2 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		for( i = 0; i < 2; i++ )
		{
			if( !a0->Get(i)->IsInt32() )
			{
				Nan::ThrowError("Array contents invalid.");
				return;
			}
			b0[i] = a0->Get(i)->Int32Value();
		}
		vtkProp * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetViewProp(
			b0
		);
		VtkPropWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkPropWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkPropWrap *w = new VtkPropWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkScenePickerWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkScenePickerWrap *wrapper = ObjectWrap::Unwrap<VtkScenePickerWrap>(info.Holder());
	vtkScenePicker *native = (vtkScenePicker *)wrapper->native.GetPointer();
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

void VtkScenePickerWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkScenePickerWrap *wrapper = ObjectWrap::Unwrap<VtkScenePickerWrap>(info.Holder());
	vtkScenePicker *native = (vtkScenePicker *)wrapper->native.GetPointer();
	vtkScenePicker * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkScenePickerWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkScenePickerWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkScenePickerWrap *w = new VtkScenePickerWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkScenePickerWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkScenePickerWrap *wrapper = ObjectWrap::Unwrap<VtkScenePickerWrap>(info.Holder());
	vtkScenePicker *native = (vtkScenePicker *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkScenePicker * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		VtkScenePickerWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkScenePickerWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkScenePickerWrap *w = new VtkScenePickerWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkScenePickerWrap::SetEnableVertexPicking(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkScenePickerWrap *wrapper = ObjectWrap::Unwrap<VtkScenePickerWrap>(info.Holder());
	vtkScenePicker *native = (vtkScenePicker *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetEnableVertexPicking(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkScenePickerWrap::SetRenderer(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkScenePickerWrap *wrapper = ObjectWrap::Unwrap<VtkScenePickerWrap>(info.Holder());
	vtkScenePicker *native = (vtkScenePicker *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkRendererWrap::ptpl))->HasInstance(info[0]))
	{
		VtkRendererWrap *a0 = ObjectWrap::Unwrap<VtkRendererWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetRenderer(
			(vtkRenderer *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

