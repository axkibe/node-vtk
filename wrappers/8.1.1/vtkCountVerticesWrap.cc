/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkPassInputTypeAlgorithmWrap.h"
#include "vtkCountVerticesWrap.h"
#include "vtkObjectBaseWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkCountVerticesWrap::ptpl;

VtkCountVerticesWrap::VtkCountVerticesWrap()
{ }

VtkCountVerticesWrap::VtkCountVerticesWrap(vtkSmartPointer<vtkCountVertices> _native)
{ native = _native; }

VtkCountVerticesWrap::~VtkCountVerticesWrap()
{ }

void VtkCountVerticesWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkCountVertices").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("CountVertices").ToLocalChecked(), ConstructorGetter);
}

void VtkCountVerticesWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkCountVerticesWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkPassInputTypeAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkPassInputTypeAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkCountVerticesWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetOutputArrayName", GetOutputArrayName);
	Nan::SetPrototypeMethod(tpl, "getOutputArrayName", GetOutputArrayName);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetOutputArrayName", SetOutputArrayName);
	Nan::SetPrototypeMethod(tpl, "setOutputArrayName", SetOutputArrayName);

#ifdef VTK_NODE_PLUS_VTKCOUNTVERTICESWRAP_INITPTPL
	VTK_NODE_PLUS_VTKCOUNTVERTICESWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkCountVerticesWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkCountVertices> native = vtkSmartPointer<vtkCountVertices>::New();
		VtkCountVerticesWrap* obj = new VtkCountVerticesWrap(native);
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

void VtkCountVerticesWrap::GetOutputArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCountVerticesWrap *wrapper = ObjectWrap::Unwrap<VtkCountVerticesWrap>(info.Holder());
	vtkCountVertices *native = (vtkCountVertices *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOutputArrayName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkCountVerticesWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCountVerticesWrap *wrapper = ObjectWrap::Unwrap<VtkCountVerticesWrap>(info.Holder());
	vtkCountVertices *native = (vtkCountVertices *)wrapper->native.GetPointer();
	vtkCountVertices * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkCountVerticesWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkCountVerticesWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkCountVerticesWrap *w = new VtkCountVerticesWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkCountVerticesWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCountVerticesWrap *wrapper = ObjectWrap::Unwrap<VtkCountVerticesWrap>(info.Holder());
	vtkCountVertices *native = (vtkCountVertices *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectBaseWrap *a0 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[0]->ToObject());
		vtkCountVertices * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObjectBase *) a0->native.GetPointer()
		);
		VtkCountVerticesWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkCountVerticesWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkCountVerticesWrap *w = new VtkCountVerticesWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCountVerticesWrap::SetOutputArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCountVerticesWrap *wrapper = ObjectWrap::Unwrap<VtkCountVerticesWrap>(info.Holder());
	vtkCountVertices *native = (vtkCountVertices *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetOutputArrayName(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}
