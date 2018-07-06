/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkOpenGLPolyDataMapperWrap.h"
#include "vtkOpenGLSphereMapperWrap.h"
#include "vtkObjectBaseWrap.h"
#include "vtkRendererWrap.h"
#include "vtkActorWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkOpenGLSphereMapperWrap::ptpl;

VtkOpenGLSphereMapperWrap::VtkOpenGLSphereMapperWrap()
{ }

VtkOpenGLSphereMapperWrap::VtkOpenGLSphereMapperWrap(vtkSmartPointer<vtkOpenGLSphereMapper> _native)
{ native = _native; }

VtkOpenGLSphereMapperWrap::~VtkOpenGLSphereMapperWrap()
{ }

void VtkOpenGLSphereMapperWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkOpenGLSphereMapper").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("OpenGLSphereMapper").ToLocalChecked(), ConstructorGetter);
}

void VtkOpenGLSphereMapperWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkOpenGLSphereMapperWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkOpenGLPolyDataMapperWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkOpenGLPolyDataMapperWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkOpenGLSphereMapperWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetRadius", GetRadius);
	Nan::SetPrototypeMethod(tpl, "getRadius", GetRadius);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "Render", Render);
	Nan::SetPrototypeMethod(tpl, "render", Render);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetRadius", SetRadius);
	Nan::SetPrototypeMethod(tpl, "setRadius", SetRadius);

	Nan::SetPrototypeMethod(tpl, "SetScaleArray", SetScaleArray);
	Nan::SetPrototypeMethod(tpl, "setScaleArray", SetScaleArray);

#ifdef VTK_NODE_PLUS_VTKOPENGLSPHEREMAPPERWRAP_INITPTPL
	VTK_NODE_PLUS_VTKOPENGLSPHEREMAPPERWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkOpenGLSphereMapperWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkOpenGLSphereMapper> native = vtkSmartPointer<vtkOpenGLSphereMapper>::New();
		VtkOpenGLSphereMapperWrap* obj = new VtkOpenGLSphereMapperWrap(native);
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

void VtkOpenGLSphereMapperWrap::GetRadius(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOpenGLSphereMapperWrap *wrapper = ObjectWrap::Unwrap<VtkOpenGLSphereMapperWrap>(info.Holder());
	vtkOpenGLSphereMapper *native = (vtkOpenGLSphereMapper *)wrapper->native.GetPointer();
	float r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetRadius();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkOpenGLSphereMapperWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOpenGLSphereMapperWrap *wrapper = ObjectWrap::Unwrap<VtkOpenGLSphereMapperWrap>(info.Holder());
	vtkOpenGLSphereMapper *native = (vtkOpenGLSphereMapper *)wrapper->native.GetPointer();
	vtkOpenGLSphereMapper * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkOpenGLSphereMapperWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkOpenGLSphereMapperWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkOpenGLSphereMapperWrap *w = new VtkOpenGLSphereMapperWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkOpenGLSphereMapperWrap::Render(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOpenGLSphereMapperWrap *wrapper = ObjectWrap::Unwrap<VtkOpenGLSphereMapperWrap>(info.Holder());
	vtkOpenGLSphereMapper *native = (vtkOpenGLSphereMapper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkRendererWrap::ptpl))->HasInstance(info[0]))
	{
		VtkRendererWrap *a0 = ObjectWrap::Unwrap<VtkRendererWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsObject() && (Nan::New(VtkActorWrap::ptpl))->HasInstance(info[1]))
		{
			VtkActorWrap *a1 = ObjectWrap::Unwrap<VtkActorWrap>(info[1]->ToObject());
						if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->Render(
				(vtkRenderer *) a0->native.GetPointer(),
				(vtkActor *) a1->native.GetPointer()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkOpenGLSphereMapperWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOpenGLSphereMapperWrap *wrapper = ObjectWrap::Unwrap<VtkOpenGLSphereMapperWrap>(info.Holder());
	vtkOpenGLSphereMapper *native = (vtkOpenGLSphereMapper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectBaseWrap *a0 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[0]->ToObject());
		vtkOpenGLSphereMapper * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObjectBase *) a0->native.GetPointer()
		);
		VtkOpenGLSphereMapperWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkOpenGLSphereMapperWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkOpenGLSphereMapperWrap *w = new VtkOpenGLSphereMapperWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkOpenGLSphereMapperWrap::SetRadius(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOpenGLSphereMapperWrap *wrapper = ObjectWrap::Unwrap<VtkOpenGLSphereMapperWrap>(info.Holder());
	vtkOpenGLSphereMapper *native = (vtkOpenGLSphereMapper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetRadius(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkOpenGLSphereMapperWrap::SetScaleArray(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkOpenGLSphereMapperWrap *wrapper = ObjectWrap::Unwrap<VtkOpenGLSphereMapperWrap>(info.Holder());
	vtkOpenGLSphereMapper *native = (vtkOpenGLSphereMapper *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetScaleArray(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

